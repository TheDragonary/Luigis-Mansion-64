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
#include "levels/jrb/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_jrb_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,88,58721,1126,1665,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,1284,62570,59961,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4920,1790,4460,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,63738,64781,4122,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,61301,1132,2137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59031,2320,65491,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,59431,2520,65091,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,59431,2720,65091,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,59571,2920,64951,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,59571,3120,64951,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,3551,60416,2744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4201,60416,3863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,63357,62556,62097,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4920,1790,3530,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,4846,60417,1213,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_seaweed_bundle,0,64736,64513,4040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59031,1120,435,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59031,1320,435,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59031,1520,435,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6336,62586,59891,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61440,62586,62615,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65219,62586,63513,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65226,62586,58319,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3000,62586,58119,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1284,63303,59961,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6336,62586,58591,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63799,62733,64498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,64,61813,62570,63961,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,58791,1720,425,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,16,4855,1566,6305,17),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,80,64837,512,6156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,96,700,65025,4250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_clam_shell,32,3600,60417,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,63013,65290,4676,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,5876,60798,3476,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,17,59685,1070,4531,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58857,1144,3922,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58091,1144,2689,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,57961,1144,1985,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58159,1144,588,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,58332,1144,65527,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,59422,1144,64668,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,4126,62570,59137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,63001,1875,6113,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,0,3600,60417,3200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up,0,1640,2210,2140,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,60055,1144,64762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,4072,61073,2027,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group_2,0,65246,190,4645,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61301,1247,2137,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58791,1920,195,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4235,1800,5130,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,16,58791,2120,65491,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,16,4255,1566,6875,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3675,1800,5725,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4920,2000,2590,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_koopa_shell_underwater,16,700,65025,4250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,4920,2160,1580,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,61083,1144,65383,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_vertical,0,5161,60942,65333,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,3165,1800,6235,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,118,5971,62570,60426,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_jrb_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_fish_group,0,0,0,0,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP,          /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SUNKEN_SHIP_BACK,     /*pos*/  2385,  3589,  3727, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSunkenShipPart2,        /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip,            /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  5385, -5520,  2428, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip2,          /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_LEFT_HALF_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_LEFT_PART,  /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_RIGHT_HALF_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SHIP_BACK_RIGHT_PART, /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvShipPart3,               /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4880,   820,  2375, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInSunkenShip3,          /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_JRB_SLIDING_BOX,          /*pos*/  4668,  1434,  2916, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbSlidingBox,           /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x00000000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  8270, -3130,  1846, /*angle*/ 0, 285, 0, /*behParam*/ 0x01010000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_2),
    OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI,                    /*pos*/  6048, -5381,  1154, /*angle*/ 0, 340, 0, /*behParam*/ 0x02020000, /*beh*/ bhvUnagi,                     /*acts*/ ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,                     /*pos*/  4988, -5221,  2473, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream,                /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -1800, -2812, -2100, /*angle*/ 0,   0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvTreasureChestsJrb),
    OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,             /*pos*/ -1956,  1331,  6500, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBobombBuddyOpensCannon, /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1834, -2556, -7090, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -2005, -2556, -3506, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1578, -2556, -5554, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/    42, -2556, -6578, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -981, -2556, -5298, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -6549,  1536,  4343, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1322, -2556, -3506, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6442, -2556, -6322, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3882, -2556, -5042, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1497,  1741,  7810, /*angle*/ 0,  14, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3978,  1536,   -85, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5228,  1230,  2106, /*angle*/ 0, 323, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -7481,  1536,   185, /*angle*/ 0, 149, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5749,  1536, -1113, /*angle*/ 0, 255, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -5332,  1434,  1023, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -815,  -613,  3556, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -3429,   819,  4948, /*angle*/ 0, 284, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1940,   410,  2377, /*angle*/ 0, 194, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/ -1798,  -716,  4330, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  -845,   922,  7668, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6741, -2886,  3556, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/   255,  -101,  4719, /*angle*/ 0,  45, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1787,  -306,  5133, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  1079,  -613,  2299, /*angle*/ 0,  75, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2931, -1697,   980, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3036, -4709,  4027, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  4222, -1125,  7083, /*angle*/ 0, 104, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  6650,  -613,  4941, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5764, -4709,  4427, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  3693, -4709,   856, /*angle*/ 0, 135, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  7981,   410,  2704, /*angle*/ 0, 165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  2917, -3046,  4818, /*angle*/ 0, 241, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_JRB_ROCK,                 /*pos*/  5896,  -393,  -123, /*angle*/ 0, 315, 0, /*behParam*/ 0x00000000, /*beh*/ bhvRockSolid),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/    53,  2355,  2724, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/   659,  2560,  3314, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/  1087,  2150,  3798, /*angle*/ 0,   0, 0, /*behParam*/ 0x00290000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -2535,  1075,  6113, /*angle*/ 0,   0, 0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1403, -2863, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/ -1096, -2863, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/   337, -2863, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  2078, -2863, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR,       /*pos*/  4330, -2863, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFallingPillar),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1403, -2966, -4696, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/ -1096, -2966, -3262, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/   337, -2966, -5106, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  2078, -2966, -6232, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FALLING_PILLAR_BASE,  /*pos*/  4330, -2966, -5618, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPillarBase),
    OBJECT(/*model*/ MODEL_JRB_FLOATING_PLATFORM,    /*pos*/ -1059,  1025,  7072, /*angle*/ 0, 247, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJrbFloatingPlatform),
    OBJECT(/*model*/ MODEL_NONE,                     /*pos*/ -4236, 1044, 2136,   /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvInsideCannon),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,            /*pos*/ 4900,  2400,   800, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
