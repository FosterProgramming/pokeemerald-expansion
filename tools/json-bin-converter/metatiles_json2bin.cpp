#include "jsonbinconverter.h"
#include "commonutils.h"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

std::map<std::string, uint16_t> tiles_masks{
    {"tileId",  0x03FF},
    {"xflip",   0x0400},
    {"yflip",   0x0800},
    {"palette", 0xF000}
};


int main(int argc, char *argv[])
{
    if (argc < 2) {
        FATAL_ERROR("test");
    }

    std::vector<std::string> file_names;
    for (int i = 1; i < argc; i++) {
        file_names.emplace_back(argv[i]);
    }

    std::filesystem::path path1{"fieldmap_schema.json"};
    std::ifstream json_stream1(path1);
    nlohmann::ordered_json schema_json = nlohmann::json::parse(json_stream1);

    std::map<std::string, uint16_t> attribute_masks;
    for (const auto& [key, value]: schema_json["attributes"].items()) {
        attribute_masks.insert(std::make_pair(key, hexToInt<uint16_t>(value.template get<std::string>())));
    }

    for(auto file_name: file_names) {
        std::filesystem::path json_path = file_name;
        std::filesystem::path tileset_folder = json_path.parent_path();
        std::ifstream json_stream(json_path);
        nlohmann::ordered_json metatiles_json = nlohmann::json::parse(json_stream);

        std::vector<uint16_t> tiles;
        std::vector<uint16_t> attributes_data;
        for (auto metatile: metatiles_json["metatiles"]) {
            
            for (auto tile_data: metatile["tiles"]) {
                uint16_t temp_tile{0};
                for (const auto& [key, value]: tiles_masks) {
                    temp_tile |= static_cast<uint16_t>(tile_data[key].template get<uint16_t>() << firstBitOffset(value) & value);
                }
                tiles.push_back(temp_tile);
            }
            uint16_t attributes{0};
            for (const auto& [key, value]: attribute_masks) {
                uint16_t hexValue;
                for (hexValue = 0; hexValue < schema_json[key].size(); hexValue++)
                {
                    if (schema_json[key][hexValue] == metatile[key])
                        break;
                }
                attributes |= static_cast<uint16_t>(hexValue << firstBitOffset(value) & value);
            }
            attributes_data.push_back(attributes);
        }

        std::filesystem::path path1 = tileset_folder / "metatiles.bin";
        std::ofstream metatile_binfile{path1, std::ios::binary | std::ios::out};
        for (const uint16_t& tile: tiles) {
            metatile_binfile.write(reinterpret_cast<const char *>(&tile), sizeof(tile));
        }

        std::filesystem::path path2 = tileset_folder / "metatile_attributes.bin";
        std::ofstream attributes_binfile{path2, std::ios::binary | std::ios::out};
        for (const uint16_t& attributes: attributes_data) {
            attributes_binfile.write(reinterpret_cast<const char *>(&attributes), sizeof(attributes));
        }
    }
}