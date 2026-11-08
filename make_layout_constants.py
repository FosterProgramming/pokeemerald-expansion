import json

txt = """#ifndef GUARD_CONSTANTS_LAYOUTS_H
#define GUARD_CONSTANTS_LAYOUTS_H

//
// DO NOT MODIFY THIS FILE! It is auto-generated from data/layouts/layouts2.json
//

"""

with open("data/layouts/layouts2.json", "r") as f:
    layouts = json.load(f)

for i, layout_folder in enumerate(layouts):
    with open(layout_folder + "/layout.json") as f:
        layout_data = json.load(f)
    txt += f"#define {layout_data["id"]} {i + 1}\n"

txt += "\n#endif // GUARD_CONSTANTS_LAYOUTS_H\n"

with open("include/constants/layouts.h", "w+") as f:
    f.write(txt)