#ifdef VERSION_JP
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
#else
    OBJECT_WITH_ACTS(/*model*/ MODEL_EXCLAMATION_BOX, /*pos*/ 1540,  2160,  2130, /*angle*/ 0, 0, 0, /*behParam*/ 0x04080000, /*beh*/ bhvExclamationBox,      /*acts*/ ALL_ACTS),
#endif
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,            /*pos*/ 5000, -4800,  2500, /*angle*/ 0, 0, 0, /*behParam*/ 0x05000000, /*beh*/ bhvStar,                 /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,            /*pos*/  400,  -350, -2700, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvTreasureChestsShip),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    RETURN(),
};

const LevelScript level_jrb_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group13_geoSegmentRomStart,  _group13_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_5),
    JUMP_LINK(script_func_global_14),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART,  jrb_geo_000978),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART,  jrb_geo_0009B0),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP,          jrb_geo_000990),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK,     jrb_geo_0009C8),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK,                 jrb_geo_000930),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX,          jrb_geo_000960),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR,       jrb_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE,  jrb_geo_000918),
    LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM,    jrb_geo_000948),

    AREA(/*index*/ 1, jrb_geo_000A18),
MACRO_OBJECTS(local_macro_objects_jrb_1),
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(10,12,2,10,0),
OBJECT_WITH_ACTS(122,0,2000,3000,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,928,1050,-1248,0,180,0,0xa0000, bhvSwimmingWarp,31),
        WHIRLPOOL(/*unk2*/ 0, /*unk3*/ 3, /*pos*/ 4979, -5222, 2482, /*strength*/ -30),
        TERRAIN(/*terrainData*/ jrb_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    AREA(/*index*/ 2, jrb_geo_000AFC),
MACRO_OBJECTS(local_macro_objects_jrb_2),
WARP_NODE(241,6,2,100,0),
WARP_NODE(240,6,2,50,0),
WARP_NODE(10,12,2,10,0),
OBJECT_WITH_ACTS(122,0,2000,3000,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,928,1050,-1248,0,180,0,0xa0000, bhvSwimmingWarp,31),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 928, 1050, -1248, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSwimmingWarp),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x02, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x35, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x01, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_4),
        TERRAIN(/*terrainData*/ jrb_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0003, /*seq*/ SEQ_LEVEL_WATER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_WATER),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -6750, 1126, 1482),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};