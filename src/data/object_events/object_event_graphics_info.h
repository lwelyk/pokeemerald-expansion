// OBJECT EVENT GRAPHICS INFO START

// 01-1 Brendan

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_BrendanAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BrendanDecorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_BrendanFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_BrendanFishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BrendanMachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_BrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_BrendanSurfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BrendanUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BrendanWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BrendanWatering,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 01-2 May

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_MayAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayDecorating = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_MayDecorating,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_MayFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayFishing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Fishing,
    .images = sPicTable_MayFishing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MayMachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_MayNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MaySurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_MaySurfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayUnderwater = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MayUnderwater,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MayWatering = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MayWatering,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 01-3 Rival Brendan

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkBrendan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_BrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkRsBrendan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_BrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_BrendanAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_BrendanFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BrendanMachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_BrendanNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalBrendanSurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_BrendanSurfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 01-4 Rival May

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkMay = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_MayNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkRsMay = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_PLAYER,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_MayNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayAcroBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_AcroBike,
    .images = sPicTable_MayAcroBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayFieldMove = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_FieldMove,
    .images = sPicTable_MayFieldMove,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayMachBike = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_BIKE_TIRE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MayMachBike,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMayNormal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BrendanMayNormal,
    .images = sPicTable_MayNormal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RivalMaySurfing = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MAY,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Surfing,
    .images = sPicTable_MaySurfing,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 02-01 Placeholder

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PlaceholderF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PlaceholderM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 02-02 Generic People

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Boy1,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Boy2,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boy3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Boy3,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FatMan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_FatMan,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GameboyKidF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_GameboyKidF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GameboyKidM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_GameboyKidM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Girl1,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Girl2,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Girl3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Girl3,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleBoy1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LittleBoy1,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleBoy2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LittleBoy2,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleGirl = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LittleGirl,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Man1,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Man2,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Man3,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Man4,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Man5 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Man5,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_OldMan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_OldMan,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_OldWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_OldWoman,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Woman1,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Woman2,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Woman3,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman4 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Woman4,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Woman5 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Woman5,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 03 Trainer Classes

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AceTrainerF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_AceTrainerF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AceTrainerM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_AceTrainerM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AromaLady = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_AromaLady,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Artist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Artist,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Beauty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Beauty,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Biker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Biker,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BirdKeeper = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BirdKeeper,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BlackBelt = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BlackBelt,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Boarder = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Boarder,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BugCatcher = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_BugCatcher,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Burglar = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Burglar,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Camper = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Camper,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Channeler = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Channeler,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Engineer = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Engineer,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Firebreather = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Firebreather,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Fisherman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Fisherman,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Gentleman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Gentleman,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Guitarist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Guitarist,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HexManiac = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_HexManiac,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hiker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Hiker,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Juggler = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Juggler,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KimonoGirl = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KimonoGirl,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lass = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Lass,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Medium = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Medium,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Officer = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Officer,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Picnicker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Picnicker,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokefanF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PokefanF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokefanM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PokefanM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pokemaniac = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Pokemaniac,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PsychicM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PsychicM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Roughneck = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Roughneck,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sage = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Sage,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sailor = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Sailor,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SchoolKidF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SchoolKidF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SchoolKidM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SchoolKidM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scientist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Scientist,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Skier = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Skier,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SuperNerd = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SuperNerd,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwimmerF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SwimmerF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwimmerM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SwimmerM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Teacher = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Teacher,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Twin = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Twin,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Youngster = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Youngster,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 04 Other People

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cook = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Cook,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LinkReceptionist = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LinkReceptionist,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MartEmployee = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MartEmployee,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Nurse = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Nurse,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 05 Characters

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Leaf = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lyra = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Lyra,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mom = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Mom,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MrPokemon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MrPokemon,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ProfElm = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ProfElm,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ProfOak = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ProfOak,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Red = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Red,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Silver = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Silver,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 06 Gym Leaders

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Blaine = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Blaine,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Blue = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Blue,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Brock,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bugsy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Bugsy,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Chuck = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Chuck,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Claire = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Claire,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Erika = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Erika,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Faulkner = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Faulkner,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Janine = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Janine,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Jasmine = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Jasmine,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LtSurge = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LtSurge,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Misty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Misty,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Morty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Morty,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pryce = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Pryce,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sabrina = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Sabrina,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Whitney = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Whitney,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 07 Elite Four

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bruno = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Bruno,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Karen = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Karen,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Koga = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Koga,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lance = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Lance,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Will = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Will,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 08 Team Rocket

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Giovanni = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Giovanni,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RocketExecutiveF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_RocketExecutiveF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RocketExecutiveM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_RocketExecutiveM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RocketGruntF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_RocketGruntF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RocketGruntM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_RocketGruntM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 09 Objects

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BreakableRock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_BreakableRock,
    .images = sPicTable_BreakableRock,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CuttableTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_CuttableTree,
    .images = sPicTable_CuttableTree,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Fossil = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_Fossil,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pokeball = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Following,
    .images = sPicTable_PokeBall,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ItemBallC = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ItemBallC,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PushableBoulder = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_PushableBoulder,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sudowoodo = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SudowoodoTree,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 10-1 Cushions

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BallCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BallCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DiamondCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_DiamondCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_FireCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_FireCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GrassCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_GrassCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KissCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_KissCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PikaCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_PikaCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RoundCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_RoundCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SpinCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SpinCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_WaterCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_WaterCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ZigzagCushion = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ZigzagCushion,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 10-2 Dolls

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AzurillDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_AzurillDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BaltoyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BaltoyDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigBlastoiseDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigBlastoiseDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigCharizardDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigCharizardDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigLaprasDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigLaprasDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegiceDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigRegiceDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegirockDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigRegirockDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRegisteelDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigRegisteelDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigRhydonDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigRhydonDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigSnorlaxDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigSnorlaxDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigVenusaurDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigVenusaurDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BigWailmerDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BigWailmerDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ChikoritaDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ChikoritaDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ClefairyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_ClefairyDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyndaquilDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CyndaquilDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DittoDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_DittoDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DuskullDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_DuskullDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GulpinDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_GulpinDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_JigglypuffDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_JigglypuffDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KecleonDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_KecleonDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LotadDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_LotadDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MarillDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_MarillDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MeowthDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_MeowthDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MudkipDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_MudkipDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PichuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_PichuDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PikachuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_PikachuDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SeedotDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SeedotDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SkittyDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SkittyDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SmoochumDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SmoochumDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SwabluDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_SwabluDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TogepiDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_TogepiDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TorchicDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_TorchicDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TotodileDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_TotodileDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TreeckoDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_TreeckoDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMagnemiteDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedMagnemiteDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedNatuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedNatuDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedPikachuDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedPikachuDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedPorygon2Doll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedPorygon2Doll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedSquirtleDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedSquirtleDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedWooperDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_UnusedWooperDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_WynautDoll = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_WynautDoll,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 11-1 Emerald People

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Anabel = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AquaMemberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_AquaMemberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Archie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Bard = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brandon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Brawly = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Cameraman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ContestJudge = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyclingTriathleteF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CyclingTriathleteM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DevonEmployee = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Drake = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ExpertF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ExpertM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Flannery = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GameboyKid = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Glacia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Greta = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_HotSpringsOldWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Juan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_LittleBoy3 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Liza = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lucy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MagmaMemberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MagmaMemberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Maniac = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Maxie = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MysteryGiftMan = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_NinjaBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Noland = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Norman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Phoebe = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ProfBirch = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_QuintyPlump = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ReporterF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_ReporterM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RichBoy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RooftopSaleWoman = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Roxanne = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RunningTriathleteF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RunningTriathleteM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scientist1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scientist2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Scott = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Sidney = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Spenser = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Steven = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tate = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Teala = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TrickHouseStatue = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberF = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberM = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_TuberMSwimming = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Tucker = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnionRoomNurse = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Nurse,
    .images = sPicTable_Nurse,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wallace = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wally = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wattson = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderM,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Winona = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GBC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PlaceholderF,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 11-2 Emerald Pokes

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Azumarill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_AzumarillOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Azurill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_AzurillOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Deoxys = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_DEOXYS,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_DeoxysOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Dusclops = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_DusclopsOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonAsleep = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_GROUDON,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_GroudonFront,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonFront = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_GroudonFront,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_GroudonSide = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_GroudonSide,
    .images = sPicTable_GroudonSide,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hooh = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_HO_OH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_HoOh,
    .images = sPicTable_HoOhOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kecleon = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KecleonOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KecleonBridgeShadow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KecleonOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Kirlia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KirliaOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreAsleep = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_KYOGRE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KyogreFront,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreFront = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KyogreFront,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_KyogreSide = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_KyogreSide,
    .affineAnims = sAffineAnimTable_KyogreGroudon,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Latias = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LatiasLatios,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Latios = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LatiasLatios,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Lugia = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_LUGIA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_LugiaOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Mew = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MewOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Pikachu = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PikachuOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Poochyena = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_POOCHYENA,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_PoochyenaOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Rayquaza = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 2048,
    .width = 64,
    .height = 64,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_64x64,
    .subspriteTables = sOamTables_64x64,
    .anims = sAnimTable_Rayquaza,
    .images = sPicTable_RayquazaCutscene,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_RayquazaStill = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 2048,
    .width = 64,
    .height = 64,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_64x64,
    .subspriteTables = sOamTables_64x64,
    .anims = sAnimTable_Standard,
    .images = sPicTable_RayquazaStill,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regice = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Regi,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Regirock = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Regi,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Registeel = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_Regi,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Skitty = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SkittyOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_VigorothCarryingBox = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_VIGOROTH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_VigorothCarryingBox,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_VigorothFacingAway = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_VIGOROTH,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_VigorothFacingAway,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Wingull = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_WingullOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zigzagoon1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ZigzagoonOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Zigzagoon2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Standard,
    .images = sPicTable_ZigzagoonOld,
    .affineAnims = gDummySpriteAffineAnimTable,
};


