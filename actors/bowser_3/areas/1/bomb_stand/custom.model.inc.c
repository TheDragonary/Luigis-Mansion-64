#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000380_0x7004758[] = {
	{{{ 205, 256, 0 }, 0, { 478, 478 }, { 77, 62, 178, 255}}},
	{{{ 0, 256, -204 }, 0, { 734, 478 }, { 77, 62, 178, 255}}},
	{{{ 0, 512, 0 }, 0, { 606, 0 }, { 77, 62, 178, 255}}},
	{{{ 0, 256, 205 }, 0, { 224, 480 }, { 78, 62, 78, 255}}},
	{{{ 205, 256, 0 }, 0, { 478, 478 }, { 78, 62, 78, 255}}},
	{{{ 0, 512, 0 }, 0, { 352, 0 }, { 78, 62, 78, 255}}},
	{{{ 205, 256, 0 }, 0, { 478, 478 }, { 78, 194, 78, 255}}},
	{{{ 0, 256, 205 }, 0, { 224, 480 }, { 78, 194, 78, 255}}},
	{{{ 0, 0, 0 }, 0, { 352, 990 }, { 78, 194, 78, 255}}},
	{{{ 0, 256, -204 }, 0, { 734, 478 }, { 77, 194, 178, 255}}},
	{{{ 205, 256, 0 }, 0, { 478, 478 }, { 77, 194, 178, 255}}},
	{{{ 0, 0, 0 }, 0, { 606, 990 }, { 77, 194, 178, 255}}},
	{{{ -204, 256, 0 }, 0, { 0, 480 }, { 178, 62, 77, 255}}},
	{{{ 0, 256, 205 }, 0, { 224, 480 }, { 178, 62, 77, 255}}},
	{{{ 0, 512, 0 }, 0, { 96, 0 }, { 178, 62, 77, 255}}},
};

Vtx VB_bowser_3_geo_000380_0x7004848[] = {
	{{{ 0, 256, 205 }, 0, { 224, 480 }, { 178, 194, 77, 255}}},
	{{{ -204, 256, 0 }, 0, { 0, 480 }, { 178, 194, 77, 255}}},
	{{{ 0, 0, 0 }, 0, { 96, 990 }, { 178, 194, 77, 255}}},
	{{{ 0, 256, -204 }, 0, { 734, 478 }, { 178, 62, 178, 255}}},
	{{{ -204, 256, 0 }, 0, { 990, 480 }, { 178, 62, 178, 255}}},
	{{{ 0, 512, 0 }, 0, { 862, 0 }, { 178, 62, 178, 255}}},
	{{{ -204, 256, 0 }, 0, { 990, 480 }, { 178, 194, 178, 255}}},
	{{{ 0, 256, -204 }, 0, { 734, 478 }, { 178, 194, 178, 255}}},
	{{{ 0, 0, 0 }, 0, { 862, 990 }, { 178, 194, 178, 255}}},
};

Light_t Light_bowser_3_geo_000380_0x7004748 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_bowser_3_geo_000380_0x7004740 = {
	{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_bowser_3_geo_000380_0x7004958[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bowser_3_geo_000380_0x70048d8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000380_0x70048d8[] = {
	gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000380__texture_07000000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_bowser_3_geo_000380_0x7004748.col, 1),
	gsSPLight(&Light_bowser_3_geo_000380_0x7004740.col, 2),
	gsSPVertex(VB_bowser_3_geo_000380_0x7004758, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(VB_bowser_3_geo_000380_0x7004848, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSPEndDisplayList(),
};

