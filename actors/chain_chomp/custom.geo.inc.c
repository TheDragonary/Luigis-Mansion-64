#include "custom.model.inc.h"

const GeoLayout chain_chomp_geo[]= {
	GEO_SHADOW(1, 150, 200),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_chain_chomp_geo_0x6024940),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_chain_chomp_geo_0x6024fc0),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_chain_chomp_geo_0x6024240),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_chain_chomp_geo_0x6024d60),
				GEO_ANIMATED_PART(4, 0, 0, 0, DL_chain_chomp_geo_0x6024b00),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};