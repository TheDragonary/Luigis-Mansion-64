#include "custom.model.inc.h"
Vtx VB_ttc_geo_0002F8_0x7010948[] = {
	{{{ 0, 0, -74 }, 0, { 4566, 0 }, { 0, 34, 134, 255}}},
	{{{ 0, 77, 0 }, 0, { 4566, -542 }, { 0, 126, 0, 255}}},
	{{{ 75, 0, 0 }, 0, { 5716, 0 }, { 92, 74, 211, 255}}},
	{{{ -299, -153, 300 }, 0, { -4986, 990 }, { 217, 158, 69, 255}}},
	{{{ 300, -153, 300 }, 0, { 6968, 990 }, { 39, 158, 69, 255}}},
	{{{ 0, 0, 300 }, 0, { 990, 0 }, { 0, 70, 105, 255}}},
	{{{ 300, 0, 300 }, 0, { 6968, 0 }, { 79, 98, 247, 255}}},
	{{{ -299, 0, 300 }, 0, { -4986, 0 }, { 177, 98, 247, 255}}},
	{{{ 0, -153, 75 }, 0, { 4566, 990 }, { 0, 134, 34, 255}}},
	{{{ -74, -153, 0 }, 0, { 3418, 990 }, { 158, 206, 195, 255}}},
	{{{ 0, -229, 0 }, 0, { 4566, 1498 }, { 0, 130, 0, 255}}},
	{{{ 75, -153, 0 }, 0, { 5716, 990 }, { 98, 206, 194, 255}}},
	{{{ 0, -153, -74 }, 0, { 4566, 990 }, { 0, 205, 140, 255}}},
	{{{ -74, 0, 0 }, 0, { 3418, 0 }, { 164, 73, 211, 255}}},
};

Vtx VB_ttc_geo_0002F8_0x7010a28[] = {
	{{{ 300, 0, 300 }, 0, { -6482, 0 }, { 79, 98, 247, 255}}},
	{{{ 75, -153, 0 }, 0, { 990, 990 }, { 98, 206, 194, 255}}},
	{{{ 75, 0, 0 }, 0, { 990, 0 }, { 92, 74, 211, 255}}},
	{{{ 0, 77, 0 }, 0, { 4566, -542 }, { 0, 126, 0, 255}}},
	{{{ -74, 0, 0 }, 0, { 3418, 0 }, { 164, 73, 211, 255}}},
	{{{ 0, 0, 75 }, 0, { 4566, 0 }, { 0, 123, 28, 255}}},
	{{{ 75, 0, 0 }, 0, { 5716, 0 }, { 92, 74, 211, 255}}},
	{{{ 0, 0, -74 }, 0, { -2128, 0 }, { 0, 34, 134, 255}}},
	{{{ 0, -153, -74 }, 0, { -2128, 990 }, { 0, 205, 140, 255}}},
	{{{ -74, -153, 0 }, 0, { 0, 990 }, { 158, 206, 195, 255}}},
	{{{ -74, 0, 0 }, 0, { 0, 0 }, { 164, 73, 211, 255}}},
	{{{ -299, -153, 300 }, 0, { 7442, 990 }, { 217, 158, 69, 255}}},
	{{{ -299, 0, 300 }, 0, { 7442, 0 }, { 177, 98, 247, 255}}},
	{{{ 0, 0, -74 }, 0, { 3088, 0 }, { 0, 34, 134, 255}}},
	{{{ 0, -153, -74 }, 0, { 3088, 990 }, { 0, 205, 140, 255}}},
	{{{ 300, -153, 300 }, 0, { -6482, 990 }, { 39, 158, 69, 255}}},
};

Vtx VB_ttc_geo_0002F8_0x7010b28[] = {
	{{{ 300, -153, 300 }, 0, { 9166, 990 }, { 39, 158, 69, 255}}},
	{{{ -299, -153, 300 }, 0, { 0, 990 }, { 217, 158, 69, 255}}},
	{{{ 0, -153, 75 }, 0, { 4566, 990 }, { 0, 134, 34, 255}}},
	{{{ -74, -153, 0 }, 0, { 3418, 990 }, { 158, 206, 195, 255}}},
	{{{ 75, -153, 0 }, 0, { 5716, 990 }, { 98, 206, 194, 255}}},
};

Vtx VB_ttc_geo_0002F8_0x7010b78[] = {
	{{{ 300, 0, 300 }, 0, { 990, 990 }, { 79, 98, 247, 255}}},
	{{{ 75, 0, 0 }, 0, { -76, 990 }, { 92, 74, 211, 255}}},
	{{{ 0, 0, 75 }, 0, { 190, 1362 }, { 0, 123, 28, 255}}},
	{{{ 0, 0, 300 }, 0, { 990, 1842 }, { 0, 70, 105, 255}}},
	{{{ -299, 0, 300 }, 0, { 990, 990 }, { 177, 98, 247, 255}}},
	{{{ 0, 0, 300 }, 0, { 990, 136 }, { 0, 70, 105, 255}}},
	{{{ 0, 0, 75 }, 0, { 190, 616 }, { 0, 123, 28, 255}}},
	{{{ -74, 0, 0 }, 0, { -76, 990 }, { 164, 73, 211, 255}}},
};

Light_t Light_ttc_geo_0002F8_0x7010938 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttc_geo_0002F8_0x7010930 = {
	{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttc_geo_0002F8_0x7010d38[] = {
	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_2CYCLE),
	gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
	gsDPSetDepthSource(0),
	gsDPSetFogColor(200, 255, 255, 255),
	gsMoveWd(G_MW_FOG, 0, 83950592),
	gsSPGeometryMode(0, G_FOG),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_ttc_geo_0002F8_0x7010bf8),
	gsSPDisplayList(DL_ttc_geo_0002F8_0x7010cf0),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_1CYCLE),
	gsDPSetRenderMode(0, 4464760),
	gsSPGeometryMode(G_FOG, 0),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002F8_0x7010bf8[] = {
	gsDPSetTextureImage(0, 2, 1, ttc_geo_0002F8__texture_09003800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_ttc_geo_0002F8_0x7010938.col, 1),
	gsSPLight(&Light_ttc_geo_0002F8_0x7010930.col, 2),
	gsSPVertex(VB_ttc_geo_0002F8_0x7010948, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(4, 6, 5, 0, 3, 5, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
	gsSP2Triangles(9, 12, 10, 0, 11, 10, 12, 0),
	gsSP1Triangle(1, 0, 13, 0),
	gsSPVertex(VB_ttc_geo_0002F8_0x7010a28, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
	gsSP2Triangles(9, 12, 10, 0, 1, 13, 2, 0),
	gsSP2Triangles(1, 14, 13, 0, 0, 15, 1, 0),
	gsSPVertex(VB_ttc_geo_0002F8_0x7010b28, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSPEndDisplayList(),
};

Gfx DL_ttc_geo_0002F8_0x7010cf0[] = {
	gsDPSetTextureImage(0, 2, 1, ttc_geo_0002F8__texture_09005000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_ttc_geo_0002F8_0x7010b78, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSPEndDisplayList(),
};

