#include "libforest/gbi_extensions.h"

extern u8 bush_pal_dummy[];
extern u8 cliff_pal_dummy[];
extern u8 earth_pal_dummy[];
extern u8 grass_tex_dummy[];
extern u8 bush_b_tex_dummy[];
extern u8 bush_a_tex_dummy[];
extern u8 cliff_tex_dummy[];
extern u8 earth_tex_dummy[];

static Vtx grd_s_c1_s_2_v[] = {
#include "assets/field/bg/grd_s_c1_s_2_v.inc"
};

extern Gfx grd_s_c1_s_2_modelT[] = {
    gsSPEndDisplayList(),
};

extern Gfx grd_s_c1_s_2_model[] = {
    gsSPTexture(0, 0, 0, 0, G_ON),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_a_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&grd_s_c1_s_2_v[223], 13, 0),
    gsSPNTrianglesInit_5b(
        6, // tri count
        0, 1, 2, // tri0
        3, 0, 4, // tri1
        5, 3, 6 // tri2
    ),
    gsSPNTriangles_5b(
        7, 5, 8, // tri0
        9, 7, 10, // tri1
        11, 9, 12, // tri2
        0, 0, 0 // tri3
    ),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTLUT_Dolphin(15, 16, 1, earth_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(grass_tex_dummy, G_IM_FMT_CI, 32, 32, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_c1_s_2_v[0], 32, 0),
    gsSPNTrianglesInit_5b(
        25, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        0, 2, 4 // tri2
    ),
    gsSPNTriangles_5b(
        5, 6, 7, // tri0
        6, 8, 7, // tri1
        8, 4, 7, // tri2
        8, 0, 4 // tri3
    ),
    gsSPNTriangles_5b(
        9, 10, 11, // tri0
        10, 12, 11, // tri1
        13, 14, 15, // tri2
        13, 16, 14 // tri3
    ),
    gsSPNTriangles_5b(
        16, 17, 14, // tri0
        17, 11, 14, // tri1
        17, 18, 11, // tri2
        11, 15, 14 // tri3
    ),
    gsSPNTriangles_5b(
        18, 9, 11, // tri0
        12, 15, 11, // tri1
        19, 20, 21, // tri2
        20, 22, 21 // tri3
    ),
    gsSPNTriangles_5b(
        23, 24, 25, // tri0
        24, 26, 25, // tri1
        27, 28, 8, // tri2
        29, 6, 5 // tri3
    ),
    gsSPNTriangles_5b(
        22, 30, 21, // tri0
        21, 31, 19, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPVertex(&grd_s_c1_s_2_v[32], 32, 0),
    gsSPNTrianglesInit_5b(
        20, // tri count
        0, 1, 2, // tri0
        0, 3, 1, // tri1
        4, 5, 6 // tri2
    ),
    gsSPNTriangles_5b(
        7, 8, 5, // tri0
        9, 10, 11, // tri1
        10, 12, 11, // tri2
        10, 13, 12 // tri3
    ),
    gsSPNTriangles_5b(
        13, 14, 12, // tri0
        15, 16, 17, // tri1
        15, 18, 16, // tri2
        16, 19, 17 // tri3
    ),
    gsSPNTriangles_5b(
        19, 20, 17, // tri0
        19, 21, 20, // tri1
        22, 23, 24, // tri2
        25, 23, 22 // tri3
    ),
    gsSPNTriangles_5b(
        25, 26, 23, // tri0
        26, 25, 27, // tri1
        26, 28, 23, // tri2
        29, 30, 26 // tri3
    ),
    gsSPNTriangles_5b(
        3, 31, 1, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPVertex(&grd_s_c1_s_2_v[64], 24, 0),
    gsSPNTrianglesInit_5b(
        16, // tri count
        0, 1, 2, // tri0
        1, 3, 4, // tri1
        3, 5, 4 // tri2
    ),
    gsSPNTriangles_5b(
        6, 7, 8, // tri0
        7, 9, 8, // tri1
        3, 10, 5, // tri2
        10, 11, 5 // tri3
    ),
    gsSPNTriangles_5b(
        10, 12, 11, // tri0
        10, 13, 12, // tri1
        10, 14, 13, // tri2
        13, 15, 16 // tri3
    ),
    gsSPNTriangles_5b(
        13, 17, 15, // tri0
        9, 18, 0, // tri1
        18, 1, 0, // tri2
        19, 20, 21 // tri3
    ),
    gsSPNTriangles_5b(
        22, 23, 19, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsDPLoadTextureBlock_4b_Dolphin(earth_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_c1_s_2_v[88], 31, 0),
    gsSPNTrianglesInit_5b(
        17, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        4, 5, 6 // tri2
    ),
    gsSPNTriangles_5b(
        5, 7, 6, // tri0
        7, 8, 6, // tri1
        9, 10, 11, // tri2
        9, 12, 10 // tri3
    ),
    gsSPNTriangles_5b(
        13, 14, 15, // tri0
        14, 16, 15, // tri1
        15, 17, 18, // tri2
        19, 20, 13 // tri3
    ),
    gsSPNTriangles_5b(
        8, 21, 19, // tri0
        4, 22, 23, // tri1
        11, 24, 25, // tri2
        10, 26, 27 // tri3
    ),
    gsSPNTriangles_5b(
        27, 28, 2, // tri0
        3, 29, 30, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, cliff_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(cliff_tex_dummy, G_IM_FMT_CI, 64, 64, 15, GX_REPEAT, GX_REPEAT, 0, 0),
    gsSPVertex(&grd_s_c1_s_2_v[119], 32, 0),
    gsSPNTrianglesInit_5b(
        23, // tri count
        0, 1, 2, // tri0
        0, 3, 1, // tri1
        1, 4, 2 // tri2
    ),
    gsSPNTriangles_5b(
        5, 6, 7, // tri0
        5, 8, 6, // tri1
        6, 9, 7, // tri2
        5, 10, 8 // tri3
    ),
    gsSPNTriangles_5b(
        11, 12, 13, // tri0
        11, 14, 12, // tri1
        15, 1, 16, // tri2
        1, 17, 16 // tri3
    ),
    gsSPNTriangles_5b(
        18, 19, 20, // tri0
        19, 21, 20, // tri1
        21, 19, 22, // tri2
        19, 23, 22 // tri3
    ),
    gsSPNTriangles_5b(
        10, 24, 8, // tri0
        10, 25, 24, // tri1
        25, 26, 24, // tri2
        25, 27, 26 // tri3
    ),
    gsSPNTriangles_5b(
        27, 28, 26, // tri0
        17, 1, 29, // tri1
        1, 3, 29, // tri2
        30, 31, 14 // tri3
    ),
    gsSPVertex(&grd_s_c1_s_2_v[151], 32, 0),
    gsSPNTrianglesInit_5b(
        24, // tri count
        0, 1, 2, // tri0
        1, 3, 2, // tri1
        1, 4, 3 // tri2
    ),
    gsSPNTriangles_5b(
        4, 5, 6, // tri0
        5, 7, 6, // tri1
        5, 8, 7, // tri2
        4, 6, 3 // tri3
    ),
    gsSPNTriangles_5b(
        9, 10, 11, // tri0
        10, 12, 11, // tri1
        9, 11, 13, // tri2
        11, 14, 13 // tri3
    ),
    gsSPNTriangles_5b(
        14, 15, 13, // tri0
        16, 17, 18, // tri1
        16, 0, 17, // tri2
        18, 17, 19 // tri3
    ),
    gsSPNTriangles_5b(
        17, 0, 20, // tri0
        8, 5, 21, // tri1
        5, 22, 21, // tri2
        5, 4, 22 // tri3
    ),
    gsSPNTriangles_5b(
        23, 24, 25, // tri0
        24, 26, 25, // tri1
        15, 27, 28, // tri2
        27, 29, 28 // tri3
    ),
    gsSPNTriangles_5b(
        15, 14, 27, // tri0
        0, 0, 0, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsSPVertex(&grd_s_c1_s_2_v[181], 29, 0),
    gsSPNTrianglesInit_5b(
        21, // tri count
        0, 1, 2, // tri0
        3, 4, 5, // tri1
        4, 6, 5 // tri2
    ),
    gsSPNTriangles_5b(
        6, 4, 7, // tri0
        3, 8, 4, // tri1
        3, 9, 8, // tri2
        8, 7, 4 // tri3
    ),
    gsSPNTriangles_5b(
        8, 10, 7, // tri0
        11, 12, 13, // tri1
        11, 14, 12, // tri2
        15, 16, 17 // tri3
    ),
    gsSPNTriangles_5b(
        15, 18, 16, // tri0
        18, 19, 16, // tri1
        19, 20, 16, // tri2
        21, 22, 23 // tri3
    ),
    gsSPNTriangles_5b(
        22, 24, 23, // tri0
        25, 26, 14, // tri1
        26, 15, 14, // tri2
        22, 27, 24 // tri3
    ),
    gsSPNTriangles_5b(
        27, 28, 24, // tri0
        25, 14, 11, // tri1
        0, 0, 0, // tri2
        0, 0, 0 // tri3
    ),
    gsDPLoadTLUT_Dolphin(15, 16, 1, bush_pal_dummy),
    gsDPLoadTextureBlock_4b_Dolphin(bush_b_tex_dummy, G_IM_FMT_CI, 64, 32, 15, GX_REPEAT, GX_CLAMP, 0, 0),
    gsSPVertex(&grd_s_c1_s_2_v[210], 13, 0),
    gsSPNTrianglesInit_5b(
        6, // tri count
        0, 1, 2, // tri0
        3, 0, 4, // tri1
        5, 6, 7 // tri2
    ),
    gsSPNTriangles_5b(
        1, 5, 8, // tri0
        9, 10, 11, // tri1
        10, 3, 12, // tri2
        0, 0, 0 // tri3
    ),
    gsSPEndDisplayList(),
};