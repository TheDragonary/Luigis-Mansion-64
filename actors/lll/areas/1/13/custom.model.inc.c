#include "custom.model.inc.h"
Vtx VB_lll_geo_000AC0_0x7017590[] = {
	{{{ -511, 154, 128 }, 0, { 0, 224 }, { 0, 127, 0, 255}}},
	{{{ -511, 154, 512 }, 0, { 0, 990 }, { 0, 127, 0, 255}}},
	{{{ 512, 154, 512 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
	{{{ 512, 154, 128 }, 0, { 990, 224 }, { 0, 127, 0, 255}}},
	{{{ -511, 307, -127 }, 0, { -30, 732 }, { 0, 108, 65, 255}}},
	{{{ -511, 154, 128 }, 0, { 0, 1232 }, { 0, 108, 65, 255}}},
	{{{ 512, 154, 128 }, 0, { 988, 1246 }, { 0, 108, 65, 255}}},
	{{{ 512, 307, -127 }, 0, { 992, 746 }, { 0, 108, 65, 255}}},
	{{{ -511, 307, -511 }, 0, { 0, -1054 }, { 0, 127, 0, 255}}},
	{{{ -511, 307, -127 }, 0, { 0, -288 }, { 0, 127, 0, 255}}},
	{{{ 512, 307, -127 }, 0, { 990, -288 }, { 0, 127, 0, 255}}},
	{{{ 512, 307, -511 }, 0, { 990, -1054 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_000AC0_0x7017650[] = {
	{{{ -511, 0, -511 }, 0, { 4056, 990 }, { 0, 0, 129, 255}}},
	{{{ 512, 307, -511 }, 0, { 650, 0 }, { 0, 0, 129, 255}}},
	{{{ 512, 0, -511 }, 0, { 650, 990 }, { 0, 0, 129, 255}}},
	{{{ 512, 0, -511 }, 0, { 2352, 990 }, { 127, 0, 0, 255}}},
	{{{ 512, 307, -511 }, 0, { 2352, 0 }, { 127, 0, 0, 255}}},
	{{{ 512, 307, -127 }, 0, { 1076, 0 }, { 127, 0, 0, 255}}},
	{{{ 512, 154, 128 }, 0, { 224, 480 }, { 127, 0, 0, 255}}},
	{{{ 512, 0, 512 }, 0, { -1052, 990 }, { 127, 0, 0, 255}}},
	{{{ 512, 154, 512 }, 0, { -1052, 480 }, { 127, 0, 0, 255}}},
	{{{ -511, 154, 128 }, 0, { 2098, 480 }, { 129, 0, 0, 255}}},
	{{{ -511, 307, -127 }, 0, { 1246, 0 }, { 129, 0, 0, 255}}},
	{{{ -511, 0, -511 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
	{{{ -511, 0, 512 }, 0, { 3374, 990 }, { 129, 0, 0, 255}}},
	{{{ -511, 154, 512 }, 0, { 3374, 480 }, { 129, 0, 0, 255}}},
	{{{ -511, 307, -511 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_lll_geo_000AC0_0x7017740[] = {
	{{{ 512, 0, 512 }, 0, { 3374, 990 }, { 0, 0, 127, 255}}},
	{{{ -511, 154, 512 }, 0, { 0, 478 }, { 0, 0, 127, 255}}},
	{{{ -511, 0, 512 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
	{{{ -511, 0, -511 }, 0, { 4056, 990 }, { 0, 0, 129, 255}}},
	{{{ -511, 307, -511 }, 0, { 4056, 0 }, { 0, 0, 129, 255}}},
	{{{ 512, 307, -511 }, 0, { 650, 0 }, { 0, 0, 129, 255}}},
	{{{ 512, 154, 512 }, 0, { 3374, 478 }, { 0, 0, 127, 255}}},
};

Light_t Light_lll_geo_000AC0_0x7017580 = {
	{ 254, 255, 255}, 0, { 254, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_000AC0_0x7017578 = {
	{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_000AC0_0x70178a8[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_lll_geo_000AC0_0x70177b0),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_lll_geo_000AC0_0x7017818),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000AC0_0x70177b0[] = {
	gsDPSetTextureImage(0, 2, 1, lll_geo_000AC0__texture_0900B800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_lll_geo_000AC0_0x7017580.col, 1),
	gsSPLight(&Light_lll_geo_000AC0_0x7017578.col, 2),
	gsSPVertex(VB_lll_geo_000AC0_0x7017590, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx DL_lll_geo_000AC0_0x7017818[] = {
	gsDPSetTextureImage(0, 2, 1, lll_geo_000AC0__texture_09007800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_lll_geo_000AC0_0x7017650, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 9, 0, 12, 9, 11, 0),
	gsSP1Triangle(10, 14, 11, 0),
	gsSPVertex(VB_lll_geo_000AC0_0x7017740, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(0, 6, 1, 0),
	gsSPEndDisplayList(),
};

