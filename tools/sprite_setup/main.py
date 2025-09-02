import pandas as pd
import os
import itertools

constants_f = "include/constants/event_objects.h"
graphics_f = "src/data/object_events/object_event_graphics.h"
graphics_info_f = "src/data/object_events/object_event_graphics_info.h"
graphics_info_pointers_f = "src/data/object_events/object_event_graphics_info_pointers.h"
pic_tables_f = "src/data/object_events/object_event_pic_tables.h"
spritesheet_rules_f = "spritesheet_rules.mk"

gfx_folders = {
    "00-1 Emerald People":  "people",
    "00-2 Emerald Pokes":   "pokemon_old",
    "00-3 Emerald Objects": "misc",
    "01-1 Brendan":         "people/brendan",
    "01-2 May":             "people/may",
    "01-3 Rival Brendan":   "people/brendan",
    "01-4 Rival May":       "people/may",
    "02-01 Placeholder":    "people",
    "02-02 Generic People": "people",
    "03 Trainer Classes":   "people/trainer_classes",
    "04 Other People":      "people",
    "05 Characters":        "people",
    "06 Gym Leaders":       "people/gym_leaders",
    "07 Elite Four":        "people/elite_four",
    "08 Team Rocket":       "people/team_rocket",
    "09 Objects":           "misc",
    "10-1 Cushions":        "cushions",
    "10-2 Dolls":           "dolls",
    "12 Followers":         "misc",
    "13 Berry Trees":       "n/a"
}

def replace_text_between(file,start,end,text):
    content = ''
    with open(file, 'r') as f:
        content = f.read()
    
    start_index = content.find(start)
    end_index = content.find(end,start_index)
    
    if start_index == -1 or end_index == -1:
        print("Strings not found")
        return
    
    # Adjust the start index to exclude the start string
    start_index += len(start)
    
    new_content = (content[:start_index] + text + content[end_index:])
    
    with open(file, 'w') as f:
        f.write(new_content)
        

def update_constants(data):
    max_length = 5
    constants = []
    for idx, row in data.iterrows():
        constants.append(row['Constant'])
        if len(row['Constant']) > max_length:
            max_length = len(row['Constant'])
    i = 0
    output = []
    for const in constants:
        output.append(
            '#define OBJ_EVENT_GFX_' + 
            const.ljust(max_length+4) + 
            str(i)
        )
        i += 1
    output.append(
        '\n' +
        '#define NUM_OBJ_EVENT_GFX'.ljust(max_length+4) + 
        str(len(constants)) + 
        '\n'
    ) 
    constant_list = "\n".join(output)
    replace_text_between(
        constants_f,
        "// START OBJECT CONSTANTS\n",
        '\n// END OBJECT CONSTANTS',
        constant_list
    )

def update_event_graphics(data):
    gfx_root = "graphics/object_events/pics/"
    output = []
    category = ""
    objs = data[['Category', 'Pic', 'FileName']]
    objs = objs.drop_duplicates(['Pic'], keep='first')
    for idx, row in objs.iterrows():
        if row["Category"] != category:
            category = row["Category"]
            output.append("\n// " + str(row["Category"]))
        sprite = row["Pic"]
        dir = gfx_root + gfx_folders[row["Category"]] + "/"
        fname = row["FileName"]
        fname2 = fname.split(',')
        if len(fname2) > 1:
            fname = fname2[0]
            fname2 = fname2[1]
            output.append(
                "const u32 gObjectEventPic_" +
                str(sprite) +
                '[] = INCBIN_U32("' +
                str(dir) + 
                fname.lower() +
                '.4bpp","' +
                str(dir) +
                fname2.lower() +
                '.4bpp");'
            )
        else:
            output.append(
                "const u32 gObjectEventPic_" +
                str(sprite) +
                '[] = INCBIN_U32("' +
                str(dir) + 
                row["FileName"].lower() +
                '.4bpp");'
            )
    object_events = "\n".join(output)
    replace_text_between(
        graphics_f,
        "// START OBJECT EVENT GRAPHICS\n",
        "\n// END OBJECT EVENT GRAPHICS",
        object_events
    )

def update_event_graphics_pointers(data):
    data['Pointer'] = data[['PointerOverride', 'Images']].bfill(axis=1).iloc[:, 0]
    gfx_info = data[['Constant', 'Category', 'Pointer']]
    gfx_info = gfx_info.drop_duplicates(['Pointer'], keep='first')
    output = []
    category = ""
    for idx, row in gfx_info.iterrows():
        if row["Category"] == "14 DNS":
            continue
        if row["Category"] != category:
            category = row["Category"]
            output.append("\n// " + row["Category"])
        sprite = row["Pointer"]
        output.append(
            "extern const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_" +
            str(sprite) +
            ';'
        )
    object_events = "\n".join(output)
    replace_text_between(
        graphics_info_pointers_f,
        "// POINTERS START\n",
        "\n// POINTERS END",
        object_events
    )
    output = []
    max_length = data["Constant"].str.len().max()
    for idx, row in data.iterrows():
        if row["Category"] == "14 DNS":
            continue
        constant = "    [OBJ_EVENT_GFX_" + row["Constant"] + "] = "
        constant = constant.ljust(max_length + len("    [OBJ_EVENT_GFX_] = "))
        sprite = row["Pointer"]
        pic = " &gObjectEventGraphicsInfo_" + sprite
        output.append(constant + pic + ",")
    table_data = "\n".join(output)
    replace_text_between(
        graphics_info_pointers_f,
        "// CONSTANT TABLE START\n",
        "\n// CONSTANT TABLE END",
        table_data
    )
    
