#include "custom.model.inc.h"

const GeoLayout unk_DL_0d0000f0[]= {
	GEO_SHADOW(1, 200, 100),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ASM(0,  geo_update_layer_transparency),
			GEO_SWITCH_CASE(2,  geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_BRANCH(1, Geo_unk_DL_0d0000f0_0x1e7d90),
				GEO_BRANCH(1, Geo_unk_DL_0d0000f0_0x1e7e08),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
GEO_CLOSE_NODE(),
GEO_END(),
};

#include "custom.model.inc.h"

const GeoLayout Geo_unk_DL_0d0000f0_0x1e7d90[]= {
	GEO_ANIMATED_PART(1, 0, 0, 0, 0),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005750),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 65416, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005980),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 120, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x60059f0),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005688),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};

#include "custom.model.inc.h"

const GeoLayout Geo_unk_DL_0d0000f0_0x1e7e08[]= {
	GEO_ANIMATED_PART(1, 0, 0, 0, 0),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005750),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 65416, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005980),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 120, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x60059f0),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ANIMATED_PART(1, 0, 0, 0, DL_unk_DL_0d0000f0_0x6005688),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};