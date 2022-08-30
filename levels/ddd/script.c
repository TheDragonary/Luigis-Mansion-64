#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ddd/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ddd_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,61192,60425,64218,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,63608,60425,1436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,10,59335,65471,1634,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,10,59242,65471,1461,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,10,59152,65471,1292,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,32,384,60940,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63349,62421,816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,62952,60425,63762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,32,2667,60940,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chirp_chirp,0,62410,61622,928,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,0,62433,63953,65522,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,33,60603,60425,412,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,79,63957,60425,1052,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,0,63957,60413,1052,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,61956,62906,64416,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,60850,60425,875,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chirp_chirp,32,61502,62043,2,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_sushi,32,62433,62465,65522,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ddd_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chirp_chirp,0,65434,63356,115,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chirp_chirp,0,62873,63930,65531,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,3904,61444,61794,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,2825,123,5573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3209,123,5860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,3687,123,5913,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4187,123,5913,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,4609,123,5860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,5025,123,5573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5760,723,1734,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5760,723,1934,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5760,493,2570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,935,123,3379,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2384,123,5487,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6885,123,3497,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6802,123,158,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6802,123,64982,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2795,889,3579,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,5507,945,865,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1623,947,920,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,3920,62336,2500,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,5140,62636,64536,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,37,1321,61467,2812,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,16,2059,61467,62724,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,5630,61430,62776,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,6340,61430,64123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,4943,121,6056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,64,3834,61467,5078,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5760,693,2770,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5760,693,2970,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,5960,293,2570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6160,93,2570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,2859,61444,4305,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,87,6160,61467,2816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,6888,121,4070,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2905,121,6056,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,951,121,4069,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,6479,65443,2570,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,1179,109,3826,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3834,61465,5077,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1322,61465,2813,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,6162,61465,2816,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,6264,61465,63432,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2058,61465,62725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,107,6265,61467,63432,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,5222,61444,3900,2),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071,  -270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071,  -130,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish3),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -4270,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFish2),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -2000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3071, -3000,   0, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
    OBJECT(/*model*/ MODEL_DL_WHIRLPOOL, /*pos*/ -3174, -4915, 102, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWhirlpool),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,      /*pos*/ -2400, -4607, 125, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTreasureChests, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_MANTA_RAY, /*pos*/ -4640, -1380,  40, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvMantaRay,       /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB_DOOR, /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserSubDoor),
    OBJECT(/*model*/ MODEL_DDD_BOWSER_SUB,      /*pos*/    0,    0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowsersSub),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5120, 1005,  3584, /*angle*/ 0, 180, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5605, 1005,  3380, /*angle*/ 0, 270, 0, /*behParam*/ 0x00150000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1800, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1075, /*angle*/ 0, 180, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 1830, 1005,   520, /*angle*/ 0, 270, 0, /*behParam*/ 0x00140000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 4000, 1005,  1275, /*angle*/ 0,   0, 0, /*behParam*/ 0x000B0000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 5760, 1005,   360, /*angle*/ 0, 270, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3310, 1005, -1945, /*angle*/ 0,   0, 0, /*behParam*/ 0x00170000, /*beh*/ bhvDDDPole),
    OBJECT(/*model*/ MODEL_DDD_POLE,            /*pos*/ 3550, 1005, -2250, /*angle*/ 0,   0, 0, /*behParam*/ 0x000D0000, /*beh*/ bhvDDDPole),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319, -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 3900,   850,  -600, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,                    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 5513,  1200,   900, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar,    /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 3404, -3319,  -489, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvJetStreamRingSpawner, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 2030, -3700, -2780, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                    /*acts*/ ALL_ACTS),
    RETURN(),
};

const LevelScript level_ddd_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart,  _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB,      ddd_geo_0004A0),
    LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE,            ddd_geo_000450),

    AREA(/*index*/ 1, ddd_geo_0004C0),
MACRO_OBJECTS(local_macro_objects_ddd_1),
WARP_NODE(243,16,1,30,0),
WARP_NODE(241,6,3,103,0),
WARP_NODE(240,6,3,53,0),
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x0, bhvBowserSubDoor,63),
OBJECT_WITH_ACTS(207,6787,109,-824,0,270,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel,63),
OBJECT_WITH_ACTS(0,-1645,-2754,0,0,90,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,2859,-4092,4305,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,224,-2754,0,0,90,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,6786,123,892,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(56,1420,1005,520,0,270,0,0x190000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,1420,1005,-2300,0,0,0,0x210000, bhvDDDPole,63),
OBJECT_WITH_ACTS(56,5090,1005,3580,0,180,0,0x180000, bhvDDDPole,31),
OBJECT_WITH_ACTS(122,5161,1071,-2333,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,3404,-2485,-486,0,0,0,0x5000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(56,5090,1005,1285,0,180,0,0x1f0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(137,6786,407,-194,0,0,0,0x20000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(124,6930,123,1752,0,270,0,0x350000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1996,1178,-1588,0,270,0,0x3000000, bhvHiddenRedCoinStar,63),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ -3174, -4915, 102, /*strength*/ 20),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 2, /*displace*/ -8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, ddd_geo_000570),
MACRO_OBJECTS(local_macro_objects_ddd_2),
WARP_NODE(243,16,1,30,0),
WARP_NODE(241,6,3,103,0),
WARP_NODE(240,6,3,53,0),
OBJECT_WITH_ACTS(54,0,0,0,0,0,0,0x0, bhvBowserSubDoor,63),
OBJECT_WITH_ACTS(207,6787,109,-824,0,270,0,0x0, bhvFloorSwitchHiddenObjects,63),
OBJECT_WITH_ACTS(0,0,0,0,0,0,0,0x0, bhvInitializeChangingWaterLevel,63),
OBJECT_WITH_ACTS(0,-1645,-2754,0,0,90,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,2859,-4092,4305,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,224,-2754,0,0,90,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,6786,123,892,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(56,1420,1005,520,0,270,0,0x190000, bhvDDDPole,31),
OBJECT_WITH_ACTS(56,1420,1005,-2300,0,0,0,0x210000, bhvDDDPole,63),
OBJECT_WITH_ACTS(56,5090,1005,3580,0,180,0,0x180000, bhvDDDPole,31),
OBJECT_WITH_ACTS(122,5161,1071,-2333,0,0,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(0,3404,-2485,-486,0,0,0,0x5000000, bhvHiddenStar,63),
OBJECT_WITH_ACTS(56,5090,1005,1285,0,180,0,0x1f0000, bhvDDDPole,31),
OBJECT_WITH_ACTS(137,6786,407,-194,0,0,0,0x20000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(124,6930,123,1752,0,270,0,0x350000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1996,1178,-1588,0,270,0,0x3000000, bhvHiddenRedCoinStar,63),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 0, /*pos*/ 3355, -3575, -515, /*strength*/ -30),
        WHIRLPOOL(/*unk2*/ 1, /*unk3*/ 2, /*pos*/ 3917, -2040, -6041, /*strength*/ 50),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF3, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_3),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 1, /*displace*/ 8192, 0, 0),
        TERRAIN(/*terrainData*/ ddd_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -3071, 3000, 500),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};