def update_event_pic_tables(data):
    output = []
    category = ""
    for idx, row in data.iterrows():
        if row["Category"] != category:
            category = row["Category"]
            output.append("\n// " + row["Category"])
        if row["Category"] == "12 Followers":
            continue
        if row["Category"] == "14 DNS":
            continue
        sprite = str(row["Sprite"])
        w = str(row["Width"])
        h = str(row["Height"])
        pic = str(row["Pic"])
        table = ""
        match row["Frames"]:
            case "Ascending":
                table = f"    overworld_ascending_frames(gObjectEventPic_{pic}, {w}, {h}),"
            case "Single":
                table = f"    obj_frame_tiles(gObjectEventPic_{pic}),"
            case "Still":
                table = f"    obj_frame_tiles(gObjectEventPic_{pic}),"
                table = list(itertools.repeat(table, 9))
                table = "\n".join(table)
            case _:
                frames = str(row["Frames"]).split(",")
                if len(frames) < 2:
                    continue
                table = []
                for fr in frames:
                    table.append(f"overworld_frame(gObjectEventPic_{pic}, {w}, {h}, {fr}),")
                table = "\n".join(table)
        pic_table = "static const struct SpriteFrameImage sPicTable_" + sprite + "[] = {\n"
        pic_table = pic_table + table + "\n};\n\n"
        output.append(pic_table)
    table_data = "\n".join(output)
    replace_text_between(
        pic_tables_f,
        "// PIC TABLES START\n",
        "\n// PIC TABLES END",
        table_data
    )

def update_event_info(data):
    output = []
    category = ""
    for idx, row in data.iterrows():
        if row["Category"] != category:
            category = row["Category"]
            output.append("\n// " + row["Category"])
        if row["Category"] == '13 Berry Trees' or row["Category"] == "14 DNS" or row["Category"] == '12 Followers':
            continue
        object_event = row["Name"]
        pal_tag = row["PaletteTag"]
        reflection_pal_tag = row["Reflection"]
        size = int(row["Size"])
        width = int(row["Width"])
        height = int(row["Height"])
        pal_slot = row["PaletteSlot"]
        shadow_size = row["ShadowSize"]
        inanimate = str(row["Inanimate"]).upper()
        compressed = str(row["Compressed"]).upper()
        tracks = row["Tracks"]
        oam = row["OAM"]
        subsprite = row["SubspriteTables"]
        anims = row["Anims"]
        images = row["Images"]
        affine_anims = row["AffineAnims"]
        info_table = f"""
const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_{object_event} = {{
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_{pal_tag},
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_{reflection_pal_tag},
    .size = {size},
    .width = {width},
    .height = {height},
    .paletteSlot = PALSLOT_{pal_slot},
    .shadowSize = SHADOW_SIZE_{shadow_size},
    .inanimate = {inanimate},
    .compressed = {compressed},
    .tracks = TRACKS_{tracks},
    .oam = &gObjectEventBaseOam_{oam},
    .subspriteTables = sOamTables_{subsprite},
    .anims = sAnimTable_{anims},
    .images = sPicTable_{images},
    .affineAnims = {affine_anims},
}};
"""
        output.append(info_table)
    table_data = "\n".join(output)
    replace_text_between(
        graphics_info_f,
        "// OBJECT EVENT GRAPHICS INFO START\n",
        "\n// OBJECT EVENT GRAPHICS INFO END",
        table_data
    )

def update_spritesheet_rules(data):
    output = []
    objs = data[['Category', 'Width', 'Height', 'Frames', 'FileName']]
    objs = objs.drop_duplicates(['FileName','Category'], keep='first')
    for idx, row in objs.iterrows():
        if row["Frames"] == "Still":
            continue
        fname = row["FileName"]
        dir = gfx_folders[row["Category"]]
        w = int(row["Width"])
        h = int(row["Height"])
        fname2 = fname.split(',')
        if len(fname2) > 1:
            fname = fname2[0]
            fname2 = fname2[1]
            entry = f"""
$(OBJEVENTGFXDIR)/{dir}/{fname2}.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth {w} -mheight {h}
"""
            output.append(entry)
        entry = f"""
$(OBJEVENTGFXDIR)/{dir}/{fname}.4bpp: %.4bpp: %.png
	$(GFX) $< $@ -mwidth {w} -mheight {h}
"""
        output.append(entry)
    object_events = "\n".join(output)
    replace_text_between(
        spritesheet_rules_f,
        "# OBJECT EVENTS START\n",
        "\n# OBJECT EVENTS END",
        object_events
    )
    

object_events = "tools/sprite_setup/object_events.csv"
sprites = "tools/sprite_setup/sprites.csv"

obj_df = pd.read_csv(object_events)
obj_df = obj_df.sort_values(by=['Category', 'Constant'])
update_constants(obj_df)
obj_df = obj_df[obj_df["Category"] != '12 Followers']
update_event_graphics_pointers(obj_df)
obj_df = obj_df[obj_df["Category"] != '13 Berry Trees']
update_event_info(obj_df)

spr_df = pd.read_csv(sprites, dtype="str")
spr_df = spr_df.sort_values(by=['Category', 'FileName'])
update_event_graphics(spr_df)
update_event_pic_tables(spr_df)
update_spritesheet_rules(spr_df)

