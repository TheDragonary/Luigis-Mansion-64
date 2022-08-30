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
#include "levels/wmotr/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_wmotr_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_cannon_closed,0,61080,827,191,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_breakable_box_no_coins,0,3712,62596,5200,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bobomb_buddy_opens_cannon,0,64668,1689,65365,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,3442,62799,4784,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,4122,62798,4954,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,61949,65106,3120,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,61324,826,65446,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,113,291,3995,61239,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,60832,827,422,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,4499,240,65507,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,62975,4590,60708,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,64936,64176,5040,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,30,61498,2788,63659,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,62525,2323,61156,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,65134,64424,4507,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_snufit,0,3988,444,42,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_bully,0,62474,4538,61755,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,112,1683,1978,63969,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,53,62876,64633,5211,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,16,1288,65396,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_red_coin,0,3711,62297,5209,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_wing_cap,0,665,1919,80,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,75,1703,63933,5259,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,38,62897,0,1897,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,88,4274,65206,2339,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_fake_star,27,61752,5093,59610,0),
MACRO_OBJECT_END(),
};

static const LevelScript script_func_local_1[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3996, -2739,  5477, /*angle*/ 0, 0, 0, /*behParam*/ 0x00520000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2911,  3564, -3967, /*angle*/ 0, 0, 0, /*behParam*/ 0x00540000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3258,  3359, -3946, /*angle*/ 0, 0, 0, /*behParam*/ 0x00690000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2639,  3154, -4369, /*angle*/ 0, 0, 0, /*behParam*/ 0x007D0000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2980,  4048, -4248, /*angle*/ 0, 0, 0, /*behParam*/ 0x00240000, /*beh*/ bhvPoleGrabbing),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3290,  3636, -4477, /*angle*/ 0, 0, 0, /*behParam*/ 0x004D0000, /*beh*/ bhvPoleGrabbing),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -160, 1950, -470, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvHiddenRedCoinStar),
    RETURN(),
};

const LevelScript level_wmotr_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group2_geoSegmentRomStart,  _group2_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group17_geoSegmentRomStart,  _group17_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_3),
    JUMP_LINK(script_func_global_18),

    AREA(/*index*/ 1, wmotr_geo_0001F0),
MACRO_OBJECTS(local_macro_objects_wmotr_1),
WARP_NODE(243,6,2,54,0),
WARP_NODE(241,6,2,54,0),
WARP_NODE(240,6,2,104,0),
WARP_NODE(10,31,1,10,0),
OBJECT_WITH_ACTS(0,4210,-2495,5683,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(0,3993,-2901,5471,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(0,2598,3161,-3043,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(87,-3267,4496,-4499,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(116,-552,1759,496,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-306,1707,-742,0,180,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(122,5408,1844,-2943,0,0,0,0x0, bhvUnusedFakeStar,31),
OBJECT_WITH_ACTS(0,-67,2669,-16,0,270,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ wmotr_seg7_collision),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_LEVEL_SLIDE),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SNOW),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ -67, 1669, -16),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
