#include "custom.model.inc.h"

const GeoLayout unagi_geo[]= {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_unagi_geo_0x500d268),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 245, 0, 0, DL_unagi_geo_0x500d468),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 494, 0, 0, DL_unagi_geo_0x500d668),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 475, 0, 0, DL_unagi_geo_0x500d828),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(2,  geo_switch_anim_state),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SCALE(0, 16384),
										GEO_OPEN_NODE(),
											GEO_TRANSLATE_ROTATE_WITH_DL(0, 2000, 0,0, 0, 0, 0,DL_unagi_geo_0x0),
											GEO_TRANSLATE_ROTATE_WITH_DL(0, 2000, 0,0, 0, 0, 0,DL_unagi_geo_0x0),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 65282, 0, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_unagi_geo_0x500d050),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(4, 527, 0, 0, DL_unagi_geo_0x500deb8),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 226, 65, 0, 0),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(4, 0, 0, 0, DL_unagi_geo_0x500e258),
									GEO_ANIMATED_PART(1, 0, 0, 0, DL_unagi_geo_0x500cdd0),
									GEO_ANIMATED_PART(1, 0, 0, 0, 0),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(4, 527, 0, 0, DL_unagi_geo_0x500e088),
							GEO_ANIMATED_PART(1, 527, 0, 0, DL_unagi_geo_0x500dd08),
							GEO_ANIMATED_PART(1, 527, 0, 0, 0),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};