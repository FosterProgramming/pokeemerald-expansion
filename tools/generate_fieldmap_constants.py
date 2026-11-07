import json

def get_shift_from_mask_string(mask_string):
    mask = int(mask_string, 16)
    shift = 0
    while mask & 1 == 0:
        mask = mask >> 1
        shift += 1
    return shift

with open("fieldmap_schema.json", "r") as f:
    schema = json.load(f)

fieldmap_constants = {};

for constant, value in schema["constants"].items():
    if value != None:
        fieldmap_constants[constant] = str(value)

fieldmap_constants["NUM_METATILES_TOTAL"] = str(int(schema["mapgrid_properties"]["metatile_id"], 16) + 1)
for mapgrid_property, mask in schema["mapgrid_properties"].items():
    fieldmap_constants["MAPGRID_" + mapgrid_property.upper() + "_MASK"] = mask.upper()
    fieldmap_constants["MAPGRID_" + mapgrid_property.upper() + "_SHIFT"] = str(get_shift_from_mask_string(mask))


for attribute, mask in schema["attributes"].items():
    fieldmap_constants["METATILE_ATTR_" + attribute.upper() + "_MASK"] = mask.upper()
    fieldmap_constants["METATILE_ATTR_" + attribute.upper() + "_SHIFT"] = str(get_shift_from_mask_string(mask))

file_contents = "//\n// DO NOT MODIFY THIS FILE! It is auto-generated from generate_fieldmap_constants.py\n\n"
for constant, value in fieldmap_constants.items():
    file_contents += f"#define {constant} {value}\n"

file_contents += "\n\nenum {\n"
for i, layer in enumerate(schema["layer"]):
    if layer != None:
        file_contents += f"    {layer},\n"
    else:
        file_contents += f"    METATILE_LAYER_UNUSED_{i},\n"
file_contents += "};\n"

with open("include/fieldmap_constants.h", "w+") as f:
    f.write(file_contents)

file_contents = "//\n// DO NOT MODIFY THIS FILE! It is auto-generated from generate_fieldmap_constants.py\n"
file_contents += "#ifndef GUARD_METATILE_BEHAVIORS_H\n"
file_contents += "#define GUARD_METATILE_BEHAVIORS_H\n"
file_contents += "\nenum {\n"
for i, metatiler_behavior in enumerate(schema["behavior"]):
    if metatiler_behavior != None:
        file_contents += f"    {metatiler_behavior},\n"
    else:
        file_contents += f"    MB_UNUSED_{i},\n"
file_contents += "};\n"

file_contents += "\n#endif // GUARD_METATILE_BEHAVIORS_H\n"

with open("include/constants/metatile_behaviors.h", "w+") as f:
    f.write(file_contents)
