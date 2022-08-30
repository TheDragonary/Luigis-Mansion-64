#include "custom.model.inc.h"
Vtx VB_bits_geo_000670_0x7013f68[] = {
	{{{ 307, 102, -818 }, 0, { 0, -2076 }, { 187, 115, 132, 255}}},
	{{{ -306, 0, -767 }, 0, { 480, 990 }, { 187, 115, 132, 255}}},
	{{{ -306, 102, -818 }, 0, { 0, 990 }, { 187, 115, 132, 255}}},
	{{{ 307, 0, -767 }, 0, { 478, -2076 }, { 187, 115, 132, 255}}},
	{{{ -306, 102, 819 }, 0, { 0, 990 }, { 187, 115, 132, 255}}},
	{{{ -306, 0, 768 }, 0, { 480, 990 }, { 187, 115, 132, 255}}},
	{{{ 307, 0, 768 }, 0, { 478, -2076 }, { 187, 115, 132, 255}}},
	{{{ 307, 102, 819 }, 0, { 0, -2076 }, { 187, 115, 132, 255}}},
	{{{ -306, 102, -818 }, 0, { 990, 990 }, { 124, 86, 106, 255}}},
	{{{ -306, 0, 768 }, 0, { 480, 9164 }, { 124, 86, 106, 255}}},
	{{{ -306, 102, 819 }, 0, { 990, 9164 }, { 124, 86, 106, 255}}},
	{{{ -306, 0, -767 }, 0, { 478, 990 }, { 124, 86, 106, 255}}},
	{{{ 307, 102, 819 }, 0, { 990, 9164 }, { 124, 86, 106, 255}}},
	{{{ 307, 0, 768 }, 0, { 480, 9164 }, { 124, 86, 106, 255}}},
	{{{ 307, 0, -767 }, 0, { 478, 990 }, { 124, 86, 106, 255}}},
	{{{ 307, 102, -818 }, 0, { 990, 990 }, { 124, 86, 106, 255}}},
};

Vtx VB_bits_geo_000670_0x7014068[] = {
	{{{ -306, 0, 768 }, 0, { 0, 990 }, { 94, 60, 69, 255}}},
	{{{ 307, 0, -767 }, 0, { 1500, 5076 }, { 94, 60, 69, 255}}},
	{{{ 307, 0, 768 }, 0, { 1502, 990 }, { 94, 60, 69, 255}}},
	{{{ -306, 0, -767 }, 0, { 0, 5076 }, { 94, 60, 69, 255}}},
	{{{ 307, 102, 819 }, 0, { 1502, 990 }, { 255, 204, 101, 255}}},
	{{{ 307, 102, -818 }, 0, { 1502, 5076 }, { 255, 204, 101, 255}}},
	{{{ -306, 102, -818 }, 0, { 0, 5076 }, { 255, 204, 101, 255}}},
	{{{ -306, 102, 819 }, 0, { 0, 990 }, { 255, 204, 101, 255}}},
};

Gfx DL_bits_geo_000670_0x7014178[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bits_geo_000670_0x70140e8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bits_geo_000670_0x70140e8[] = {
	gsDPSetTextureImage(0, 2, 1, bits_geo_000670__texture_09000800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bits_geo_000670_0x7013f68, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPVertex(VB_bits_geo_000670_0x7014068, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

