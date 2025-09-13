#ifndef ANIMAL_CROSSING_GBI_SWAP_H
#define ANIMAL_CROSSING_GBI_SWAP_H

#ifdef __cplusplus
#include "pc/big_endian.h"
#include "libforest/gbi_extensions.h"

#define NOSWAP(type) static type swap(const type& val) { return val; }
NOSWAP(Gtri2)
NOSWAP(Gsetcombine_new)
NOSWAP(Gtrin_independ)
NOSWAP(Gtrin)
NOSWAP(Gtrin_7b)
NOSWAP(Gquad_independ)
NOSWAP(Gquad)
NOSWAP(Gquad_7b)

static Gdma swap(Gdma val) {
    SWAP16(val.len);
    SWAP32(val.addr);
    return val;
}
static Gtri swap(Gtri val) {
    SWAP32(val.pad);
    return val;
}
static Gtri1 swap(Gtri1 val) {
    SWAP32(val.pad);
    return val;
}
static Gtexrect2 swap(const Gtexrect2& val) {
    return {
        val.cmd,
        swap16(val.xl),
        swap16(val.yl),
        val.pad1,
        val.tile,
        swap16(val.xh),
        swap16(val.yh),
        swap32(val.pad2),
        swap16(val.s),
        swap16(val.t),
        swap32(val.pad3),
        swap16(val.dsdx),
        swap16(val.dtdy)
    };
}
static Gsettile swap(Gsettile val) {
    SWAP16(val.line);
    SWAP16(val.tmem);
    return val;
}
static Gsettile_dolphin swap(Gsettile_dolphin val) {
    SWAP32(val.pad1);
    return val;
}
static Gloadtile swap(Gloadtile val) {
    SWAP16(val.sl);
    SWAP16(val.sl);
    SWAP16(val.sh);
    SWAP16(val.th);
    return val;
}
static Gsettilesize_Dolphin swap(Gsettilesize_Dolphin val) {
    SWAP16(val.sl);
    SWAP16(val.slen);
    SWAP16(val.tl);
    SWAP16(val.tl);
    return val;
}
static Gloadtlut_dolphin swap(Gloadtlut_dolphin val) {
    SWAP16(val.count);
    SWAP32(val.tlut_addr);
    return val;
}
static Gsetothermode_dolphin swap(Gsetothermode_dolphin val) {
    SWAP32(val.data);
    return val;
}
static GsetothermodeL swap(GsetothermodeL val) {
    SWAP32(val.data);
    return val;
}
static Gscissor swap(Gscissor val) {
    SWAP16(val.x0);
    SWAP16(val.y0);
    SWAP16(val.x1);
    SWAP16(val.y1);
    return val;
}
static Gfillrect2 swap(Gfillrect2 val) {
    SWAP16(val.x0);
    SWAP16(val.y0);
    SWAP16(val.x1);
    SWAP16(val.y1);
    return val;
}
static Gsetimg2 swap(Gsetimg2 val) {
    SWAP16(val.wd);
    SWAP32(val.imgaddr);
    return val;
}
static Gsetcolor swap(Gsetcolor val) {
    SWAP32(val.color);
    return val;
}
static Gsettexedgealpha swap(Gsettexedgealpha val) {
    SWAP32(val.unused0);
    SWAP32(val.unused1);
    return val;
}
static Gnoop swap(Gnoop val) {
    SWAP16(val.param0);
    SWAP32(val.param1);
    return val;
}
static Gmtx swap(Gmtx val) {
    SWAP32(val.addr);
    return val;
}
static Gvtx swap(Gvtx val) {
    SWAP32(val.addr);
    return val;
}
static Gline3D_new swap(Gline3D_new val) {
    SWAP32(val.pad);
    return val;
}
static Gquad0 swap(Gquad0 val) {
    SWAP32(val.pad);
    return val;
}
static Gculldl swap(Gculldl val) {
    SWAP16(val.vstart);
    SWAP16(val.pad1);
    SWAP16(val.vend);
    return val;
}
static Gtexture_internal swap(Gtexture_internal val) {
    SWAP16(val.s);
    SWAP16(val.t);
    return val;
}
static Gmoveword swap(Gmoveword val) {
    SWAP16(val.offset);
    SWAP32(val.data);
    return val;
}
static Gmovemem swap(Gmovemem val) {
    SWAP32(val.data);
    return val;
}
static Gspecial1 swap(Gspecial1 val) {
    SWAP16(val.param0);
    SWAP32(val.param1);
    return val;
}

#endif

#endif // ANIMAL_CROSSING_GBI_SWAP_H