#ifndef _GBI_PC_H
#define _GBI_PC_H

#include "pc/big_endian.h"

#define Gloadblock Gloadtile
#define Gsettilesize Gloadtile
#define Gloadtlut Gloadtile

#ifdef LITTLE_ENDIAN
#define Tri PC_Tri
#define Gsetcombine_new PC_Gsetcombine_new
#define Gsetcombine_tev PC_Gsetcombine_tev
#define Gsetcombine_raw PC_Gsetcombine_raw
#define Gtexrect2 PC_Gtexrect2
#define Gsettile_dolphin PC_Gsettile_dolphin
#define Gsettilesize_Dolphin PC_Gsettilesize_Dolphin
#define Gsetimg2 PC_Gsetimg2
#define Gloadtlut_dolphin PC_Gloadtlut_dolphin
#define Gtexture_internal PC_Gtexture_internal
#define Gmoveword PC_Gmoveword
#define Gmovemem PC_Gmovemem
#define Gsettexedgealpha PC_Gsettexedgealpha
#define Gscissor PC_Gscissor
#define Gfillrect2 PC_Gfillrect2
#define Gnoop PC_Gnoop
#define Gmtx PC_Gmtx
#define Gvtx PC_Gvtx
#define Gline3D_new PC_Gline3D_new
#define Gtri1 PC_Gtri1
#define Gtri2 PC_Gtri2
#define Gtrin_independ PC_Gtrin_independ
#define Gtrin PC_Gtrin
#define Gtrin_7b PC_Gtrin_7b
#define Gquad_independ PC_Gquad_independ
#define Gquad PC_Gquad
#define Gquad_7b PC_Gquad_7b
#define Gquad0 PC_Gquad0
#define Gculldl PC_Gculldl
#define Gspecial1 PC_Gspecial1
#define Gsetothermode_dolphin PC_Gsetothermode_dolphin
#define Gdma PC_Gdma
#define Gtri PC_Gtri
#define Gpopmtx PC_Gpopmtx
#define Gsegment PC_Gsegment
#define GsetothermodeL PC_GsetothermodeL
#define GsetothermodeH PC_GsetothermodeH
#define Gtexture PC_Gtexture
#define Gline3D PC_Gline3D
#define Gperspnorm PC_Gperspnorm
#define Gsetimg PC_Gsetimg
#define Gsetcombine PC_Gsetcombine
#define Gsetcolor PC_Gsetcolor
#define Gfillrect PC_Gfillrect
#define Gsettile PC_Gsettile
#define Gloadtile PC_Gloadtile
#define Gtexrect PC_Gtexrect
#define Gsetimg_new PC_Gsetimg_new
#endif

typedef struct {
    unsigned char v2;
    unsigned char v1;
    unsigned char v0;
    unsigned char flag;
} PC_Tri;

typedef struct {
	unsigned int c1:5;
	unsigned int a1:4;
	unsigned int Ac0:3;
	unsigned int Aa0:3;
	unsigned int c0:5;
	unsigned int a0:4;
	unsigned int cmd:8;

	unsigned int Ad1:3;
	unsigned int Ab1:3;
	unsigned int d1:3;
	unsigned int Ad0:3;
	unsigned int Ab0:3;
	unsigned int d0:3;
	unsigned int Ac1:3;
	unsigned int Aa1:3;
	unsigned int b1:4;
	unsigned int b0:4;
} PC_Gsetcombine_new;

typedef struct {
	unsigned int Ad1:3;
	unsigned int Ac1:3;
	unsigned int Ab1:3;
	unsigned int Aa1:3;
	unsigned int Ad0:3;
	unsigned int Ac0:3;
	unsigned int Ab0:3;
	unsigned int Aa0:3;
	int cmd:8;

	unsigned int d1:4;
	unsigned int c1:4;
	unsigned int b1:4;
	unsigned int a1:4;
	unsigned int d0:4;
	unsigned int c0:4;
	unsigned int b0:4;
	unsigned int a0:4;
} PC_Gsetcombine_tev;

