#include "custom.model.inc.h"
Vtx VB_bowser_3_geo_000320_0x7003380[] = {
	{{{ 3072, -1340, 1024 }, 0, { 1604, -4222 }, { 57, 144, 9, 255}}},
	{{{ 1183, -2364, 394 }, 0, { 2232, -2336 }, { 57, 144, 9, 255}}},
	{{{ 2365, -1852, -787 }, 0, { 3412, -3518 }, { 57, 144, 9, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 1604, -4222 }, { 74, 154, 0, 255}}},
	{{{ 2365, -1852, -787 }, 0, { 3412, -3518 }, { 74, 154, 0, 255}}},
	{{{ 3072, -1340, -1023 }, 0, { 3648, -4222 }, { 74, 154, 0, 255}}},
};

Vtx VB_bowser_3_geo_000320_0x70033e0[] = {
	{{{ 3072, 307, 1024 }, 0, { 3034, -508 }, { 0, 127, 0, 255}}},
	{{{ 2365, 307, -787 }, 0, { 2564, -1714 }, { 0, 127, 0, 255}}},
	{{{ 1183, 307, 394 }, 0, { 1776, -928 }, { 0, 127, 0, 255}}},
	{{{ 3072, 307, -1023 }, 0, { 3034, -1872 }, { 0, 127, 0, 255}}},
};

Vtx VB_bowser_3_geo_000320_0x7003420[] = {
	{{{ 3072, -1340, 1024 }, 0, { 990, 2012 }, { 216, 0, 120, 255}}},
	{{{ 1183, 307, 394 }, 0, { -996, 0 }, { 216, 0, 120, 255}}},
	{{{ 1183, -2364, 394 }, 0, { -996, 2012 }, { 216, 0, 120, 255}}},
	{{{ 2365, 307, -787 }, 0, { 246, 0 }, { 216, 0, 136, 255}}},
	{{{ 3072, 307, -1023 }, 0, { 990, 0 }, { 216, 0, 136, 255}}},
	{{{ 3072, -1340, -1023 }, 0, { 990, 2012 }, { 216, 0, 136, 255}}},
	{{{ 2365, -1852, -787 }, 0, { 246, 2012 }, { 216, 0, 136, 255}}},
	{{{ 1183, -2364, 394 }, 0, { -678, 2012 }, { 167, 0, 167, 255}}},
	{{{ 2365, 307, -787 }, 0, { 990, 0 }, { 167, 0, 167, 255}}},
	{{{ 2365, -1852, -787 }, 0, { 990, 2012 }, { 167, 0, 167, 255}}},
	{{{ 1183, 307, 394 }, 0, { -678, 0 }, { 167, 0, 167, 255}}},
	{{{ 3072, -1340, -1023 }, 0, { 8418, 1816 }, { 127, 0, 0, 255}}},
	{{{ 3072, 307, 1024 }, 0, { 6848, 172 }, { 127, 0, 0, 255}}},
	{{{ 3072, -1340, 1024 }, 0, { 6848, 1816 }, { 127, 0, 0, 255}}},
	{{{ 3072, 307, -1023 }, 0, { 8418, 172 }, { 127, 0, 0, 255}}},
	{{{ 3072, 307, 1024 }, 0, { 990, 0 }, { 216, 0, 120, 255}}},
};

Light_t Light_bowser_3_geo_000320_0x7003358 = {
	{ 137, 137, 138}, 0, { 137, 137, 138}, 0, { 40, 40, 40}, 0
};

Light_t Light_bowser_3_geo_000320_0x7003370 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_bowser_3_geo_000320_0x7003350 = {
	{34, 34, 34}, 0, {34, 34, 34}, 0
};

Ambient_t Light_bowser_3_geo_000320_0x7003368 = {
	{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_bowser_3_geo_000320_0x70035f8[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bowser_3_geo_000320_0x7003520),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_bowser_3_geo_000320_0x7003590),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000320_0x7003520[] = {
	gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000320__texture_07000800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_bowser_3_geo_000320_0x7003358.col, 1),
	gsSPLight(&Light_bowser_3_geo_000320_0x7003350.col, 2),
	gsSPVertex(VB_bowser_3_geo_000320_0x7003380, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSPLight(&Light_bowser_3_geo_000320_0x7003370.col, 1),
	gsSPLight(&Light_bowser_3_geo_000320_0x7003368.col, 2),
	gsSPVertex(VB_bowser_3_geo_000320_0x70033e0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Gfx DL_bowser_3_geo_000320_0x7003590[] = {
	gsDPSetTextureImage(0, 2, 1, bowser_3_geo_000320__texture_07001000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_bowser_3_geo_000320_0x7003420, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 14, 12, 0, 0, 15, 1, 0),
	gsSPEndDisplayList(),
};

