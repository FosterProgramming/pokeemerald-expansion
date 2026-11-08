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

nlohmann::ordered_json createLayoutJson(nlohmann::ordered_json schema, const std::vector<std::byte>& buffer) {
    nlohmann::ordered_json json;
    json = nlohmann::ordered_json::array();
    for (int i = 0; i < buffer.size() / 2; i++)
    {
        uint32_t temp_var = 0;
        nlohmann::ordered_json cell = nlohmann::ordered_json::object();

        for (int byte_index = 0; byte_index < 2; byte_index++)
        {
            std::byte byte = buffer[i * 2 + byte_index];
            temp_var |= static_cast<uint32_t>(byte) << (byte_index * 8);
        }

        for (const auto& [key, value]: schema["mapgrid_properties"].items()) {
            // Mask the full variable to isolate the var we want, then bit shift the mask until we hit the
            //  start of our mask
            int mask = hexToInt<uint32_t>(value.template get<std::string>());
            uint32_t val = (temp_var & mask) >> firstBitOffset(mask);
            cell[key] = val;
        }
        json.push_back(cell);
    }
    return json;
}

int main(int argc, char *argv[])
{
    if (argc < 1) {
        FATAL_ERROR("test");
    }

    
    std::filesystem::path path1{"fieldmap_schema.json"};
    std::ifstream json_stream1(path1);
    nlohmann::ordered_json schema_json = nlohmann::json::parse(json_stream1);

    std::filesystem::path path2{"data/layouts/layouts.json"};
    std::ifstream json_stream2(path2);
    nlohmann::ordered_json layouts_json = nlohmann::json::parse(json_stream2);

    nlohmann::ordered_json layouts2_json;
    layouts2_json = nlohmann::ordered_json::array();
    for(auto layout: layouts_json["layouts"]) {
        std::filesystem::path map_path = layout["blockdata_filepath"];
        std::filesystem::path border_path = layout["border_filepath"];
        std::filesystem::path folder_path = map_path.parent_path();
        if (folder_path != border_path.parent_path())
        {
            std::cout << "Error - Expected border and map file to be in the same folder:\n" << map_path << "\n" << border_path << std::endl;
            break;
        }

        std::vector<std::byte> map_buffer = readBinFileIntoBuffer(map_path);
        if (map_buffer.empty()) {
            std::cout << "Warning - Issue reading file:" << map_path << std::endl;
            break;
        }
        std::vector<std::byte> border_buffer = readBinFileIntoBuffer(border_path);
        if (border_buffer.empty()) {
            std::cout << "Warning - Issue reading file:" << border_path << std::endl;
            break;
        }

        nlohmann::ordered_json json;
        json["id"] = layout["id"];
        json["name"] = layout["name"];
        json["primary_tileset"] = layout["primary_tileset"];
        json["secondary_tileset"] = layout["secondary_tileset"];
        json["width"] = layout["width"];
        json["height"] = layout["height"];
        json["map"] = createLayoutJson(schema_json, map_buffer);
        json["border_width"] = layout["border_width"];
        json["border_height"] = layout["border_height"];
        json["border"] = createLayoutJson(schema_json, border_buffer);

        // Serialize as json
        std::filesystem::path json_path = folder_path / "layout.json";
        std::ofstream output_json_file(json_path);
        output_json_file << json.dump(2);

        layouts2_json.push_back(folder_path);
    }

    std::filesystem::path new_layouts_path = "data/layouts/layouts2.json";
    std::ofstream layouts2_json_file(new_layouts_path);
    layouts2_json_file << layouts2_json.dump(2);

    return 0;
}