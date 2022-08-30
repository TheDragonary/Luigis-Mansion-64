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
#include "levels/vcutm/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_vcutm_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,4696,291,61007,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,60277,22,64420,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,61915,4885,60812,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_vanish_cap,0,63325,63391,59328,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2697,64406,59012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,3511,65235,59012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,2169,63873,59639,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,660,63868,59012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,3082,64618,59643,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,164,63801,59673,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_circling_amp,0,4492,160,60860,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,59730,1977,62938,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,61657,793,63758,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_1up_in_pole,0,59393,6915,59393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,59258,62260,1226,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62875,63345,693,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62515,5734,59123,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,63495,62670,62393,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,657,64915,5136,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3392,284,1410,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61341,64328,4263,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3994,532,63578,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1277,64258,59713,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,60896,1704,63643,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,61556,2529,63043,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_fly_guy,0,60202,4013,61288,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,65200,63868,59013,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,64573,63233,59639,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fire_spitter,0,1686,64278,59012,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,0,63495,62512,64619,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fly_guy,0,61398,64601,65152,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_VCUTM_SEESAW_PLATFORM, /*pos*/   154, -1919, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSeesawPlatform),
    OBJECT(/*model*/ MODEL_VCUTM_SEESAW_PLATFORM, /*pos*/ -2047, -3378, -2047, /*angle*/ 0,   0, 0, /*behParam*/ 0x00070000, /*beh*/ bhvSeesawPlatform),
    //! @bug invalid model IDs - model ID 0x37 isn't loaded
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  3251, -1082, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  2355, -1901, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/  1459, -1594, -6256, /*angle*/ 0,  90, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    OBJECT(/*model*/ MODEL_VCUTM_CHECKERBOARD_PLATFORM_SPAWNER,           /*pos*/ -1151, -2413, -6256, /*angle*/ 0, 270, 0, /*behParam*/ 0x014B0000, /*beh*/ bhvCheckerboardElevatorGroup),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_CAP_SWITCH, /*pos*/ 4506,  26, -6246, /*angle*/ 0, 0, 0, /*behParam*/ 0x00020000, /*beh*/ bhvCapSwitch),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_NONE,       /*pos*/ 4600, 250, -4500, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_vcutm_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),
    LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0),
    LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE,       warp_pipe_geo),

    AREA(/*index*/ 1, vcutm_geo_000208),
MACRO_OBJECTS(local_macro_objects_vcutm_1),
WARP_NODE(241,6,3,104,0),
WARP_NODE(240,6,3,54,0),
WARP_NODE(243,6,3,104,0),
WARP_NODE(10,18,1,10,0),
OBJECT_WITH_ACTS(54,-2208,6559,-6461,0,0,0,0x70000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(55,-1151,-2413,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,1459,-1594,-6256,0,90,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,2355,-1901,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(55,3251,-1082,-6256,0,270,0,0x14b0000, bhvCheckerboardElevatorGroup,31),
OBJECT_WITH_ACTS(124,-1814,-3267,-1054,0,0,0,0x5b0000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(54,154,-1919,-6256,0,270,0,0x70000, bhvSeesawPlatform,31),
OBJECT_WITH_ACTS(0,4511,195,-6247,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,-6143,6734,-6143,0,0,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ vcutm_seg7_collision),
        SHOW_DIALOG(/*index*/ 0x00, DIALOG_129),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 0, /*pos*/ -6143, 5734, -6143),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
