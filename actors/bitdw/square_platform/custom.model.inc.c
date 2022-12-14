#include "custom.model.inc.h"
Vtx VB_geo_bitdw_000558_0x700b290[] = {
	{{{ 0, 102, 0 }, 0, { 990, -40 }, { 180, 238, 254, 255}}},
	{{{ 307, 0, 307 }, 0, { 0, 2012 }, { 180, 238, 254, 255}}},
	{{{ 307, 0, -306 }, 0, { 2012, 2012 }, { 180, 238, 254, 255}}},
	{{{ 0, 102, 0 }, 0, { 2012, -44 }, { 180, 238, 254, 255}}},
	{{{ 307, 0, -306 }, 0, { 0, 2012 }, { 180, 238, 254, 255}}},
	{{{ -306, 0, -306 }, 0, { 4056, 2012 }, { 180, 238, 254, 255}}},
	{{{ 0, -306, 0 }, 0, { 990, 0 }, { 82, 119, 141, 255}}},
	{{{ -306, 0, 307 }, 0, { 1994, 2012 }, { 82, 119, 141, 255}}},
	{{{ -306, 0, -306 }, 0, { 0, 2012 }, { 82, 119, 141, 255}}},
	{{{ -306, 0, 307 }, 0, { 0, 2012 }, { 85, 134, 151, 255}}},
	{{{ 0, -306, 0 }, 0, { 2032, -44 }, { 85, 134, 151, 255}}},
	{{{ 307, 0, 307 }, 0, { 4138, 2012 }, { 85, 134, 151, 255}}},
	{{{ 307, 0, -306 }, 0, { 2012, 2012 }, { 103, 155, 176, 255}}},
	{{{ 307, 0, 307 }, 0, { 0, 2012 }, { 103, 155, 176, 255}}},
	{{{ 0, -306, 0 }, 0, { 990, -40 }, { 103, 155, 176, 255}}},
};

Vtx VB_geo_bitdw_000558_0x700b380[] = {
	{{{ -306, 0, -306 }, 0, { 4056, 2012 }, { 103, 155, 176, 255}}},
	{{{ 307, 0, -306 }, 0, { 0, 2012 }, { 103, 155, 176, 255}}},
	{{{ 0, -306, 0 }, 0, { 2012, -44 }, { 103, 155, 176, 255}}},
	{{{ -306, 0, -306 }, 0, { 0, 2012 }, { 140, 191, 216, 255}}},
	{{{ -306, 0, 307 }, 0, { 1994, 2012 }, { 140, 191, 216, 255}}},
	{{{ 0, 102, 0 }, 0, { 990, 0 }, { 140, 191, 216, 255}}},
	{{{ 307, 0, 307 }, 0, { 4138, 2012 }, { 140, 191, 216, 255}}},
	{{{ 0, 102, 0 }, 0, { 2032, -44 }, { 140, 191, 216, 255}}},
	{{{ -306, 0, 307 }, 0, { 0, 2012 }, { 140, 191, 216, 255}}},
};

Gfx DL_geo_bitdw_000558_0x700b480[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_geo_bitdw_000558_0x700b410),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bitdw_000558_0x700b410[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bitdw_000558__texture_09002000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_geo_bitdw_000558_0x700b290, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(VB_geo_bitdw_000558_0x700b380, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSPEndDisplayList(),
};

