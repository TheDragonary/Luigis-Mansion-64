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
#include "levels/ssl/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_ssl_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58683,224,58640,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5952,51,3846,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5928,51,2817,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,3532,13,6894,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,4836,143,646,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,58678,8,61825,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,60164,64,3083,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58170,524,58411,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,64976,512,64519,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,60246,135,60965,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59649,1036,62983,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,59652,1036,773,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1790,1036,763,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,1793,911,62982,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,6915,0,62205,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,5893,923,3341,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,5764,615,2753,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58765,124,59250,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62170,268,762,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,57637,1125,57623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,65372,68,4042,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6412,12,58619,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,2813,1203,60114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63491,1131,64977,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59547,596,60686,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,6421,12,63226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,59107,25,64737,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,59704,607,7475,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,0,59925,65279,59628,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,58021,724,57945,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,32,59704,607,7475,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,63401,8,3613,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,5591,447,61097,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,58952,0,62884,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,64431,0,7055,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,0,59616,200,64616,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,62911,727,60330,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,63453,787,63378,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,59783,608,65175,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,65516,863,59716,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,59373,65412,59072,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,64255,1,59152,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,6016,616,3744,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,6988,607,6904,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,6861,65337,58676,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,6663,53,1199,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_2[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,1939,65461,65307,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,96,3131,640,62292,43),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,63575,65460,63211,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3430,0,61930,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,62051,0,3636,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pokey,0,1322,65448,63273,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32441,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32441,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3056,736,62269,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3263,652,2200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,3341,673,64356,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,65525,444,62029,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_ring_horizontal_flying,0,2694,850,62647,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32441,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,251,4236,64920,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65510,4536,125,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65514,4536,325,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,2982,658,3413,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,251,4236,65120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,65514,4736,230,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,32,32441,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32767,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_blue_coin_switch,0,65528,1843,2893,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,65515,1695,2899,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1181,1862,2754,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,1177,1863,3035,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32114,32767,2114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32114,32767,2114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32114,32767,2114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32767,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32114,32767,2114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,0,65463,62837,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,850,65420,1248,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,63542,65447,64863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,62604,65446,61561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_vertical,0,1372,3957,1254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,64330,0,61502,103),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_star_trigger,0,1930,65491,64147,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,0,65451,62837,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,850,65430,1254,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,63542,65440,64863,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,62604,65441,61561,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin,0,1930,65478,64147,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,3035,735,3053,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32441,32767,32767,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,9,3315,1339,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64321,1862,3035,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_blue_coin,0,64321,1862,2754,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,32114,32767,2114,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_pushable_metal_box,0,1,356,65124,0),
MACRO_OBJECT_END(),
};
static const MacroObject local_macro_objects_ssl_3[] = {
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_TOP, /*pos*/ -2047, 1536, -1023, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidTop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/ -1284,    0, -5895, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  1283,    0, -4865, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_SSL_TOX_BOX,     /*pos*/  4873,    0, -3335, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvToxBox),
    OBJECT(/*model*/ MODEL_TWEESTER,        /*pos*/ -3600, -200,  2940, /*angle*/ 0, 0, 0, /*behParam*/ 0x00120000, /*beh*/ bhvTweester),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  1017, -200,  3832, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_TWEESTER,        /*pos*/  3066, -200,   400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00190000, /*beh*/ bhvTweester, /*acts*/ ACT_4 | ACT_5 | ACT_6),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/  2200, 1174, -2820, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvKlepto,   /*acts*/ ACT_1),
    OBJECT_WITH_ACTS(/*model*/ MODEL_KLEPTO,          /*pos*/ -5963,  573, -4784, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvKlepto,   /*acts*/ ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ -2050, 1200, -580, /*angle*/ 0, 0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,                 /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  6000,  800, 3500, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  2867,  640,  2867, /*angle*/ 0,   0, 0, /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     0, 3200,  1331, /*angle*/ 0,   0, 0, /*behParam*/ 0x005C0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  3297,    0,    95, /*angle*/ 0,   0, 0, /*behParam*/ 0x001C0000, /*beh*/ bhvGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/  -870, 3840,   105, /*angle*/ 0, 180, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_GRINDEL,             /*pos*/ -3362,    0, -1385, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHorizontalGrindel),
    OBJECT(/*model*/ MODEL_SSL_SPINDEL,             /*pos*/ -2458, 2109, -1430, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSpindel),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   858, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/   730, 1927, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1473, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_MOVING_PYRAMID_WALL, /*pos*/  1345, 2567, -2307, /*angle*/ 0,   0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvSslMovingPyramidWall),
    OBJECT(/*model*/ MODEL_SSL_PYRAMID_ELEVATOR,    /*pos*/     0, 4966,   256, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPyramidElevator),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/  1198, -133,  2396, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 1229,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    OBJECT(/*model*/ MODEL_NONE,                    /*pos*/     7, 4317,  -708, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSandSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_5[] = {
    OBJECT_WITH_ACTS(/*model*/ MODEL_STAR, /*pos*/ 500, 5050, -500, /*angle*/ 0, 0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar,        /*acts*/ ALL_ACTS),
    OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 900, 1400, 2350, /*angle*/ 0, 0, 0, /*behParam*/ 0x05040000, /*beh*/ bhvHiddenStar, /*acts*/ ALL_ACTS),
    RETURN(),
};

