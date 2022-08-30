#include "custom.model.inc.h"
Vtx VB_unk_DL_16000fe8_0x302fe28[] = {
	{{{ -356, -9, 0 }, 0, { -796, 2012 }, { 255, 255, 255, 255}}},
	{{{ 0, -9, 0 }, 0, { 990, 2012 }, { 255, 255, 255, 255}}},
	{{{ 0, 800, 0 }, 0, { 990, -712 }, { 255, 255, 255, 255}}},
};

Vtx VB_unk_DL_16000fe8_0x302fe58[] = {
	{{{ 0, -9, 0 }, 0, { 0, 2012 }, { 255, 255, 255, 255}}},
	{{{ 358, -9, 0 }, 0, { 1756, 2012 }, { 255, 255, 255, 255}}},
	{{{ 0, 800, 0 }, 0, { 0, -712 }, { 255, 255, 255, 255}}},
};

Gfx DL_unk_DL_16000fe8_0x302fee8[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_unk_DL_16000fe8_0x302fe88),
	gsSPDisplayList(DL_unk_DL_16000fe8_0x302feb8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_unk_DL_16000fe8_0x302fe88[] = {
	gsDPSetTextureImage(0, 2, 1, unk_DL_16000fe8__texture_0302DE28),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_unk_DL_16000fe8_0x302fe28, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Gfx DL_unk_DL_16000fe8_0x302feb8[] = {
	gsDPSetTextureImage(0, 2, 1, unk_DL_16000fe8__texture_0302EE28),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_unk_DL_16000fe8_0x302fe58, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

