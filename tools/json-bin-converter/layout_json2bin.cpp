#include "jsonbinconverter.h"
#include "commonutils.h"

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

void createBinFile(std::map<std::string, uint16_t> masks, nlohmann::ordered_json grid_data, std::filesystem::path path) {
    std::ofstream bin_file{path, std::ios::binary | std::ios::out};
    std::vector<uint16_t> mapgrid_tiles;

    for (auto tile_data: grid_data) {
        uint16_t temp_tile{0};
        for (const auto& [key, value]: masks) {
            temp_tile |= static_cast<uint16_t>(tile_data[key].template get<uint16_t>() << firstBitOffset(value) & value);
        }
        mapgrid_tiles.push_back(temp_tile);
    }

    for (const uint16_t& tile: mapgrid_tiles) {
        bin_file.write(reinterpret_cast<const char *>(&tile), sizeof(tile));
    }
}

void createLayoutInc(nlohmann::ordered_json layout, std::filesystem::path folder_path)
{
    std::string string_path = folder_path / "layout.inc";
    std::ofstream layout_inc(string_path);

    
    layout_inc  << "@\n"
                << "@ DO NOT MODIFY THIS FILE! It is auto-generated from " << string_path << "\n"
                << "@\n\n";

    std::string layout_name = "";
    int i = 0;
    for (auto it = folder_path.begin(); it != folder_path.end(); ++it)
    {
        std::string tmp = it->string();
        if (i >= 2)
            layout_name = layout_name + tmp + "_";
        i++;
    }
    layout_name += "Layout";
    std::string border_label = layout_name + "_Border";
    std::string blockdata_label = layout_name + "_Blockdata";
    layout_inc << border_label << "::\n"
               << "\t.incbin " << folder_path / "border.bin" << "\n\n"
               << blockdata_label << "::\n"
               << "\t.incbin " << folder_path / "map.bin" << "\n\n"
               << "\t.align 2\n"
               << layout_name << "::\n"
               << "\t.4byte " << layout["width"].dump() << "\n"
               << "\t.4byte " << layout["height"].dump()  << "\n"
               << "\t.4byte " << border_label << "\n"
               << "\t.4byte " << blockdata_label << "\n"
               << "\t.4byte " << layout["primary_tileset"].get<std::string>() << "\n"
               << "\t.4byte " << layout["secondary_tileset"].get<std::string>() << "\n"
               ;

    /*
    if (layout["border_width"] != None and layout["border_height"]) //frlg
    {
        layout_inc << "\t.byte " << layout["border_width"].dump() << "\n"
                   << "\t.byte " << layout["border_height"].dump() << "\n"
                   << "\t.2byte 0\n";
    }
    */
    layout_inc << "\n";
}

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

    std::map<std::string, uint16_t> masks;
    for (const auto& [key, value]: schema_json["mapgrid_properties"].items()) {
        masks.insert(std::make_pair(key, hexToInt<uint16_t>(value.template get<std::string>())));
    }

    for(auto file_name: file_names) {
        std::filesystem::path layout_path = file_name.string_value();
        std::filesystem::path layout_folder = layout_path.parent_path();
        std::ifstream json_stream(layout_path);
        nlohmann::ordered_json layout_json = nlohmann::json::parse(json_stream);

        createBinFile(masks, layout_json["map"], layout_folder / "map.bin");
        createBinFile(masks, layout_json["border"], layout_folder / "border.bin");
        createLayoutInc(layout_json, layout_folder);
    }
}