static const LevelScript script_func_local_6[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 0, -1534, -3693, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvEyerokBoss),
    RETURN(),
};

const LevelScript level_ssl_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group5_geoSegmentRomStart,  _group5_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_6),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
    LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),

    AREA(/*index*/ 1, ssl_geo_000648),
MACRO_OBJECTS(local_macro_objects_ssl_1),
WARP_NODE(241,6,2,106,0),
WARP_NODE(240,6,2,56,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        TERRAIN(/*terrainData*/ ssl_seg7_area_1_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_HOT),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SAND),
    END_AREA(),

    AREA(/*index*/ 2, ssl_geo_0007CC),
MACRO_OBJECTS(local_macro_objects_ssl_2),
WARP_NODE(241,6,2,106,0),
WARP_NODE(240,6,2,56,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/    0,  300,  6451, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/    0, 5500,   256, /*angle*/ 0, 180, 0, /*behParam*/ 0x00140000, /*beh*/ bhvAirborneWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 3070, 1280,  2900, /*angle*/ 0, 180, 0, /*behParam*/ 0x00150000, /*beh*/ bhvFadingWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 2546, 1150, -2647, /*angle*/ 0,  78, 0, /*behParam*/ 0x00160000, /*beh*/ bhvFadingWarp),
        INSTANT_WARP(/*index*/ 3, /*destArea*/ 3, /*displace*/ 0, 0, 0),
        TERRAIN(/*terrainData*/ ssl_seg7_area_2_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, ssl_geo_00088C),
MACRO_OBJECTS(local_macro_objects_ssl_3),
WARP_NODE(241,6,2,106,0),
WARP_NODE(240,6,2,56,0),
OBJECT_WITH_ACTS(0,0,-1534,-3693,0,0,0,0x3000000, bhvEyerokBoss,31),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x03, /*destNode*/ 0x65, /*flags*/ WARP_NO_CHECKPOINT),
        JUMP_LINK(script_func_local_6),
        TERRAIN(/*terrainData*/ ssl_seg7_area_3_collision),
        MACRO_OBJECTS(/*objList*/ ssl_seg7_area_3_macro_objs),
        INSTANT_WARP(/*index*/ 2, /*destArea*/ 2, /*displace*/ 0, 0, 0),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0004, /*seq*/ SEQ_LEVEL_UNDERGROUND),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 88, /*pos*/ 653, 38, 6566),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