// 11-3 Emerald Objects

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BirchsBag = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BirchsBag,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_CableCar = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_CABLE_CAR,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 2048,
    .width = 64,
    .height = 64,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_64x64,
    .subspriteTables = sOamTables_64x64,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_CableCar,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_DeoxysTriangle = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_BirthIslandStone,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MovingBox = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_MOVING_BOX,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 128,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_MovingBox,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_MrBrineysBoat = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MrBrineysBoat,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SSTidal = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SSTIDAL,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 1920,
    .width = 96,
    .height = 40,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_8x8,
    .subspriteTables = sOamTables_96x40,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SSTidal,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_SubmarineShadow = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_SUBMARINE_SHADOW,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 1408,
    .width = 88,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_8x8,
    .subspriteTables = sOamTables_88x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_SubmarineShadow,
    .affineAnims = gDummySpriteAffineAnimTable,
};


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Truck = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_TRUCK,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 1152,
    .width = 48,
    .height = 48,
    .paletteSlot = PALSLOT_NPC_SPECIAL,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_48x48,
    .anims = sAnimTable_Inanimate,
    .images = sPicTable_Truck,
    .affineAnims = gDummySpriteAffineAnimTable,
};

// OBJECT EVENT GRAPHICS INFO END

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_PokeBall = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Following,
    .images = sPicTable_PokeBall,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Follower = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 512,
    .width = 32,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_32x32,
    .subspriteTables = sOamTables_32x32,
    .anims = sAnimTable_Following,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Hipster = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan1,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Trader = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan1,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Storyteller = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_Giddy = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_2,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMauvilleOldMan1 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_3,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_UnusedMauvilleOldMan2 = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_4,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_4,
    .shadowSize = SHADOW_SIZE_M,
    .inanimate = FALSE,
    .compressed = FALSE,
    .tracks = TRACKS_FOOT,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_Standard,
    .images = sPicTable_MauvilleOldMan2,
    .affineAnims = gDummySpriteAffineAnimTable,
};

