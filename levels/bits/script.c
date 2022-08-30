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
#include "levels/bits/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_bits_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4530,64424,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4730,64424,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65267,61424,65498,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_chain_chomp,0,61623,65126,64386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5920,63745,65432,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,6156,63968,64361,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,61824,63701,64722,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3039,4221,64066,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_whomp,32,3490,1304,64655,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_line_horizontal,32,60111,64206,64736,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,32,1068,4304,63515,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,5838,2970,64651,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,0,359,6661,59220,125),
MACRO_OBJECT_WITH_BEH_PARAM(macro_jumping_box,32,6082,64081,63716,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4930,64424,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4530,64623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4730,64623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_whomp,32,4074,63496,6,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,2194,4930,64623,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,62413,2059,64682,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,64126,3807,64643,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,59193,2760,64624,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,58954,3335,64642,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1576,5418,64424,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,3039,4222,64266,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,88,60764,60630,206,50),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,64,4713,2559,62481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_1up_running_away,0,60636,63354,64722,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,60304,3802,64704,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,96,65291,61603,0,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,64732,3015,64472,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bits_staircase,0,1769,65302,64637,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_1up,0,346,5882,60908,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,96,195,3798,64533,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,96,1840,4516,64998,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,60767,2203,64632,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_homing_amp,0,401,2880,64453,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba_triplet_spawner,0,319,6040,62342,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,64971,63079,64774,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,1862,2274,64632,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61745,60478,0,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62815,64221,64747,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3039,4505,64066,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4109,65404,63683,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,335,7233,62281,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61623,65376,64386,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,58013,1783,64626,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant,0,63463,61453,1,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,60767,2344,64632,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,63784,63225,64271,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_piranha_plant,32,3660,2431,64335,1),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,58824,64637,64740,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_goomba,0,7322,4436,63614,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb,0,61163,63082,64704,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_yellow_coin_2,0,62051,63513,64722,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,1576,5418,64623,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_BITS_SLIDING_PLATFORM,       /*pos*/ -2370, -4525,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00100000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -2611,  3544,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_TWIN_SLIDING_PLATFORMS, /*pos*/ -4700,  3544,  -904, /*angle*/ 0, 180, 0, /*behParam*/ 0x008F0000, /*beh*/ bhvSlidingPlatform2),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/  4139, -1740, -1831, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -6459,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_OCTAGONAL_PLATFORM,     /*pos*/ -4770,  1732,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x02000000, /*beh*/ bhvOctagonalPlatformRotating),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/ -1748, -1330, -1094, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  2275,  5628, -1315, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_FERRIS_WHEEL_AXLE,      /*pos*/  3114,  4701, -1320, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFerrisWheelAxle),
    OBJECT(/*model*/ MODEL_BITS_ARROW_PLATFORM,         /*pos*/  2793,  2325,  -904, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00610000, /*beh*/ bhvActivatedBackAndForthPlatform),
    OBJECT(/*model*/ MODEL_BITS_SEESAW_PLATFORM,        /*pos*/    27, -1555,  -713, /*angle*/ 0, 90, 0,  /*behParam*/ 0x00010000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_TILTING_W_PLATFORM,     /*pos*/  -306, -4300,     0, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00020000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_BITS_STAIRCASE,              /*pos*/  1769,  -234,  -899, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvAnimatesOnFloorSwitchPress),
    OBJECT(/*model*/ MODEL_PURPLE_SWITCH,               /*pos*/  -279,  -234,  -900, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFloorSwitchAnimatesObject),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -6460,  2039,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00CF0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/ -3326,  3227,  -905, /*angle*/ 0, 0, 0,   /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5518,  3184, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  6465,  3731, -1915, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    OBJECT(/*model*/ MODEL_NONE,                        /*pos*/  5915,  3718, -4019, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 350, 6800, -6800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserCourseRedCoinStar),
    RETURN(),
};

const LevelScript level_bits_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_15),
    JUMP_LINK(script_func_global_1),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,           bits_geo_000430),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,           bits_geo_000448),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,           bits_geo_000460),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,           bits_geo_000478),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,           bits_geo_000490),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,           bits_geo_0004A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,           bits_geo_0004C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,           bits_geo_0004D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,           bits_geo_0004F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,           bits_geo_000508),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,           bits_geo_000520),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,           bits_geo_000538),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,           bits_geo_000550),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,           bits_geo_000568),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,           bits_geo_000580),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,           bits_geo_000598),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13,           bits_geo_0005B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14,           bits_geo_0005C8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM,       bits_geo_0005E0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM,     bits_geo_000610),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM,          bits_geo_000628),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE,      bits_geo_000640),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM,         bits_geo_000658),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM,        bits_geo_000670),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM,     bits_geo_000688),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE,              bits_geo_0006A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1,       bits_geo_0006B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2,       bits_geo_0006D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3,       bits_geo_0006E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4,       bits_geo_000700),
    LOAD_MODEL_FROM_GEO(MODEL_BITS_WARP_PIPE,              warp_pipe_geo),

    AREA(/*index*/ 1, bits_geo_000718),
MACRO_OBJECTS(local_macro_objects_bits_1),
WARP_NODE(243,16,1,10,0),
WARP_NODE(12,21,1,12,0),
WARP_NODE(11,34,1,10,0),
WARP_NODE(10,21,1,10,0),
OBJECT_WITH_ACTS(0,365,6893,-6047,0,0,0,0x0, bhvBowserCourseRedCoinStar,31),
OBJECT_WITH_ACTS(0,5915,3718,-4019,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,6465,3731,-1915,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,5518,3184,-4019,0,0,0,0x0, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,-3326,3227,-905,0,0,0,0x4d0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(0,-6460,2039,-905,0,0,0,0xcf0000, bhvPoleGrabbing,31),
OBJECT_WITH_ACTS(54,1214,2225,-904,0,180,0,0x50000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(0,-1752,-1332,-1251,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(57,335,6652,-3255,180,0,0,0x1000000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(207,349,6439,-6759,180,0,0,0x0, bhvFloorSwitchAnimatesObject,31),
OBJECT_WITH_ACTS(54,3664,2222,-904,0,0,0,0x50000, bhvSlidingPlatform2,31),
OBJECT_WITH_ACTS(57,-4770,1732,-904,0,0,180,0x3000000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(63,-6852,1992,-899,0,270,0,0x10000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(116,-3712,-2454,-814,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-3485,-2224,-814,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(57,-274,-4426,0,0,0,0,0x3000000, bhvOctagonalPlatformRotating,31),
OBJECT_WITH_ACTS(73,32767,32767,32767,0,0,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(0,-7039,-3812,4,0,90,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ bits_seg7_collision_level),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_KOOPA_ROAD),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 90, /*pos*/ -7039, -4812, 4),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
