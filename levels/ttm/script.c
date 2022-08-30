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
#include "levels/ttm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ttm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,3262,62684,61496,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,16,4402,62453,63610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,68,4351,63994,2365,72),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,64401,61231,5189,154),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1784,1095,1022,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64917,62091,61293,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63598,64625,62433,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6093,2465,60633,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,756,62894,3179,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3046,518,495,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63990,60861,3111,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,123,694,60837,6734,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,4469,60929,1058,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,4975,61710,5063,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,1066,2613,804,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,4172,62675,62723,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,63558,63451,2276,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,0,62635,63432,1577,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,29,581,2308,245,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,123,649,60837,6927,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,10,815,61037,7493,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,64220,2907,60622,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1849,62644,61930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,16,63424,2,1233,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,3807,64359,65514,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,32,60202,1620,1858,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,31,1710,61246,7862,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,117,64245,60912,3810,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,10,905,61037,7663,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,9,2501,64331,1309,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,2610,1972,2440,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,1441,62681,61290,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,31,1516,61246,7852,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_monty_mole_hole,123,63244,63454,4215,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4975,61718,5063,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal,0,64762,1265,64443,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,2466,64532,2583,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,2365,62559,61135,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,572,62700,61379,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,16,6170,5149,6970,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,16,6620,5113,7420,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,16,7720,5149,6320,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_ten_coins,16,7270,5149,5870,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,64093,580,63824,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,4919,4376,4475,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,31,5800,4800,5900,169),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,6600,4762,6300,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,3304,3783,3155,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,512,2195,254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,80,63262,191,62964,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_3[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,6115,6533,5889,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,32,64807,5174,7120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,32,64698,5161,6826,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,63808,61234,1515,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64269,61234,1508,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,60215,65376,59342,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,64279,64127,60509,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,96,62953,64734,58573,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,59025,147,60888,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,32,62190,64866,58691,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58432,1252,41,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,58515,1985,2694,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,62581,4662,6954,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64427,59797,5465,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,65227,59650,6537,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,80,3571,59039,7126,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,96,4420,58792,6414,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4859,58384,3214,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4562,58368,3091,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,4686,58293,2347,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,80,63453,64945,58899,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,64298,62994,63612,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ttm_4[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,32,58251,63601,60736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,100,7029,2391,1941,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,80,6608,2433,2097,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,96,60475,5315,2658,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,59136,63671,61521,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,59136,63671,59916,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,96,3220,3002,2923,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,0,6396,1526,61760,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chuckya,16,5525,1360,61029,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_TTM_ROLLING_LOG,    /*pos*/  4360, -1722,  4001, /*angle*/ 0,  48, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTtmRollingLog),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/ -1639,  1146, -1742, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvTtmBowlingBallSpawner),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3295, -3692,  2928, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  2004, -1580,  1283, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvWaterfallSoundLoop),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2077, -1023, -1969, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2500, -1023, -2157, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2048, -1023, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2351, -1023, -2416, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2400, -2559, -2185, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1435, -2559, -3118, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1677, -2559, -3507, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -1869, -2559, -2704, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ -2525, -2559, -2626, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMontyMole),
    OBJECT(/*model*/ MODEL_NONE,               /*pos*/  3625,   560,   165, /*angle*/ 0, 330, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCloud),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/   729,  2307,   335, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUkiki,       /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UKIKI,              /*pos*/  1992, -1548,  2944, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvUkiki,       /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1200,  2600,   150, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar,              /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TTM_STAR_CAGE,  /*pos*/  2496,  1670,  1492, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvUkikiCage,         /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,           /*pos*/ -3250, -2500, -3700, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/ -2900, -2700,  3650, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  1800,  1200,  1050, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,           /*pos*/  7300, -3100,  1300, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  4389,  3620,   624, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1251,  2493,  2224, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -2547,  1365,  -520, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  -324,   989, -4090, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/  7867,  -959, -6085, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_BLUE_SMILEY,   /*pos*/ -5241,  5329,  9466, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/ -1869, -5311,  7358, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ -9095,  4262,  5348, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/ -8477,   730, -7122, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/  6160, -6076,  7861, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_TTM_YELLOW_SMILEY, /*pos*/  5157,  1974, -8292, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_STAR_SMILEY,   /*pos*/ 11106,  2588,   381, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    OBJECT(/*model*/ MODEL_TTM_MOON_SMILEY,   /*pos*/    37,  1974, -1124, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStaticObject),
    RETURN(),
};

