#include "custom.model.inc.h"

const GeoLayout goomba_geo[]= {
	GEO_SHADOW(1, 150, 100),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, DL_goomba_geo_0x801d760),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(4, DL_goomba_geo_0x801b690),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_OPEN_NODE(),
					GEO_SWITCH_CASE(2,  geo_switch_anim_state),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 48, 0, 0, DL_goomba_geo_0x801b5c8),
						GEO_ANIMATED_PART(1, 48, 0, 0, DL_goomba_geo_0x801b5f0),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 65476, 65520, 45, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_goomba_geo_0x801ce20),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 65476, 65520, 65491, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_goomba_geo_0x801cf78),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};