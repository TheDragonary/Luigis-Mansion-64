#include "custom.model.inc.h"
Vtx VB_wdw_geo_000640_0x7013ed0[] = {
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 31, 147, 201, 255}}},
	{{{ 0, 128, -255 }, 0, { 1738, -2076 }, { 31, 147, 201, 255}}},
	{{{ 222, 128, -127 }, 0, { 0, -1054 }, { 31, 147, 201, 255}}},
	{{{ 0, 128, -255 }, 0, { 1738, -2076 }, { 0, 127, 0, 255}}},
	{{{ -221, 128, -127 }, 0, { 3508, -1054 }, { 0, 127, 0, 255}}},
	{{{ -221, 128, 128 }, 0, { 3508, 990 }, { 0, 127, 0, 255}}},
	{{{ 0, 128, 256 }, 0, { 1738, 2010 }, { 0, 127, 0, 255}}},
	{{{ 222, 128, 128 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
	{{{ 222, 128, -127 }, 0, { 0, -1054 }, { 0, 127, 0, 255}}},
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 225, 147, 201, 255}}},
	{{{ -221, 128, -127 }, 0, { 3508, -1054 }, { 225, 147, 201, 255}}},
	{{{ 0, 128, -255 }, 0, { 1738, -2076 }, { 225, 147, 201, 255}}},
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 193, 147, 0, 255}}},
	{{{ -221, 128, 128 }, 0, { 3508, 990 }, { 193, 147, 0, 255}}},
	{{{ -221, 128, -127 }, 0, { 3508, -1054 }, { 193, 147, 0, 255}}},
};

Vtx VB_wdw_geo_000640_0x7013fc0[] = {
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 225, 147, 54, 255}}},
	{{{ 0, 128, 256 }, 0, { 1738, 2010 }, { 225, 147, 54, 255}}},
	{{{ -221, 128, 128 }, 0, { 3508, 990 }, { 225, 147, 54, 255}}},
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 31, 147, 54, 255}}},
	{{{ 222, 128, 128 }, 0, { 0, 990 }, { 31, 147, 54, 255}}},
	{{{ 0, 128, 256 }, 0, { 1738, 2010 }, { 31, 147, 54, 255}}},
	{{{ 0, 0, 0 }, 0, { 1738, 0 }, { 63, 146, 0, 255}}},
	{{{ 222, 128, -127 }, 0, { 0, -1054 }, { 63, 146, 0, 255}}},
	{{{ 222, 128, 128 }, 0, { 0, 990 }, { 63, 146, 0, 255}}},
};

Light_t Light_wdw_geo_000640_0x7013ec0 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wdw_geo_000640_0x7013eb8 = {
	{153, 153, 153}, 0, {153, 153, 153}, 0
};

Gfx DL_wdw_geo_000640_0x70140e0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_wdw_geo_000640_0x7014050),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_000640_0x7014050[] = {
	gsDPSetTextureImage(0, 2, 1, wdw_geo_000640__texture_09008000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_wdw_geo_000640_0x7013ec0.col, 1),
	gsSPLight(&Light_wdw_geo_000640_0x7013eb8.col, 2),
	gsSPVertex(VB_wdw_geo_000640_0x7013ed0, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(3, 7, 8, 0, 9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(VB_wdw_geo_000640_0x7013fc0, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSPEndDisplayList(),
};

