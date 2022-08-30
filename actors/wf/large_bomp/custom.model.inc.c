#include "custom.model.inc.h"
Vtx VB_wf_geo_000A40_0x700da80[] = {
	{{{ -252, 5, 253 }, 0, { -2074, 990 }, { 0, 0, 127, 255}}},
	{{{ 259, 5, 253 }, 0, { 762, 990 }, { 0, 0, 127, 255}}},
	{{{ 195, 210, 253 }, 0, { 408, -146 }, { 0, 0, 127, 255}}},
	{{{ 259, 5, -258 }, 0, { 540, 1116 }, { 87, 27, 169, 255}}},
	{{{ 195, 210, -258 }, 0, { 540, -72 }, { 87, 27, 169, 255}}},
	{{{ 259, 210, -194 }, 0, { 156, 34 }, { 87, 27, 169, 255}}},
	{{{ 195, 210, -258 }, 0, { 364, 990 }, { 36, 116, 220, 255}}},
	{{{ 136, 261, -155 }, 0, { 530, 500 }, { 36, 116, 220, 255}}},
	{{{ 259, 210, -194 }, 0, { 0, 990 }, { 36, 116, 220, 255}}},
	{{{ 259, 210, 189 }, 0, { 764, -144 }, { 87, 27, 87, 255}}},
	{{{ 195, 210, 253 }, 0, { 368, -116 }, { 87, 27, 87, 255}}},
	{{{ 259, 5, 253 }, 0, { 764, 1004 }, { 87, 27, 87, 255}}},
	{{{ 259, 210, 189 }, 0, { 990, 990 }, { 36, 115, 36, 255}}},
	{{{ 136, 261, 151 }, 0, { 990, -352 }, { 36, 115, 36, 255}}},
	{{{ 195, 210, 253 }, 0, { 520, 452 }, { 36, 115, 36, 255}}},
};

Vtx VB_wf_geo_000A40_0x700db70[] = {
	{{{ -252, 261, -155 }, 0, { 4056, 412 }, { 0, 113, 200, 255}}},
	{{{ 136, 261, -155 }, 0, { 950, 412 }, { 0, 113, 200, 255}}},
	{{{ 195, 210, -258 }, 0, { 478, 990 }, { 0, 113, 200, 255}}},
	{{{ -252, 5, 253 }, 0, { -2074, 990 }, { 0, 0, 127, 255}}},
	{{{ 195, 210, 253 }, 0, { 408, -146 }, { 0, 0, 127, 255}}},
	{{{ -252, 210, 253 }, 0, { -2074, -146 }, { 0, 0, 127, 255}}},
	{{{ -252, 210, 253 }, 0, { -3096, 990 }, { 0, 113, 56, 255}}},
	{{{ 195, 210, 253 }, 0, { 480, 990 }, { 0, 113, 56, 255}}},
	{{{ -252, 261, 151 }, 0, { -3096, 412 }, { 0, 113, 56, 255}}},
	{{{ 136, 261, 151 }, 0, { 8, 412 }, { 0, 113, 56, 255}}},
	{{{ -252, 261, 151 }, 0, { 0, -3138 }, { 0, 127, 0, 255}}},
	{{{ 136, 261, -155 }, 0, { 1194, 0 }, { 0, 127, 0, 255}}},
	{{{ -252, 261, -155 }, 0, { 1194, -3138 }, { 0, 127, 0, 255}}},
	{{{ 136, 261, 151 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
	{{{ -252, 210, -258 }, 0, { 4056, 990 }, { 0, 113, 200, 255}}},
};

Vtx VB_wf_geo_000A40_0x700dc60[] = {
	{{{ -252, 210, -258 }, 0, { 762, -146 }, { 0, 0, 129, 255}}},
	{{{ 259, 5, -258 }, 0, { -2074, 990 }, { 0, 0, 129, 255}}},
	{{{ -252, 5, -258 }, 0, { 762, 990 }, { 0, 0, 129, 255}}},
	{{{ 195, 210, -258 }, 0, { -1720, -146 }, { 0, 0, 129, 255}}},
	{{{ 136, 261, -155 }, 0, { 582, -72 }, { 48, 117, 0, 255}}},
	{{{ 259, 210, 189 }, 0, { -796, 990 }, { 48, 117, 0, 255}}},
	{{{ 259, 210, -194 }, 0, { 734, 990 }, { 48, 117, 0, 255}}},
	{{{ 136, 261, 151 }, 0, { -644, -72 }, { 48, 117, 0, 255}}},
};

Vtx VB_wf_geo_000A40_0x700dce0[] = {
	{{{ 259, 5, -258 }, 0, { 1118, 990 }, { 127, 0, 0, 255}}},
	{{{ 259, 210, -194 }, 0, { 958, 0 }, { 127, 0, 0, 255}}},
	{{{ 259, 210, 189 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
	{{{ 259, 5, 253 }, 0, { -158, 990 }, { 127, 0, 0, 255}}},
};

Light_t Light_wf_geo_000A40_0x700da70 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_wf_geo_000A40_0x700da68 = {
	{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_wf_geo_000A40_0x700de20[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_wf_geo_000A40_0x700dd20),
	gsSPDisplayList(DL_wf_geo_000A40_0x700dde8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000A40_0x700dd20[] = {
	gsDPSetTextureImage(0, 2, 1, wf_geo_000A40__texture_09008000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPLight(&Light_wf_geo_000A40_0x700da70.col, 1),
	gsSPLight(&Light_wf_geo_000A40_0x700da68.col, 2),
	gsSPVertex(VB_wf_geo_000A40_0x700da80, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(VB_wf_geo_000A40_0x700db70, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
	gsSP1Triangle(0, 2, 14, 0),
	gsSPVertex(VB_wf_geo_000A40_0x700dc60, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000A40_0x700dde8[] = {
	gsDPSetTextureImage(0, 2, 1, wf_geo_000A40__texture_07002000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_wf_geo_000A40_0x700dce0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

