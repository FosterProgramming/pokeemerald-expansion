import json
import re
import sys

txt = """#ifndef GUARD_METATILE_LABELS_H
#define GUARD_METATILE_LABELS_H

//
// DO NOT MODIFY THIS FILE! It is auto-generated from metatiles.json files
//

"""

with open("fieldmap_schema.json", "r") as f:
    schema = json.load(f)

secondary_offset = schema["constants"]["NUM_METATILES_IN_PRIMARY"]

for i in range(1, len(sys.argv)):
    with open(sys.argv[i], "r") as f:
        metatiles = json.load(f)
    is_secondary = False
    if re.match("data/tilesets/secondary/", sys.argv[i]):
         is_secondary = True
    for i, metatile in enumerate(metatiles["metatiles"]):
        if metatile["label"] != "":
            if is_secondary:
                txt += f"#define METATILE_{metatile["label"]} {secondary_offset + i}\n"
            else:
                txt += f"#define METATILE_{metatile["label"]} {i}\n"


txt += """\n// Other
#define METATILE_RSMossdeepGym_RedArrow_Down   0x205
#define METATILE_RSMossdeepGym_RedArrow_Left   0x20C
#define METATILE_RSMossdeepGym_RedArrow_Right  0x204
#define METATILE_RSMossdeepGym_RedArrow_Up     0x20D
#define METATILE_RSMossdeepGym_Switch_Down     0x239
#define METATILE_RSMossdeepGym_Switch_Up       0x238
"""

txt += "\n#endif // GUARD_METATILE_LABELS_H\n"

with open("include/constants/metatile_labels.h", "w+") as f:
    f.write(txt)
