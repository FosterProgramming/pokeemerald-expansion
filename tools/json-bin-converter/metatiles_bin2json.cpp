#include "jsonbinconverter.h"
#include "commonutils.h"
#include "datainfos.h"
#include "custominfos.h"

#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <filesystem>
#include <nlohmann/json.hpp>

std::map<std::string, uint16_t> tiles_masks{
    {"tileId",  0x03FF},
    {"xflip",   0x0400},
    {"yflip",   0x0800},
    {"palette", 0xF000}
};


nlohmann::ordered_json createMetatileJson(nlohmann::ordered_json schema, std::string name, const std::vector<std::byte>& metatiles_buffer, const std::vector<std::byte>& metatile_attributes_buffer) {
    nlohmann::ordered_json json;
    int ratio = metatiles_buffer.size() / metatile_attributes_buffer.size();
    int metatiles_count, tiles_per_metatiles, attribute_byte_size;
    if (ratio % 3 == 0)
    {
        tiles_per_metatiles = 12;
        ratio /= 3;
        metatiles_count = metatiles_buffer.size() / 24;
    }
    else
    {
        tiles_per_metatiles = 8;
        ratio /= 2;
        metatiles_count = metatiles_buffer.size() / 16;
    }
    attribute_byte_size = metatile_attributes_buffer.size() / metatiles_count;

    json["metatiles"] = nlohmann::ordered_json::array();
    uint32_t temp_var = 0;
    //std::cout << "ratio: " << attribute_byte_size << "\n";
    for (int i = 0; i < metatiles_count; i++)
    {
        temp_var = 0;
        nlohmann::ordered_json metatile = nlohmann::ordered_json::object();
        metatile["label"] = std::string("");
        for (int byte_index = 0; byte_index < attribute_byte_size; byte_index++)
        {
            std::byte byte = metatile_attributes_buffer[i * attribute_byte_size + byte_index];
            temp_var |= static_cast<uint32_t>(byte) << (byte_index * 8);
        }
        for (const auto& [key, value]: schema["attributes"].items()) {
            // Mask the full variable to isolate the var we want, then bit shift the mask until we hit the
            //  start of our mask
            int mask = hexToInt<uint32_t>(value.template get<std::string>());
            uint32_t val = (temp_var & mask) >> firstBitOffset(mask);
            metatile[key] = schema[key][val];
        }

        metatile["tiles"] = nlohmann::ordered_json::array();
        for (int j = 0; j < tiles_per_metatiles; j++)
        {
            temp_var = 0;
            nlohmann::ordered_json tile = nlohmann::ordered_json::object();
            for (int byte_index = 0; byte_index < 2; byte_index++)
            {
                std::byte byte = metatiles_buffer[(i * tiles_per_metatiles + j) * 2 + byte_index];
                temp_var |= static_cast<uint32_t>(byte) << (byte_index * 8);
            }

            for (auto mask: tiles_masks) {
                // Mask the full variable to isolate the var we want, then bit shift the mask until we hit the
                //  start of our mask
                uint16_t val = (temp_var & mask.second) >> firstBitOffset(mask.second);
                if (mask.first == "xflip" or mask.first == "yflip")
                    tile[mask.first] = bool(val);
                else
                    tile[mask.first] = val;
            }
            metatile["tiles"].push_back(tile);
        }
        json["metatiles"].push_back(metatile);
    }
    return json;
}

int main(int argc, char *argv[])
{
    if (argc < 2) {
        FATAL_ERROR("test");
    }

    std::vector<std::filesystem::path> folder_paths;
    for (int i = 1; i < argc; i++) {
        folder_paths.emplace_back(std::filesystem::path(argv[i]));
    }

    std::filesystem::path path{"fieldmap_schema.json"};
    std::ifstream json_stream(path);
    nlohmann::ordered_json schema_json = nlohmann::json::parse(json_stream);

    for(auto folder_path: folder_paths) {
        std::filesystem::path metatiles_path = folder_path / "metatiles.bin";
        std::filesystem::path metatile_attributes_path = folder_path / "metatile_attributes.bin";
        std::string tileset_name = folder_path.filename();

        std::vector<std::byte> metatiles_buffer = readBinFileIntoBuffer(metatiles_path);
        if (metatiles_buffer.empty()) {
            std::cout << "Warning - Issue reading file:" << metatiles_path << std::endl;
            break;
        }
        std::vector<std::byte> metatile_attributes_buffer = readBinFileIntoBuffer(metatile_attributes_path);
        if (metatile_attributes_buffer.empty()) {
            std::cout << "Warning - Issue reading file:" << metatile_attributes_path << std::endl;
            break;
        }

        nlohmann::ordered_json json = createMetatileJson(schema_json, tileset_name, metatiles_buffer, metatile_attributes_buffer);

        // Serialize as json
        std::filesystem::path json_path = folder_path / "metatiles.json";
        std::ofstream output_json_file(json_path);
        output_json_file << json.dump(2);
    }

    return 0;
}