#include "custom.model.inc.h"
Vtx VB_ddd_geo_000450_0x700cef8[] = {
	{{{ 13, 512, -12 }, 0, { 352, 16 }, { 0, 0, 129, 255}}},
	{{{ 13, 0, -12 }, 0, { 352, 990 }, { 0, 0, 129, 255}}},
	{{{ -12, 0, -12 }, 0, { 606, 990 }, { 0, 0, 129, 255}}},
	{{{ 77, 512, 77 }, 0, { 1118, 16 }, { 0, 129, 0, 255}}},
	{{{ -76, 512, -76 }, 0, { 606, 16 }, { 0, 129, 0, 255}}},
	{{{ 77, 512, -76 }, 0, { 352, 16 }, { 0, 129, 0, 255}}},
	{{{ -76, 512, 77 }, 0, { 862, 16 }, { 0, 129, 0, 255}}},
	{{{ -76, 538, 77 }, 0, { 862, 0 }, { 0, 0, 127, 255}}},
	{{{ 77, 512, 77 }, 0, { 1118, 16 }, { 0, 0, 127, 255}}},
	{{{ 77, 538, 77 }, 0, { 1118, 0 }, { 0, 0, 127, 255}}},
	{{{ -76, 512, 77 }, 0, { 862, 16 }, { 0, 0, 127, 255}}},
	{{{ -76, 538, -76 }, 0, { 606, 0 }, { 129, 0, 0, 255}}},
	{{{ -76, 512, -76 }, 0, { 606, 16 }, { 129, 0, 0, 255}}},
	{{{ -76, 512, 77 }, 0, { 862, 16 }, { 129, 0, 0, 255}}},
	{{{ -76, 538, 77 }, 0, { 862, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_ddd_geo_000450_0x700cfe8[] = {
	{{{ 77, 538, -76 }, 0, { 352, 0 }, { 0, 0, 129, 255}}},
	{{{ -76, 512, -76 }, 0, { 606, 16 }, { 0, 0, 129, 255}}},
	{{{ -76, 538, -76 }, 0, { 606, 0 }, { 0, 0, 129, 255}}},
	{{{ 77, 512, -76 }, 0, { 352, 16 }, { 0, 0, 129, 255}}},
	{{{ 77, 538, 77 }, 0, { 96, 0 }, { 127, 0, 0, 255}}},
	{{{ 77, 512, -76 }, 0, { 352, 16 }, { 127, 0, 0, 255}}},
	{{{ 77, 538, -76 }, 0, { 352, 0 }, { 127, 0, 0, 255}}},
	{{{ 77, 512, 77 }, 0, { 96, 16 }, { 127, 0, 0, 255}}},
	{{{ 13, 512, -12 }, 0, { 352, 16 }, { 0, 0, 129, 255}}},
	{{{ -12, 0, -12 }, 0, { 606, 990 }, { 0, 0, 129, 255}}},
	{{{ -12, 512, -12 }, 0, { 606, 16 }, { 0, 0, 129, 255}}},
	{{{ 13, 512, 13 }, 0, { 96, 16 }, { 127, 0, 0, 255}}},
	{{{ 13, 0, -12 }, 0, { 352, 990 }, { 127, 0, 0, 255}}},
	{{{ 13, 512, -12 }, 0, { 352, 16 }, { 127, 0, 0, 255}}},
};

Vtx VB_ddd_geo_000450_0x700d0c8[] = {
	{{{ -12, 512, 13 }, 0, { 862, 16 }, { 0, 0, 127, 255}}},
	{{{ 13, 0, 13 }, 0, { 1118, 990 }, { 0, 0, 127, 255}}},
	{{{ 13, 512, 13 }, 0, { 1118, 16 }, { 0, 0, 127, 255}}},
	{{{ 13, 0, 13 }, 0, { 1118, 990 }, { 0, 129, 0, 255}}},
	{{{ -12, 0, -12 }, 0, { 606, 990 }, { 0, 129, 0, 255}}},
	{{{ 13, 0, -12 }, 0, { 352, 990 }, { 0, 129, 0, 255}}},
	{{{ 13, 512, 13 }, 0, { 96, 16 }, { 127, 0, 0, 255}}},
	{{{ 13, 0, 13 }, 0, { 96, 990 }, { 127, 0, 0, 255}}},
	{{{ 13, 0, -12 }, 0, { 352, 990 }, { 127, 0, 0, 255}}},
	{{{ -12, 512, -12 }, 0, { 606, 16 }, { 129, 0, 0, 255}}},
	{{{ -12, 0, -12 }, 0, { 606, 990 }, { 129, 0, 0, 255}}},
	{{{ -12, 0, 13 }, 0, { 862, 990 }, { 129, 0, 0, 255}}},
	{{{ -12, 0, 13 }, 0, { 862, 990 }, { 0, 129, 0, 255}}},
	{{{ -12, 512, 13 }, 0, { 862, 16 }, { 129, 0, 0, 255}}},
	{{{ -12, 0, 13 }, 0, { 862, 990 }, { 0, 0, 127, 255}}},
};

Light_t Light_ddd_geo_000450_0x700cee8 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ddd_geo_000450_0x700cee0 = {
	{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_ddd_geo_000450_0x700d2a0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_ddd_geo_000450_0x700d1b8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_ddd_geo_000450_0x700d1b8[] = {
	gsDPSetTextureImage(0, 2, 1, ddd_geo_000450__texture_07003000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_ddd_geo_000450_0x700cee8.col, 1),
	gsSPLight(&Light_ddd_geo_000450_0x700cee0.col, 2),
	gsSPVertex(VB_ddd_geo_000450_0x700cef8, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(VB_ddd_geo_000450_0x700cfe8, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
	gsSPVertex(VB_ddd_geo_000450_0x700d0c8, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(3, 12, 4, 0, 9, 11, 13, 0),
	gsSP1Triangle(0, 14, 1, 0),
	gsSPEndDisplayList(),
};