//  ██████╗ ███████╗██████╗ ██████╗ ██╗███████╗███████╗
//  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║██╔════╝██╔════╝
//  ██████╔╝█████╗  ██████╔╝██████╔╝██║█████╗  ███████╗
//  ██╔══██╗██╔══╝  ██╔══██╗██╔══██╗██║██╔══╝  ╚════██║
//  ██████╔╝███████╗██║  ██║██║  ██║██║███████╗███████║
//  ╚═════╝ ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝
//                                                     


const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTree = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = NULL,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeEarlyStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 16,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x16,
    .subspriteTables = sOamTables_16x16,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable,
};

const struct ObjectEventGraphicsInfo gObjectEventGraphicsInfo_BerryTreeLateStages = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_1,
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
    .size = 256,
    .width = 16,
    .height = 32,
    .paletteSlot = PALSLOT_NPC_1,
    .shadowSize = SHADOW_SIZE_S,
    .inanimate = TRUE,
    .compressed = FALSE,
    .tracks = TRACKS_NONE,
    .oam = &gObjectEventBaseOam_16x32,
    .subspriteTables = sOamTables_16x32,
    .anims = sAnimTable_BerryTree,
    .images = sPicTable_PechaBerryTree,
    .affineAnims = gDummySpriteAffineAnimTable,
};