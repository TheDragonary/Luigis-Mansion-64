#include "custom.model.inc.h"
Vtx VB_wdw_geo_0005E8_0x7013250[] = {
	{{{ 193, 0, 193 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
	{{{ -190, 0, 193 }, 0, { 990, -2076 }, { 0, 129, 0, 255}}},
	{{{ -190, 0, -190 }, 0, { -2074, -2076 }, { 0, 129, 0, 255}}},
	{{{ 193, 128, -190 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
	{{{ 193, 0, -190 }, 0, { 990, 990 }, { 0, 0, 129, 255}}},
	{{{ -190, 0, -190 }, 0, { 990, -2076 }, { 0, 0, 129, 255}}},
	{{{ -190, 128, -190 }, 0, { 0, -2076 }, { 0, 0, 129, 255}}},
	{{{ 193, 128, 193 }, 0, { 990, -2076 }, { 127, 0, 0, 255}}},
	{{{ 193, 0, 193 }, 0, { 0, -2076 }, { 127, 0, 0, 255}}},
	{{{ 193, 0, -190 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
	{{{ 193, 128, -190 }, 0, { 990, 990 }, { 127, 0, 0, 255}}},
	{{{ -190, 128, 193 }, 0, { 0, -2076 }, { 0, 0, 127, 255}}},
	{{{ -190, 0, 193 }, 0, { 990, -2076 }, { 0, 0, 127, 255}}},
	{{{ 193, 0, 193 }, 0, { 990, 990 }, { 0, 0, 127, 255}}},
	{{{ 193, 128, 193 }, 0, { 0, 990 }, { 0, 0, 127, 255}}},
};

Vtx VB_wdw_geo_0005E8_0x7013340[] = {
	{{{ 193, 128, -190 }, 0, { -2074, 990 }, { 0, 127, 0, 255}}},
	{{{ -190, 128, 193 }, 0, { 990, -2076 }, { 0, 127, 0, 255}}},
	{{{ 193, 128, 193 }, 0, { 990, 990 }, { 0, 127, 0, 255}}},
	{{{ 193, 0, 193 }, 0, { 990, 990 }, { 0, 129, 0, 255}}},
	{{{ -190, 0, -190 }, 0, { -2074, -2076 }, { 0, 129, 0, 255}}},
	{{{ 193, 0, -190 }, 0, { -2074, 990 }, { 0, 129, 0, 255}}},
	{{{ -190, 128, -190 }, 0, { 990, 990 }, { 129, 0, 0, 255}}},
	{{{ -190, 0, 193 }, 0, { 0, -2076 }, { 129, 0, 0, 255}}},
	{{{ -190, 128, 193 }, 0, { 990, -2076 }, { 129, 0, 0, 255}}},
	{{{ -190, 0, -190 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
	{{{ -190, 128, -190 }, 0, { -2074, -2076 }, { 0, 127, 0, 255}}},
};

Light_t Light_wdw_geo_0005E8_0x7013240 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wdw_geo_0005E8_0x7013238 = {
	{153, 153, 153}, 0, {153, 153, 153}, 0
};

Gfx DL_wdw_geo_0005E8_0x7013490[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_wdw_geo_0005E8_0x70133f0),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_wdw_geo_0005E8_0x70133f0[] = {
	gsDPSetTextureImage(0, 2, 1, wdw_geo_0005E8__texture_09006800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_wdw_geo_0005E8_0x7013240.col, 1),
	gsSPLight(&Light_wdw_geo_0005E8_0x7013238.col, 2),
	gsSPVertex(VB_wdw_geo_0005E8_0x7013250, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(VB_wdw_geo_0005E8_0x7013340, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP1Triangle(0, 10, 1, 0),
	gsSPEndDisplayList(),
};

