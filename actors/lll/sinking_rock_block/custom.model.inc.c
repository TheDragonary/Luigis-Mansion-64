#include "custom.model.inc.h"
Vtx VB_lll_geo_000DD0_0x701a688[] = {
	{{{ -127, 0, 256 }, 0, { 1910, 3134 }, { 129, 0, 0, 255}}},
	{{{ -127, 154, 256 }, 0, { 2524, 2520 }, { 129, 0, 0, 255}}},
	{{{ -127, 154, -255 }, 0, { 480, 478 }, { 129, 0, 0, 255}}},
	{{{ 128, 154, 256 }, 0, { -542, 3542 }, { 0, 127, 0, 255}}},
	{{{ 128, 154, -255 }, 0, { 1502, 1498 }, { 0, 127, 0, 255}}},
	{{{ -127, 154, -255 }, 0, { 478, 478 }, { 0, 127, 0, 255}}},
	{{{ -127, 154, 256 }, 0, { -1564, 2520 }, { 0, 127, 0, 255}}},
	{{{ 128, 0, -255 }, 0, { 1910, 3134 }, { 127, 0, 0, 255}}},
	{{{ 128, 154, -255 }, 0, { 2522, 2520 }, { 127, 0, 0, 255}}},
	{{{ 128, 154, 256 }, 0, { 478, 478 }, { 127, 0, 0, 255}}},
	{{{ 128, 0, 256 }, 0, { -132, 1090 }, { 127, 0, 0, 255}}},
	{{{ -127, 0, -255 }, 0, { 888, 2112 }, { 0, 0, 129, 255}}},
	{{{ 128, 154, -255 }, 0, { 480, 480 }, { 0, 0, 129, 255}}},
	{{{ 128, 0, -255 }, 0, { -132, 1090 }, { 0, 0, 129, 255}}},
	{{{ -127, 154, -255 }, 0, { 1502, 1500 }, { 0, 0, 129, 255}}},
};

Vtx VB_lll_geo_000DD0_0x701a778[] = {
	{{{ 128, 0, 256 }, 0, { 888, 2112 }, { 0, 0, 127, 255}}},
	{{{ -127, 154, 256 }, 0, { 478, 478 }, { 0, 0, 127, 255}}},
	{{{ -127, 0, 256 }, 0, { -132, 1090 }, { 0, 0, 127, 255}}},
	{{{ -127, 0, 256 }, 0, { 1910, 3134 }, { 129, 0, 0, 255}}},
	{{{ -127, 154, -255 }, 0, { 480, 478 }, { 129, 0, 0, 255}}},
	{{{ -127, 0, -255 }, 0, { -132, 1090 }, { 129, 0, 0, 255}}},
	{{{ 128, 154, 256 }, 0, { 1500, 1498 }, { 0, 0, 127, 255}}},
};

Light_t Light_lll_geo_000DD0_0x701a678 = {
	{ 254, 255, 255}, 0, { 254, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000DD0_0x701a670 = {
	{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000DD0_0x701a878[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_lll_geo_000DD0_0x701a7e8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000DD0_0x701a7e8[] = {
	gsDPSetTextureImage(0, 2, 1, lll_geo_000DD0__texture_09002000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_lll_geo_000DD0_0x701a678.col, 1),
	gsSPLight(&Light_lll_geo_000DD0_0x701a670.col, 2),
	gsSPVertex(VB_lll_geo_000DD0_0x701a688, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 14, 12, 0),
	gsSPVertex(VB_lll_geo_000DD0_0x701a778, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(0, 6, 1, 0),
	gsSPEndDisplayList(),
};

