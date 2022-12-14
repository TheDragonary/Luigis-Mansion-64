#include "custom.model.inc.h"

const GeoLayout wiggler_head_geo[]= {
	GEO_SHADOW(1, 150, 100),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(4, DL_wiggler_head_geo_0x500c278),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 157, 0, 0, 0),
					GEO_OPEN_NODE(),
						GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(4, DL_wiggler_head_geo_0x500e678),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 143, 0, 0, 0),
						GEO_OPEN_NODE(),
							GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_DISPLAY_LIST(4, DL_wiggler_head_geo_0x500e1d8),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(1, 143, 0, 0, 0),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(4, 157, 0, 0, DL_wiggler_head_geo_0x500e518),
					GEO_ANIMATED_PART(4, 157, 0, 0, DL_wiggler_head_geo_0x500e430),
					GEO_ANIMATED_PART(4, 157, 0, 0, DL_wiggler_head_geo_0x500e2f8),
					GEO_ANIMATED_PART(1, 65520, 23, 51, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_wiggler_head_geo_0x500ddf8),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 39, 0, 0, DL_wiggler_head_geo_0x500dd70),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 41, 0, 0, DL_wiggler_head_geo_0x500dc18),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(1, 65520, 23, 65487, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_wiggler_head_geo_0x500e060),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(1, 39, 0, 0, DL_wiggler_head_geo_0x500dfd8),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(1, 41, 0, 0, DL_wiggler_head_geo_0x500de80),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};