static const LevelScript script_func_local_7[] = {
    RETURN(),
};

const LevelScript level_ttm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group6_geoSegmentRomStart,  _group6_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG,       ttm_geo_000730),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE,        ttm_geo_000710),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY,       ttm_geo_000D14),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY,     ttm_geo_000D4C),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY,       ttm_geo_000D84),
    LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY,       ttm_geo_000DBC),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     ttm_geo_000748),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,     ttm_geo_000778),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,     ttm_geo_0007A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,     ttm_geo_0007D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,     ttm_geo_000808),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,     ttm_geo_000830),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,     ttm_geo_000858),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,     ttm_geo_000880),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,     ttm_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,     ttm_geo_0008D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,     ttm_geo_0008F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,     ttm_geo_000920),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,     ttm_geo_000948),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,     ttm_geo_000970),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,     ttm_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,     ttm_geo_0009C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,     ttm_geo_0009F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15,     ttm_geo_000A18),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16,     ttm_geo_000A40),

    AREA(/*index*/ 1, ttm_geo_000A70),
MACRO_OBJECTS(local_macro_objects_ttm_1),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
WARP_NODE(10,36,1,20,0),
OBJECT_WITH_ACTS(137,-7280,-1341,-4800,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(57,-3117,-1452,-4811,0,90,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(53,-5200,-1716,-4811,0,90,90,0x0, bhvTtmRollingLog,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_GRASS),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, ttm_geo_000B5C),
MACRO_OBJECTS(local_macro_objects_ttm_2),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
WARP_NODE(10,36,1,20,0),
OBJECT_WITH_ACTS(137,-7280,-1341,-4800,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(57,-3117,-1452,-4811,0,90,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(53,-5200,-1716,-4811,0,90,90,0x0, bhvTtmRollingLog,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp,31),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 7000, 5381, 6750, /*angle*/ 0, 225, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_TTM, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ ttm_seg7_area_2_collision),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 3, /*displace*/ 10240, 7168, 10240),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 3, ttm_geo_000BEC),
MACRO_OBJECTS(local_macro_objects_ttm_3),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
WARP_NODE(10,36,1,20,0),
OBJECT_WITH_ACTS(137,-7280,-1341,-4800,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(57,-3117,-1452,-4811,0,90,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(53,-5200,-1716,-4811,0,90,90,0x0, bhvTtmRollingLog,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp,31),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_5),
        TERRAIN(/*terrainData*/ ttm_seg7_area_3_collision),
        MACRO_OBJECTS(/*objList*/ ttm_seg7_area_3_macro_objs),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 4, /*displace*/ -11264, 13312, 3072),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    AREA(/*index*/ 4, ttm_geo_000C84),
MACRO_OBJECTS(local_macro_objects_ttm_4),
WARP_NODE(241,6,2,102,0),
WARP_NODE(240,6,2,52,0),
WARP_NODE(10,36,1,20,0),
OBJECT_WITH_ACTS(137,-7280,-1341,-4800,0,0,0,0x80000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(57,-3117,-1452,-4811,0,90,0,0x0, bhvStaticObject,31),
OBJECT_WITH_ACTS(53,-5200,-1716,-4811,0,90,90,0x0, bhvTtmRollingLog,31),
OBJECT_WITH_ACTS(123,-7285,-1866,-4812,0,0,0,0xa0000, bhvExitPodiumWarp,31),
        TERRAIN(/*terrainData*/ ttm_seg7_area_4_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 45, /*pos*/ 102, -4332, 5734),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};