typedef struct {
	unsigned int lower0:16;
	unsigned int upper0:8;
	int cmd:8;

	unsigned int lower1:16;
	unsigned int upper1:16;
} PC_Gsetcombine_raw;

typedef struct {
	unsigned int yl:12;
	unsigned int xl:12;
	unsigned int cmd:8;

	unsigned int yh:12;
	unsigned int xh:12;
	unsigned int tile:3;
	unsigned int pad1:5;

	unsigned int pad2:32;

	unsigned int t:16;
	unsigned int s:16;

	unsigned int pad3:32;

	unsigned int dtdy:16;
	unsigned int dsdx:16;
} PC_Gtexrect2;

typedef struct {
	unsigned int shift_t:4;
	unsigned int shift_s:4;
	unsigned int wrap_t:2;
	unsigned int wrap_s:2;
	unsigned int tlut_name:4;
	unsigned int tile:3;
	unsigned int pad0:1;
	unsigned int dol_fmt:4;
	int cmd:8;

	unsigned int pad1:32;
} PC_Gsettile_dolphin;

typedef struct {
	unsigned int slen:10;
	unsigned int sl:14;
	int cmd:8;

	unsigned int tlen:10;
	unsigned int tl:14;
	unsigned int tile:3;
	unsigned int pad:4;
	s8 isDolphin:1;
} PC_Gsettilesize_Dolphin;

typedef struct {
	unsigned int wd:10;
	unsigned int ht:8;
	unsigned int isDolphin:1;
	unsigned int siz:2;
	unsigned int fmt:3;
	int cmd:8;

	unsigned int imgaddr:32;
} PC_Gsetimg2;

typedef struct {
	unsigned int count:14;
	unsigned int pad1:2;
	unsigned int tlut_name:4;
	unsigned int pad0:2;
	unsigned int type:2;
	int cmd:8;

	unsigned int tlut_addr:32;
} PC_Gloadtlut_dolphin;

typedef struct {
	unsigned int on:8;
	unsigned int tile:3;
	unsigned int level:3;
	unsigned int pad:2;
	unsigned int xparam:8;
	unsigned int cmd:8;

	unsigned short t;
	unsigned short s;
} PC_Gtexture_internal;

typedef struct {
	unsigned int offset:16;
	unsigned int index:8;
	unsigned int cmd:8;

	unsigned int data;
} PC_Gmoveword;

typedef struct {
	unsigned int index:8;
	unsigned int offset:8;
	unsigned int length:8;
	unsigned int cmd:8;

	unsigned int data;
} PC_Gmovemem;

typedef struct {
	unsigned int unused0:24;
	unsigned int cmd:8;

	unsigned int tex_edge_alpha:8;
	unsigned int unused1:24;
} PC_Gsettexedgealpha;

typedef struct {
	unsigned int y0frac:2;
	unsigned int y0:10;
	unsigned int x0frac:2;
	unsigned int x0:10;
	int cmd:8;

	unsigned int y1frac:2;
	unsigned int y1:10;
	unsigned int x1frac:2;
	unsigned int x1:10;
	unsigned int pad:8;
} PC_Gscissor;

typedef struct {
	unsigned int y0frac:2;
	unsigned int y0:10;
	unsigned int x0frac:2;
	unsigned int x0:10;
	int cmd:8;

	unsigned int y1frac:2;
	unsigned int y1:10;
	unsigned int x1frac:2;
	unsigned int x1:10;
	unsigned int pad:8;
} PC_Gfillrect2;

typedef struct {
	unsigned int param0:16;
	unsigned int tag:8;
	unsigned int cmd:8;

	unsigned int param1;
} PC_Gnoop;

typedef struct {
	unsigned int type:8;
	unsigned int pad:8;
	unsigned int par:8;
	unsigned int cmd:8;

	unsigned int addr;
} PC_Gmtx;

typedef struct {
	unsigned int vn:8;
	unsigned int pad1:4;
	unsigned int n:8;
	unsigned int pad0:4;
	unsigned int cmd:8;

	unsigned int addr;
} PC_Gvtx;

