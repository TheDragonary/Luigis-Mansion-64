#include "custom.model.inc.h"
Vtx VB_bitfs_geo_000570_0x7007798[] = {
	{{{ 102, 0, 205 }, 0, { 4558, -4386 }, { 140, 140, 140, 255}}},
	{{{ 51, 205, 51 }, 0, { 4812, -3874 }, { 140, 140, 140, 255}}},
	{{{ -50, 205, 51 }, 0, { 4558, -3618 }, { 140, 140, 140, 255}}},
	{{{ -101, 0, 205 }, 0, { 4046, -3874 }, { 140, 140, 140, 255}}},
	{{{ 51, 205, -50 }, 0, { 5068, -3618 }, { 200, 200, 200, 255}}},
	{{{ -50, 205, -50 }, 0, { 4812, -3364 }, { 200, 200, 200, 255}}},
	{{{ -50, 205, 51 }, 0, { 4558, -3618 }, { 200, 200, 200, 255}}},
	{{{ 51, 205, 51 }, 0, { 4812, -3874 }, { 200, 200, 200, 255}}},
	{{{ -101, 0, 205 }, 0, { 4046, -3874 }, { 125, 125, 125, 255}}},
	{{{ -50, 205, 51 }, 0, { 4558, -3618 }, { 125, 125, 125, 255}}},
	{{{ -153, 0, -153 }, 0, { 4812, -2852 }, { 125, 125, 125, 255}}},
	{{{ -50, 205, -50 }, 0, { 4812, -3364 }, { 125, 125, 125, 255}}},
	{{{ 154, 0, -153 }, 0, { 5580, -3618 }, { 125, 125, 125, 255}}},
	{{{ 51, 205, 51 }, 0, { 4812, -3874 }, { 125, 125, 125, 255}}},
	{{{ 102, 0, 205 }, 0, { 4558, -4386 }, { 125, 125, 125, 255}}},
	{{{ 51, 205, -50 }, 0, { 5068, -3618 }, { 125, 125, 125, 255}}},
};

Vtx VB_bitfs_geo_000570_0x7007898[] = {
	{{{ -153, 0, -153 }, 0, { 4812, -2852 }, { 140, 140, 140, 255}}},
	{{{ 51, 205, -50 }, 0, { 5068, -3618 }, { 140, 140, 140, 255}}},
	{{{ 154, 0, -153 }, 0, { 5580, -3618 }, { 140, 140, 140, 255}}},
	{{{ -50, 205, -50 }, 0, { 4812, -3364 }, { 140, 140, 140, 255}}},
};

Gfx DL_bitfs_geo_000570_0x7007958[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_bitfs_geo_000570_0x70078d8),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_bitfs_geo_000570_0x70078d8[] = {
	gsDPSetTextureImage(0, 2, 1, bitfs_geo_000570__texture_09001800),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_bitfs_geo_000570_0x7007798, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSPVertex(VB_bitfs_geo_000570_0x7007898, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

