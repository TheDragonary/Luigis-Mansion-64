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
#include "levels/castle_courtyard/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_castle_courtyard_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_boo_with_cage,0,63116,65473,64427,11),
MACRO_OBJECT_WITH_BEH_PARAM(macro_boo_with_cage,0,65521,51,64227,11),
MACRO_OBJECT_WITH_BEH_PARAM(macro_boo_with_cage,0,65523,104,62324,241),
MACRO_OBJECT_WITH_BEH_PARAM(macro_boo_with_cage,0,2584,65532,63556,5),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/     0, 200, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvAmbientSounds),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2700,   0, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBirdsSoundLoop),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2700,   0, -1652, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvBirdsSoundLoop),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_BOO, /*pos*/ -3217, 100,  -101, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/  3317, 100, -1701, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    OBJECT(/*model*/ MODEL_BOO, /*pos*/   -71,   1, -1387, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvCourtyardBooTriplet),
    RETURN(),
};

const LevelScript level_castle_courtyard_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group9_geoSegmentRomStart,  _group9_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_10),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE,  spiky_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,     castle_courtyard_geo_000200),

    AREA(/*index*/ 1, castle_courtyard_geo_000218),
MACRO_OBJECTS(local_macro_objects_castle_courtyard_1),
WARP_NODE(241,4,1,10,0),
WARP_NODE(1,6,1,2,0),
WARP_NODE(11,26,1,11,0),
WARP_NODE(10,26,1,10,0),
WARP_NODE(5,29,1,10,0),
OBJECT_WITH_ACTS(124,1727,-207,-219,0,164,21,0x400000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2553,-209,-2172,-79,0,0,0x3f0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2571,-201,-3006,352,51,355,0x3e0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,2653,-219,-1393,337,315,0,0x0, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,-2700,-256,-652,4,45,-6,0x3d0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,0,113,-1652,0,0,0,0x3c0000, bhvSignOnWall,31),
OBJECT_WITH_ACTS(0,13,214,-1408,0,180,0,0xb0000, bhvLaunchDeathWarp,31),
OBJECT_WITH_ACTS(0,13,214,-1408,0,180,0,0xa0000, bhvLaunchStarCollectWarp,31),
OBJECT_WITH_ACTS(124,2051,-201,-3061,14,329,349,0x0, bhvMessagePanel,31),
        TERRAIN(/*terrainData*/ castle_courtyard_seg7_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_SOUND_PLAYER),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -14, 0, -201),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
