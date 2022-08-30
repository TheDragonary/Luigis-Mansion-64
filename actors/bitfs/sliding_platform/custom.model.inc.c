#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000740_0x70113a8[] = {
	{{{ 355, 109, 179 }, 0, { 990, 0 }, { 206, 53, 22, 255}}},
	{{{ 355, 7, 179 }, 0, { 990, 480 }, { 206, 53, 22, 255}}},
	{{{ 355, 7, -188 }, 0, { 0, 480 }, { 206, 53, 22, 255}}},
	{{{ 355, 109, -188 }, 0, { 0, 0 }, { 206, 53, 22, 255}}},
	{{{ -361, 109, -188 }, 0, { 734, 480 }, { 206, 53, 22, 255}}},
	{{{ -361, 7, -188 }, 0, { 734, 990 }, { 206, 53, 22, 255}}},
	{{{ -361, 7, 179 }, 0, { -286, 990 }, { 206, 53, 22, 255}}},
	{{{ -361, 109, 179 }, 0, { -286, 480 }, { 206, 53, 22, 255}}},
	{{{ -361, 109, 179 }, 0, { 224, 650 }, { 223, 63, 31, 255}}},
	{{{ 355, 7, 179 }, 0, { 2268, 820 }, { 223, 63, 31, 255}}},
	{{{ 355, 109, 179 }, 0, { 2268, 650 }, { 223, 63, 31, 255}}},
	{{{ -361, 7, 179 }, 0, { 224, 820 }, { 223, 63, 31, 255}}},
	{{{ 355, 109, -188 }, 0, { 0, 478 }, { 223, 63, 31, 255}}},
	{{{ -361, 7, -188 }, 0, { -322, 2522 }, { 223, 63, 31, 255}}},
	{{{ -361, 109, -188 }, 0, { 0, 2522 }, { 223, 63, 31, 255}}},
	{{{ 355, 7, -188 }, 0, { -322, 478 }, { 223, 63, 31, 255}}},
};

Vtx VB_bitfs_geo_000740_0x70114a8[] = {
	{{{ -361, 109, 179 }, 0, { 990, 990 }, { 255, 229, 101, 255}}},
	{{{ 355, 109, -188 }, 0, { 0, 3032 }, { 255, 229, 101, 255}}},
	{{{ -361, 109, -188 }, 0, { 0, 990 }, { 255, 229, 101, 255}}},
	{{{ 355, 109, 179 }, 0, { 990, 3032 }, { 255, 229, 101, 255}}},
};

Gfx DL_bitfs_geo_000740_0x7011568[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bitfs_geo_000740_0x70114e8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000740_0x70114e8[] = {
	gsDPSetTextureImage(0, 2, 1, bitfs_geo_000740__texture_09003000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bitfs_geo_000740_0x70113a8, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPVertex(VB_bitfs_geo_000740_0x70114a8, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

