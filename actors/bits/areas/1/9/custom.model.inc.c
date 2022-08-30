#include "custom.model.inc.h"
Vtx VB_bits_geo_0004D8_0x7008db8[] = {
	{{{ -1121, -50, 147 }, 0, { -788, 990 }, { 255, 212, 0, 255}}},
	{{{ -388, 51, -613 }, 0, { 8758, 0 }, { 255, 212, 0, 255}}},
	{{{ -1121, 51, 147 }, 0, { -788, 0 }, { 255, 212, 0, 255}}},
	{{{ 1178, -50, -255 }, 0, { 8598, 990 }, { 255, 212, 0, 255}}},
	{{{ 1178, 51, -255 }, 0, { 8598, 0 }, { 255, 212, 0, 255}}},
	{{{ 465, 51, 761 }, 0, { 582, 0 }, { 255, 212, 0, 255}}},
	{{{ 465, -50, 761 }, 0, { 582, 990 }, { 255, 212, 0, 255}}},
	{{{ -1121, -50, 761 }, 0, { -644, 990 }, { 255, 212, 0, 255}}},
	{{{ 465, -50, 761 }, 0, { 10596, 990 }, { 255, 212, 0, 255}}},
	{{{ 465, 51, 761 }, 0, { 10596, 0 }, { 255, 212, 0, 255}}},
	{{{ -1121, 51, 761 }, 0, { -644, 0 }, { 255, 212, 0, 255}}},
	{{{ -388, -50, -613 }, 0, { -644, 990 }, { 255, 212, 0, 255}}},
	{{{ 1178, -50, -613 }, 0, { 10596, 990 }, { 255, 212, 0, 255}}},
	{{{ 1178, 51, -613 }, 0, { 10596, 0 }, { 255, 212, 0, 255}}},
	{{{ -388, 51, -613 }, 0, { -644, 0 }, { 255, 212, 0, 255}}},
};

Vtx VB_bits_geo_0004D8_0x7008ea8[] = {
	{{{ 4, -1177, 607 }, 0, { 0, 990 }, { 255, 212, 0, 255}}},
	{{{ 315, -1177, 607 }, 0, { 3034, 990 }, { 255, 212, 0, 255}}},
	{{{ 315, -1074, 607 }, 0, { 3034, 0 }, { 255, 212, 0, 255}}},
	{{{ -1121, -50, 147 }, 0, { -788, 990 }, { 255, 212, 0, 255}}},
	{{{ -388, -50, -613 }, 0, { 8758, 990 }, { 255, 212, 0, 255}}},
	{{{ -388, 51, -613 }, 0, { 8758, 0 }, { 255, 212, 0, 255}}},
	{{{ 4, -1177, 299 }, 0, { 0, 990 }, { 255, 212, 0, 255}}},
	{{{ 315, -1074, 299 }, 0, { 3034, 0 }, { 255, 212, 0, 255}}},
	{{{ 4, -1074, 299 }, 0, { 0, 0 }, { 255, 212, 0, 255}}},
	{{{ 315, -1177, 299 }, 0, { 3034, 990 }, { 255, 212, 0, 255}}},
	{{{ 4, -1074, 607 }, 0, { 0, 0 }, { 255, 212, 0, 255}}},
};

Gfx DL_bits_geo_0004D8_0x7008fe8[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
	gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bits_geo_0004D8_0x7008f58),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bits_geo_0004D8_0x7008f58[] = {
	gsDPSetTextureImage(0, 2, 1, bits_geo_0004D8__texture_09005000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bits_geo_0004D8_0x7008db8, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(VB_bits_geo_0004D8_0x7008ea8, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP1Triangle(0, 2, 10, 0),
	gsSPEndDisplayList(),
};

