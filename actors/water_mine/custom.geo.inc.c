#include "custom.model.inc.h"

const GeoLayout water_mine_geo[]= {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, DL_water_mine_geo_0x600d3f8),
		GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, DL_water_mine_geo_0x600d268),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};