typedef struct {
	unsigned int wd:8;
	unsigned int v1:8;
	unsigned int v0:8;
	unsigned int cmd:8;

	unsigned int pad;
} PC_Gline3D_new;

typedef struct {
	unsigned int v2:8;
	unsigned int v1:8;
	unsigned int v0:8;
	unsigned int cmd:8;

	unsigned int pad;
} PC_Gtri1;

typedef struct {
	unsigned int t0v2:8;
	unsigned int t0v1:8;
	unsigned int t0v0:8;
	int cmd:8;

	unsigned int t1v2:8;
	unsigned int t1v1:8;
	unsigned int t1v0:8;
	unsigned int pad:8;
} PC_Gtri2;

typedef struct {
	unsigned int f1v2_1:2;
	unsigned int f2v0:5;
	unsigned int f2v1:5;
	unsigned int f2v2:5;
	unsigned int count:7;
	unsigned int cmd:8;

	unsigned int is7bit:1;
	unsigned int pad:3;
	unsigned int f0v0:5;
	unsigned int f0v1:5;
	unsigned int f0v2:5;
	unsigned int f1v0:5;
	unsigned int f1v1:5;
	unsigned int f1v2_0:3;
} PC_Gtrin_independ;

typedef struct {
	unsigned int f1v2_1:2;
	unsigned int f2v0:5;
	unsigned int f2v1:5;
	unsigned int f2v2:5;
	unsigned int f3v0:5;
	unsigned int f3v1:5;
	unsigned int f3v2:5;

	unsigned int is7bit:1;
	unsigned int pad:3;
	unsigned int f0v0:5;
	unsigned int f0v1:5;
	unsigned int f0v2:5;
	unsigned int f1v0:5;
	unsigned int f1v1:5;
	unsigned int f1v2_0:3;
} PC_Gtrin;

typedef struct {
	unsigned int f1v1_1:4;
	unsigned int f1v2:7;
	unsigned int f2v0:7;
	unsigned int f2v1:7;
	unsigned int f2v2:7;

	unsigned int is7bit:1;
	unsigned int f0v0:7;
	unsigned int f0v1:7;
	unsigned int f0v2:7;
	unsigned int f1v0:7;
	unsigned int f1v1_0:3;
} PC_Gtrin_7b;

typedef struct {
	unsigned int f1v1_1:2;
	unsigned int f1v2:5;
	unsigned int f1v3:5;
	unsigned int unused:5;
	unsigned int count:7;
	unsigned int cmd:8;

	unsigned int is7bit:1;
	unsigned int pad:3;
	unsigned int f0v0:5;
	unsigned int f0v1:5;
	unsigned int f0v2:5;
	unsigned int f0v3:5;
	unsigned int f1v0:5;
	unsigned int f1v1_0:3;
} PC_Gquad_independ;

typedef struct {
	unsigned int f1v1_1:2;
	unsigned int f1v2:5;
	unsigned int f1v3:5;
	unsigned int f2v0:5;
	unsigned int f2v1:5;
	unsigned int f2v2:5;
	unsigned int f2v3:5;

	unsigned int is7bit:1;
	unsigned int pad:3;
	unsigned int f0v0:5;
	unsigned int f0v1:5;
	unsigned int f0v2:5;
	unsigned int f0v3:5;
	unsigned int f1v0:5;
	unsigned int f1v1_0:3;
} PC_Gquad;

typedef struct {
	unsigned int pad:4;
	unsigned int f1v0_0:3;
	unsigned int f1v0_1:4;
	unsigned int f1v1:7;
	unsigned int f1v2:7;
	unsigned int f1v3:7;

	unsigned int is7bit:1;
	unsigned int pad0:3;
	unsigned int f0v0:7;
	unsigned int f0v1:7;
	unsigned int f0v2:7;
	unsigned int f0v3:7;
} PC_Gquad_7b;

typedef struct {
	unsigned int v2:8;
	unsigned int v1:8;
	unsigned int v0:8;
	int cmd:8;

	unsigned int v3:8;
	unsigned int pad:24;
} PC_Gquad0;

