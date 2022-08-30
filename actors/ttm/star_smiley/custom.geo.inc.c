#include "custom.model.inc.h"

const GeoLayout ttm_geo_000D84[]= {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_SCALE(0, 32768),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(4, DL_ttm_geo_000D84_0x702ab90),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};