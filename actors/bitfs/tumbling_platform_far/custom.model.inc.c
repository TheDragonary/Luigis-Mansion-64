#include "custom.model.inc.h"
Vtx VB_bitfs_geo_0006F0_0x7010000[] = {
	{{{ -575, 0, 307 }, 0, { 480, -542 }, { 211, 83, 0, 255}}},
	{{{ 576, 154, 307 }, 0, { 9678, -542 }, { 211, 83, 0, 255}}},
	{{{ -575, 154, 307 }, 0, { 480, -542 }, { 211, 83, 0, 255}}},
	{{{ 576, 0, 307 }, 0, { 9678, -542 }, { 211, 83, 0, 255}}},
	{{{ -575, 154, -306 }, 0, { 480, 480 }, { 211, 83, 0, 255}}},
	{{{ 576, 0, -306 }, 0, { 9678, 480 }, { 211, 83, 0, 255}}},
	{{{ -575, 0, -306 }, 0, { 480, 480 }, { 211, 83, 0, 255}}},
	{{{ 576, 154, -306 }, 0, { 9678, 480 }, { 211, 83, 0, 255}}},
	{{{ -575, 0, -306 }, 0, { 480, 480 }, { 120, 22, 1, 255}}},
	{{{ 576, 0, -306 }, 0, { 9678, 480 }, { 120, 22, 1, 255}}},
	{{{ 576, 0, 307 }, 0, { 9678, -542 }, { 120, 22, 1, 255}}},
	{{{ -575, 0, 307 }, 0, { 480, -542 }, { 120, 22, 1, 255}}},
	{{{ -575, 154, 307 }, 0, { 480, -542 }, { 254, 165, 57, 255}}},
	{{{ 576, 154, -306 }, 0, { 9678, 480 }, { 254, 165, 57, 255}}},
	{{{ -575, 154, -306 }, 0, { 480, 480 }, { 254, 165, 57, 255}}},
	{{{ 576, 154, 307 }, 0, { 9678, -542 }, { 254, 165, 57, 255}}},
};

Gfx DL_bitfs_geo_0006F0_0x7010168[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bitfs_geo_0006F0_0x7010100),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_0006F0_0x7010100[] = {
	gsDPSetTextureImage(0, 2, 1, bitfs_geo_0006F0__texture_07001000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bitfs_geo_0006F0_0x7010000, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPEndDisplayList(),
};

