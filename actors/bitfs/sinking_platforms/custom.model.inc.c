#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000770_0x7011808[] = {
	{{{ -921, 0, -613 }, 0, { 0, 3236 }, { 140, 140, 216, 255}}},
	{{{ -921, 0, 614 }, 0, { 4056, 3236 }, { 140, 140, 216, 255}}},
	{{{ -613, 56, 614 }, 0, { 4056, 1996 }, { 140, 140, 216, 255}}},
	{{{ -613, 56, -613 }, 0, { 0, 1996 }, { 140, 140, 216, 255}}},
	{{{ -306, 0, -613 }, 0, { 0, 3236 }, { 140, 140, 216, 255}}},
	{{{ -306, 0, 614 }, 0, { 4056, 3236 }, { 140, 140, 216, 255}}},
	{{{ 0, 56, 614 }, 0, { 4056, 1996 }, { 140, 140, 216, 255}}},
	{{{ 0, 56, -613 }, 0, { 0, 1996 }, { 140, 140, 216, 255}}},
	{{{ 307, 0, -613 }, 0, { 0, 3236 }, { 140, 140, 216, 255}}},
	{{{ 614, 56, 614 }, 0, { 4056, 1996 }, { 140, 140, 216, 255}}},
	{{{ 614, 56, -613 }, 0, { 0, 1996 }, { 140, 140, 216, 255}}},
	{{{ 307, 0, 614 }, 0, { 4056, 3236 }, { 140, 140, 216, 255}}},
	{{{ -613, 56, -613 }, 0, { 0, 2012 }, { 140, 152, 216, 255}}},
	{{{ -613, 56, 614 }, 0, { 4056, 2012 }, { 140, 152, 216, 255}}},
	{{{ -306, 0, 614 }, 0, { 4056, 3252 }, { 140, 152, 216, 255}}},
	{{{ -306, 0, -613 }, 0, { 0, 3252 }, { 140, 152, 216, 255}}},
};

Vtx VB_bitfs_geo_000770_0x7011908[] = {
	{{{ 0, 56, -613 }, 0, { 990, 1996 }, { 140, 152, 216, 255}}},
	{{{ 307, 0, 614 }, 0, { -3096, 3236 }, { 140, 152, 216, 255}}},
	{{{ 307, 0, -613 }, 0, { 990, 3236 }, { 140, 152, 216, 255}}},
	{{{ 0, 56, 614 }, 0, { -3096, 1996 }, { 140, 152, 216, 255}}},
	{{{ 614, 56, -613 }, 0, { 990, 2012 }, { 140, 152, 216, 255}}},
	{{{ 614, 56, 614 }, 0, { -3096, 2012 }, { 140, 152, 216, 255}}},
	{{{ 922, 0, 614 }, 0, { -3096, 3252 }, { 140, 152, 216, 255}}},
	{{{ 922, 0, -613 }, 0, { 990, 3252 }, { 140, 152, 216, 255}}},
};

Vtx VB_bitfs_geo_000770_0x7011988[] = {
	{{{ 307, 0, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 0, 56, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -306, 0, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 922, 0, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 614, 56, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 922, 0, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 307, 0, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 614, 56, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -306, 0, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ 0, 56, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -921, 0, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -613, 56, -613 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -613, 56, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
	{{{ -921, 0, 614 }, 0, { 0, 0 }, { 72, 59, 125, 255}}},
};

Vtx VB_bitfs_geo_000770_0x7011a68[] = {
	{{{ 307, 0, 614 }, 0, { 0, 0 }, { 121, 140, 235, 255}}},
	{{{ 0, 56, 614 }, 0, { 0, 0 }, { 121, 140, 235, 255}}},
	{{{ -306, 0, 614 }, 0, { 0, 0 }, { 121, 140, 235, 255}}},
	{{{ -613, 56, 614 }, 0, { 0, 0 }, { 121, 140, 235, 255}}},
	{{{ -921, 0, 614 }, 0, { 0, 0 }, { 121, 140, 235, 255}}},
};

Gfx DL_bitfs_geo_000770_0x7011ba0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_bitfs_geo_000770_0x7011ab8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPDisplayList(DL_bitfs_geo_000770_0x7011b48),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000770_0x7011ab8[] = {
	gsDPSetTextureImage(0, 2, 1, bitfs_geo_000770__texture_09002000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_bitfs_geo_000770_0x7011808, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPVertex(VB_bitfs_geo_000770_0x7011908, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000770_0x7011b48[] = {
	gsSPVertex(VB_bitfs_geo_000770_0x7011988, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
	gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
	gsSP2Triangles(8, 10, 11, 0, 2, 12, 13, 0),
	gsSPVertex(VB_bitfs_geo_000770_0x7011a68, 5, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSPEndDisplayList(),
};

