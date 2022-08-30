#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ccm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,1083,60925,5729,128),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,1257,65034,2305,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,64745,60861,62474,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,59835,63796,2013,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,4134,62468,437,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,61204,60922,3062,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,62252,60671,61327,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,2653,2664,64426,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61921,60929,4790,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,60491,63796,4615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,32,5339,60929,569,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_moneybag,6,64684,65036,2051,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,924,3100,65156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,31,64830,62294,5813,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,27,3499,60942,4611,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,32,1394,64011,3560,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,33,2551,3005,63895,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,26,60420,63792,3834,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,63493,65034,1775,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,62326,64313,63445,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,16,2857,60934,4151,87),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,0,1382,64001,3523,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,641,3098,145,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63573,63028,62597,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,2,63846,998,584,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64249,64650,4616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64390,62604,5949,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1746,60929,4287,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4160,64350,404,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61151,63977,61156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,3708,65140,63994,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,2469,60948,5577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_mr_blizzard,19,61800,863,63078,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,121,3072,60845,469,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62093,1406,62823,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_spindrift,0,60304,63763,62443,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,16,65194,65356,2039,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ccm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3575,4205,64336,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59778,60404,58623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59478,60404,58623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59178,60404,58623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59178,60404,58923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,96,59721,59709,58643,54),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58878,60404,58623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59178,60404,58323,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,6640,63886,700,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59478,60404,58323,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58878,60404,58323,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59061,59906,60696,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59778,60404,58323,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,58878,60404,58923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_star_6,0,59453,61036,58067,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,16,57859,59673,58542,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3375,5153,59386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2275,5340,59386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,65436,5900,59366,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,2040,685,63361,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,310,945,64236,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3000,330,60883,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4624,202,59742,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5500,4385,62956,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,5650,30,59686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,6700,65101,61436,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,6700,62971,3765,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,4740,62361,6600,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,3170,62166,6260,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1355,61986,5890,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64870,61496,3127,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64711,61416,1630,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63436,61236,630,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,70,3615,65306,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64056,3295,64136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64211,2985,61736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,61801,2555,60626,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,60461,2275,61861,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,61736,1825,64391,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59478,60415,58923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,59778,60415,58923,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_CCM_ROPEWAY_LIFT, /*pos*/ 531, -4430, 6426,    /*angle*/ 0,   0, 0, /*behParam*/ 0x07120000, /*beh*/ bhvPlatformOnTrack),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  2650, -3735,  3970, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSmallPenguin),
    OBJECT(/*model*/ MODEL_PENGUIN,          /*pos*/  -555,  3470, -1000, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallPenguin),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD,      /*pos*/ -2376, -1589,  4256, /*angle*/ 0, 252, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMrBlizzard),
    OBJECT(/*model*/ MODEL_MR_BLIZZARD,      /*pos*/  -394, -1589,  4878, /*angle*/ 0,  74, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMrBlizzard),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_BASE, /*pos*/  2560,  2662, -1122, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSnowmansBottom, /*acts*/ ACT_5),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  2665, -4607,  4525, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCcmTouchedStarSpawn, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN,          /*pos*/  3450, -4700,  4550, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvTuxiesMother,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,             /*pos*/  4200,  -927,   400, /*angle*/ 0,   0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar,   /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_CCM_SNOWMAN_HEAD, /*pos*/ -4230, -1169,  1813, /*angle*/ 0, 270, 0, /*behParam*/ 0x04000000, /*beh*/ bhvSnowmansHead,          /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,             /*pos*/ -2000, -2200, -3000, /*angle*/ 0,   0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                   /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_PENGUIN, /*pos*/ -4952,  6656, -6075, /*angle*/ 0, 270, 0, /*behParam*/ 0x02000000, /*beh*/ bhvRacingPenguin,   /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6500, -5836, -6400, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceFinishLine),
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -6393,  -716,  7503, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPenguinRaceShortcutCheck),
#ifndef VERSION_JP
    OBJECT(/*model*/ MODEL_NONE,    /*pos*/ -4943,  1321,   667, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPlaysMusicTrackWhenTouched),
#endif
    RETURN(),
};

const LevelScript level_ccm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group7_geoSegmentRomStart,  _group7_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group16_geoSegmentRomStart,  _group16_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_8),
    JUMP_LINK(script_func_global_17),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR,    cabin_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE,     snow_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT,  ccm_geo_0003D0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE,  ccm_geo_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD,  ccm_geo_00040C),

    AREA(/*index*/ 1, ccm_geo_00051C),
MACRO_OBJECTS(local_macro_objects_ccm_1),
WARP_NODE(241,6,1,103,0),
WARP_NODE(240,6,1,53,0),
WARP_NODE(10,5,2,10,0),
WARP_NODE(20,5,1,20,0),
OBJECT_WITH_ACTS(0,-4943,1321,667,0,0,0,0x0, bhvPlaysMusicTrackWhenTouched,31),
OBJECT_WITH_ACTS(0,-6393,-716,7503,0,0,0,0x0, bhvPenguinRaceShortcutCheck,31),
OBJECT_WITH_ACTS(0,-6500,-5836,-6400,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(122,-7225,-5636,-6918,0,270,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-5836,7465,-6143,0,90,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ ccm_seg7_area_1_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_048),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SNOW),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    AREA(/*index*/ 2, ccm_geo_0005E8),
MACRO_OBJECTS(local_macro_objects_ccm_2),
WARP_NODE(241,6,1,103,0),
WARP_NODE(240,6,1,53,0),
WARP_NODE(10,5,2,10,0),
WARP_NODE(20,5,1,20,0),
OBJECT_WITH_ACTS(0,-4943,1321,667,0,0,0,0x0, bhvPlaysMusicTrackWhenTouched,31),
OBJECT_WITH_ACTS(0,-6393,-716,7503,0,0,0,0x0, bhvPenguinRaceShortcutCheck,31),
OBJECT_WITH_ACTS(0,-6500,-5836,-6400,0,0,0,0x0, bhvPenguinRaceFinishLine,31),
OBJECT_WITH_ACTS(122,-7225,-5636,-6918,0,270,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-5836,7465,-6143,0,90,0,0xa0000, bhvAirborneWarp,31),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5836, 7465, -6143, /*angle*/ 0, 90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x14, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x14, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ ccm_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 140, /*pos*/ -1512, 2560, -2305),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
