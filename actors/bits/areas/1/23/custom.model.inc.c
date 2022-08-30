#include "custom.model.inc.h"
Vtx VB_bits_geo_000628_0x7013610[] = {
	{{{ -204, 102, -306 }, 0, { 38, 2968 }, { 177, 191, 250, 255}}},
	{{{ -204, 102, 307 }, 0, { 38, 1052 }, { 177, 191, 250, 255}}},
	{{{ 205, 102, 307 }, 0, { 1448, 1052 }, { 177, 191, 250, 255}}},
	{{{ 205, 102, -306 }, 0, { 1448, 2968 }, { 177, 191, 250, 255}}},
	{{{ 205, 0, -306 }, 0, { 1448, 2968 }, { 61, 60, 118, 255}}},
	{{{ 205, 0, 307 }, 0, { 1448, 1052 }, { 61, 60, 118, 255}}},
	{{{ -204, 0, 307 }, 0, { 38, 1052 }, { 61, 60, 118, 255}}},
	{{{ -204, 0, -306 }, 0, { 38, 2968 }, { 61, 60, 118, 255}}},
	{{{ -204, 0, -306 }, 0, { 38, 2968 }, { 121, 140, 235, 255}}},
	{{{ -204, 102, 307 }, 0, { 38, 1052 }, { 121, 140, 235, 255}}},
	{{{ -204, 102, -306 }, 0, { 38, 2968 }, { 121, 140, 235, 255}}},
	{{{ -204, 0, 307 }, 0, { 38, 1052 }, { 121, 140, 235, 255}}},
	{{{ 205, 102, -306 }, 0, { 1448, 2968 }, { 101, 127, 255, 255}}},
	{{{ 205, 102, 307 }, 0, { 1448, 1052 }, { 101, 127, 255, 255}}},
	{{{ 205, 0, 307 }, 0, { 1448, 1052 }, { 101, 127, 255, 255}}},
	{{{ 205, 0, -306 }, 0, { 1448, 2968 }, { 101, 127, 255, 255}}},
};

Vtx VB_bits_geo_000628_0x7013710[] = {
	{{{ -204, 0, 307 }, 0, { 38, 1052 }, { 82, 97, 172, 255}}},
	{{{ 205, 0, 307 }, 0, { 1448, 1052 }, { 82, 97, 172, 255}}},
	{{{ 205, 102, 307 }, 0, { 1448, 1052 }, { 82, 97, 172, 255}}},
	{{{ -204, 102, 307 }, 0, { 38, 1052 }, { 82, 97, 172, 255}}},
	{{{ 205, 0, -306 }, 0, { 1448, 2968 }, { 82, 97, 172, 255}}},
	{{{ -204, 102, -306 }, 0, { 38, 2968 }, { 82, 97, 172, 255}}},
	{{{ 205, 102, -306 }, 0, { 1448, 2968 }, { 82, 97, 172, 255}}},
	{{{ -204, 0, -306 }, 0, { 38, 2968 }, { 82, 97, 172, 255}}},
};

Gfx DL_bits_geo_000628_0x7013820[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bits_geo_000628_0x7013790),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bits_geo_000628_0x7013790[] = {
	gsDPSetTextureImage(0, 2, 1, bits_geo_000628__texture_09008000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bits_geo_000628_0x7013610, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPVertex(VB_bits_geo_000628_0x7013710, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