typedef struct {
	unsigned int vstart:16;
	unsigned int pad0:8;
	int cmd:8;

	unsigned int vend:16;
	unsigned int pad1:16;
} PC_Gculldl;

typedef struct {
	unsigned int param0:16;
	int mode:8;
	int cmd:8;

	unsigned int param1;
} PC_Gspecial1;

typedef struct {
	u32 len:8;
	u32 sft:8;
	int pad0:8;
	int cmd:8;

	unsigned int data:32;
} PC_Gsetothermode_dolphin;

typedef struct {
	unsigned int len:16;
	unsigned int par:8;
	int cmd:8;

	unsigned int addr;
} PC_Gdma;

typedef struct {
	int pad:24;
	int cmd:8;

	Tri tri;
} PC_Gtri;

typedef struct {
	int pad1:24;
	int cmd:8;

	unsigned int param:8;
	int pad2:24;
} PC_Gpopmtx;

typedef struct {
	int number:8;
	int mw_index:8;
	int pad0:8;
	int cmd:8;

	int base:24;
	int pad1:8;
} PC_Gsegment;

typedef struct {
	int len:8;
	int sft:8;
	int pad0:8;
	int cmd:8;

	unsigned int data:32;
} PC_GsetothermodeL;

typedef struct {
	int len:8;
	int sft:8;
	int pad0:8;
	int cmd:8;

	unsigned int data:32;
} PC_GsetothermodeH;

typedef struct {
	unsigned char on;
	unsigned char tile;
	unsigned char lodscale;
	unsigned char cmd;

	unsigned short t;
	unsigned short s;
} PC_Gtexture;

typedef struct {
	int pad:24;
	int cmd:8;

	Tri line;
} PC_Gline3D;

typedef struct {
	int pad1:24;
	int cmd:8;

	short int pad2;

	short int scale;
} PC_Gperspnorm;

typedef struct {
	unsigned int wd:12;
	unsigned int pad:7;
	unsigned int siz:2;
	unsigned int fmt:3;
	int cmd:8;

	unsigned int dram;
} PC_Gsetimg;

typedef struct {
	unsigned int muxs0:24;
	int cmd:8;

	unsigned int muxs1:32;
} PC_Gsetcombine;

typedef struct {
	unsigned char prim_level;
	unsigned char prim_min_level;
	unsigned char pad;
	int cmd:8;

	unsigned long color;
} PC_Gsetcolor;

typedef struct {
	int y0frac:2;
	int y0:10;
	int x0frac:2;
	int x0:10;
	int cmd:8;

	int y1frac:2;
	int y1:10;
	int x1frac:2;
	int x1:10;
	unsigned int pad:8;
} PC_Gfillrect;

typedef struct {
	unsigned int tmem:9;
	unsigned int line:9;
	unsigned int pad0:1;
	unsigned int siz:2;
	unsigned int fmt:3;
	int cmd:8;

	unsigned int shifts:4;
	unsigned int masks:4;
	unsigned int ms:1;
	unsigned int cs:1;
	unsigned int shiftt:4;
	unsigned int maskt:4;
	unsigned int mt:1;
	unsigned int ct:1;
	unsigned int palette:4;
	unsigned int tile:3;
	unsigned int pad1:5;
} PC_Gsettile;

typedef struct {
	unsigned int tl:12;
	unsigned int sl:12;
	int cmd:8;

	unsigned int th:12;
	unsigned int sh:12;
	unsigned int tile:3;
	int pad:5;
} PC_Gloadtile;

typedef struct {
	unsigned int yl:12;
	unsigned int xl:12;
	unsigned int cmd:8;

	unsigned int yh:12;
	unsigned int xh:12;
	unsigned int tile:3;
	unsigned int pad1:5;

	unsigned int t:16;
	unsigned int s:16;

	unsigned int dtdy:16;
	unsigned int dsdx:16;
} PC_Gtexrect;

typedef union {
    Gsetimg setimg;
    Gsetimg2 setimg2;
} PC_Gsetimg_new;

#endif
