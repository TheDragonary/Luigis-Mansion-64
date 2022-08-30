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
#include "levels/pss/header.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
static const MacroObject local_macro_objects_pss_1[] = {
MACRO_OBJECT_WITH_BEH_PARAM(macro_wooden_signpost,32,3632,6161,59905,149),
MACRO_OBJECT_WITH_BEH_PARAM(macro_wing_cap_switch,0,59192,63509,5863,2),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,62291,63866,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62688,2437,2199,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3930,65362,2373,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5335,65275,3198,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5790,65108,4699,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,5053,64926,6152,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,3589,64693,6610,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2264,64476,5936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1854,64315,4262,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,53,62694,59224,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64339,62407,60844,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,62971,61968,62011,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,60627,61603,61318,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59194,61299,62989,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,32,60610,62491,64066,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_box_koopa_shell,32,3152,7363,59908,3),
MACRO_OBJECT_WITH_BEH_PARAM(macro_floor_switch_hidden_objects,64,60791,62468,62551,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,780,5213,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,2360,5679,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,62691,64266,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,62891,64466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,63091,64666,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1842,63916,1179,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1828,63676,65147,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1885,63416,63388,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,62291,63466,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,0,60610,63091,64866,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_hidden_box,64,60610,62291,63666,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,32,327,1552,2161,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,32,64619,2324,2170,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,64727,4845,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,63127,4477,59936,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59136,61192,64946,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59136,61003,1409,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59136,60808,3481,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,61091,4090,60000,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,59325,3750,61525,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_flamethrower,0,1854,63104,61246,0),
MACRO_OBJECT_WITH_BEH_PARAM(macro_coin_arrow,0,59161,63526,65191,0),
MACRO_OBJECT_END(),
};

const LevelScript level_pss_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _mountain_mio0SegmentRomStart, _mountain_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group8_mio0SegmentRomStart, _group8_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group8_geoSegmentRomStart,  _group8_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_9),

    AREA(/*index*/ 1, pss_geo_000100),
MACRO_OBJECTS(local_macro_objects_pss_1),
WARP_NODE(241,6,1,35,0),
WARP_NODE(240,6,1,38,0),
WARP_NODE(243,6,1,32,0),
WARP_NODE(10,27,1,10,0),
OBJECT_WITH_ACTS(0,5232,6751,-5631,0,270,0,0xa0000, bhvAirborneWarp,31),
        TERRAIN(/*terrainData*/ pss_seg7_collision),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_SLIDE),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_SLIDE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 270, /*pos*/ 5632, 6451, -5631),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
