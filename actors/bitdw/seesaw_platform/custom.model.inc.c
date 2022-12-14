#include "custom.model.inc.h"
Vtx VB_geo_bitdw_000540_0x700b010[] = {
	{{{ 307, 102, -818 }, 0, { 5760, -4460 }, { 141, 240, 227, 255}}},
	{{{ -306, 102, -818 }, 0, { 3716, -4460 }, { 141, 240, 227, 255}}},
	{{{ -306, 102, 819 }, 0, { 3716, 990 }, { 141, 240, 227, 255}}},
	{{{ 307, 102, 819 }, 0, { 5760, 990 }, { 141, 240, 227, 255}}},
	{{{ -306, 0, 768 }, 0, { 0, 990 }, { 63, 191, 170, 255}}},
	{{{ -306, 102, 819 }, 0, { 990, 1158 }, { 63, 191, 170, 255}}},
	{{{ -306, 102, -818 }, 0, { 990, -4290 }, { 63, 191, 170, 255}}},
	{{{ -306, 0, -767 }, 0, { 0, -4120 }, { 63, 191, 170, 255}}},
	{{{ 307, 0, -767 }, 0, { 0, -4120 }, { 63, 191, 170, 255}}},
	{{{ 307, 102, 819 }, 0, { 990, 1158 }, { 63, 191, 170, 255}}},
	{{{ 307, 0, 768 }, 0, { 0, 990 }, { 63, 191, 170, 255}}},
	{{{ 307, 102, -818 }, 0, { 990, -4290 }, { 63, 191, 170, 255}}},
	{{{ -306, 0, -767 }, 0, { 3716, -4290 }, { 0, 150, 150, 255}}},
	{{{ 307, 102, -818 }, 0, { 5760, -4460 }, { 0, 150, 150, 255}}},
	{{{ 307, 0, -767 }, 0, { 5760, -4290 }, { 0, 150, 150, 255}}},
	{{{ -306, 102, -818 }, 0, { 3716, -4460 }, { 0, 150, 150, 255}}},
};

Vtx VB_geo_bitdw_000540_0x700b110[] = {
	{{{ 307, 0, 768 }, 0, { 5760, 820 }, { 0, 150, 150, 255}}},
	{{{ 307, 102, 819 }, 0, { 5760, 990 }, { 0, 150, 150, 255}}},
	{{{ -306, 102, 819 }, 0, { 3716, 990 }, { 0, 150, 150, 255}}},
	{{{ -306, 0, 768 }, 0, { 3716, 820 }, { 0, 150, 150, 255}}},
	{{{ -306, 0, -767 }, 0, { 3716, -4290 }, { 0, 93, 93, 255}}},
	{{{ 307, 0, 768 }, 0, { 5760, 820 }, { 0, 93, 93, 255}}},
	{{{ -306, 0, 768 }, 0, { 3716, 820 }, { 0, 93, 93, 255}}},
	{{{ 307, 0, -767 }, 0, { 5760, -4290 }, { 0, 93, 93, 255}}},
};

Gfx DL_geo_bitdw_000540_0x700b220[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_geo_bitdw_000540_0x700b190),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bitdw_000540_0x700b190[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bitdw_000540__texture_09000800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_geo_bitdw_000540_0x700b010, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPVertex(VB_geo_bitdw_000540_0x700b110, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

