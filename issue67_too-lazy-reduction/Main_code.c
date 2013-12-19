char jhc_c_compile[] = "gcc rtstdir/rts/profile.c rtstdir/rts/rts_support.c rtstdir/rts/gc_none.c rtstdir/rts/jhc_rts.c rtstdir/lib/lib_cbits.c rtstdir/rts/gc_jgc.c rtstdir/rts/stableptr.c rtstdir/rts/conc.c -Irtstdir/cbits -Irtstdir Main_code.c -o Main '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -g -lm '-D_JHC_GC=_JHC_GC_JGC' '-D_JHC_CONC=_JHC_CONC_NONE'";
char jhc_command[] = "ajhc --tdir=./rtstdir -fdebug -o Main Main.hs --ignore-cache -dcore -dcore-afterlift -dcore-beforelift -dcore-initial -dcore-mangled -dcore-mini -dcore-pass -dcore-steps -ddatatable -ddatatable-builtin -de-alias -de-info -de-verbose -doptimization-stats -drules -drules-spec -dgrin -dgrin-datalog -dgrin-final -dgrin-graph -dgrin-initial -dgrin-normalized -dgrin-posteval -dgrin-preeval -dsteps -dtags -dc";
char jhc_version[] = "ajhc 0.8.0.11 (131db5216ddca9f096ff072395aa18e0d6939965)";

#include "jhc_rts_header.h"
struct s_caches_pub {
    struct s_cache *cCJhc_Prim_Prim_$x3a;
    struct s_cache *cCJhc_Type_Basic_Integer;
    struct s_cache *cCJhc_Prim_Prim_$LccR;
    struct s_cache *cFtheMain$d2;
    struct s_cache *cFtheMain$d3;
    struct s_cache *cFtheMain$d4;
    struct s_cache *cFtheMain$d5;
    struct s_cache *cFR$__fJhc_Basics_$pp;
    struct s_cache *cFW$__fJhc_Inst_Show_showWordMax;
    struct s_cache *cFJhc_Show_shows;
};
#include <stdio.h>
#include <wchar.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0,
    CJhc_Type_Basic_Integer = 0,
    CJhc_Type_Word_Int = 0,
    TJhc_Prim_Prim_$LccR = 0,
    TJhc_Prim_Prim_Bool = 1,
    TJhc_Type_Basic_Integer = 2
};
struct sCJhc_Prim_Prim_$LccR A_ALIGNED;
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sCJhc_Type_Basic_Integer A_ALIGNED;
struct sCJhc_Type_Word_Int A_ALIGNED;
struct sFJhc_Show_shows A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWordMax A_ALIGNED;
struct sFtheMain$d2 A_ALIGNED;
struct sFtheMain$d3 A_ALIGNED;
struct sFtheMain$d4 A_ALIGNED;
struct sFtheMain$d5 A_ALIGNED;
struct sTJhc_Prim_Prim_$LccR A_ALIGNED;

struct sCJhc_Prim_Prim_$LccR {
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Type_Basic_Integer {
    uintmax_t a1;
};

struct sCJhc_Type_Word_Int {
    uint32_t a1;
};

struct sFJhc_Show_shows {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
    wptr_t a3;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFW$__fJhc_Inst_Show_showWordMax {
    fptr_t head;
    wptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d2 {
    fptr_t head;
};

struct sFtheMain$d3 {
    fptr_t head;
};

struct sFtheMain$d4 {
    fptr_t head;
    wptr_t a1;
};

struct sFtheMain$d5 {
    fptr_t head;
    sptr_t a1;
};

struct sTJhc_Prim_Prim_$LccR {
    what_t what;
    wptr_t a1;
    wptr_t a2;
    wptr_t a3;
};
void jhc_hs_init(gc_t gc,arena_t arena) ;
static wptr_t E__fJhc_Show_shows(gc_t gc,arena_t arena,struct sFJhc_Show_shows* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWordMax* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d2(gc_t gc,arena_t arena,struct sFtheMain$d2* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d3(gc_t gc,arena_t arena,struct sFtheMain$d3* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d4(gc_t gc,arena_t arena,struct sFtheMain$d4* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d5(gc_t gc,arena_t arena,struct sFtheMain$d5* arg) A_STD A_FALIGNED;
void _amain(void) ;
static struct tup1 bRfW$__fR$__fMain_wwc(gc_t gc,arena_t arena,uintmax_t v135371080,wptr_t v220263301,wptr_t v44000772,sptr_t v215884585) A_STD;
static struct tup1 bRfW$__fW$__fData_List_610__lgo(gc_t gc,arena_t arena,wptr_t v209623981,sptr_t v227981230,wptr_t v105553547,sptr_t v61835296) A_STD;
static void b__main(gc_t gc,arena_t arena) A_STD;
static wptr_t fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t v476,wptr_t v134) A_STD A_MALLOC;
static wptr_t fJhc_Show_shows(gc_t gc,arena_t arena,wptr_t v1830945819,sptr_t v110947990,wptr_t v29534744) A_STD A_MALLOC;
static wptr_t fJhc_Show_showsPrec(gc_t gc,arena_t arena,wptr_t v1832649755,wptr_t v80256462,sptr_t v75583672,wptr_t v103925132) A_STD A_MALLOC;
static wptr_t fJhc_Show_showsPrec$d2(gc_t gc,arena_t arena,uintmax_t v80100076,wptr_t v49410872) A_STD A_MALLOC;
static wptr_t fPrelude_IO_10__getContents$t(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v110947982,wptr_t v29534740) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,uintmax_t v405807667,wptr_t v2049319469) A_STD A_MALLOC;
static struct tup1 fW$__fR$__fMain_wwc(gc_t gc,arena_t arena,uintmax_t v135370992,wptr_t v220263212,wptr_t v44000682,sptr_t v215884494) A_STD;
static uint16_t fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc_t gc,arena_t arena,wptr_t v72,wptr_t v254) A_STD;
static struct tup1 fW$__fW$__fData_List_610__lgo(gc_t gc,arena_t arena,wptr_t v209623812,wptr_t v227981060,wptr_t v105553376,sptr_t v61835124) A_STD;
static void ftheMain(gc_t gc,arena_t arena) A_STD;
static wptr_t ftheMain$d2(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t ftheMain$d3(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t ftheMain$d4(gc_t gc,arena_t arena,wptr_t v29375122) A_STD A_MALLOC;
static wptr_t ftheMain$d5(gc_t gc,arena_t arena,sptr_t v66333984) A_STD A_MALLOC;
struct tup5 {
    sptr_t t0;
    sptr_t t1;
};

struct tup3 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t2;
};

struct tup1 {
    wptr_t t0;
    sptr_t t1;
    wptr_t t2;
};
/* CAFS */
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 160),Left &("CJhc.Prim.Prim.[]")],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF(160), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 11),Right 2],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF(11), .a2 = c2};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 12),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF(12), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 13),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF(13), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 10),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF(10), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 9),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF(9), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Left &("CJhc.Prim.Prim.[]")],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 11],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c11};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Right 12],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = c12};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 117),Right 9],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF('u'), .a2 = c9};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Right 14],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = c14};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Right 15],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = c15};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Type.Basic.Integer [Left 0],1) */
static const struct sCJhc_Type_Basic_Integer _c1 = {.a1 = 0};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode TJhc.Prim.Prim.(,,) [Left ("TJhc.Type.Basic.Integer"),Left ("TJhc.Type.Basic.Integer"),Left ("TJhc.Prim.Prim.Bool")],18) */
static const struct sTJhc_Prim_Prim_$LccR _c18 = {.what = (what_t)SET_RAW_TAG(TJhc_Prim_Prim_$LccR), .a1 = SET_RAW_TAG(TJhc_Type_Basic_Integer), .a2 = SET_RAW_TAG(TJhc_Type_Basic_Integer), .a3 = SET_RAW_TAG(TJhc_Prim_Prim_Bool)};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Type.Word.Int [Left 0],17) */
static const struct sCJhc_Type_Word_Int _c17 = {.a1 = 0};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))

const void * const nh_stuff[] = {
&_c1, &_c2, &_c3, &_c4, &_c5, &_c6, &_c7, &_c8, &_c9, &_c10, &_c11,
&_c12, &_c13, &_c14, &_c15, &_c16, &_c17, &_c18, NULL
};


void 
jhc_hs_init(gc_t gc,arena_t arena)
{
        alloc_public_caches(arena,sizeof(struct s_caches_pub));
        find_cache(&public_caches(arena)->cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&public_caches(arena)->cCJhc_Type_Basic_Integer,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Basic_Integer)),0);
        find_cache(&public_caches(arena)->cCJhc_Prim_Prim_$LccR,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$LccR)),3);
        find_cache(&public_caches(arena)->cFtheMain$d2,arena,TO_BLOCKS(sizeof(struct sFtheMain$d2)),1);
        find_cache(&public_caches(arena)->cFtheMain$d3,arena,TO_BLOCKS(sizeof(struct sFtheMain$d3)),1);
        find_cache(&public_caches(arena)->cFtheMain$d4,arena,TO_BLOCKS(sizeof(struct sFtheMain$d4)),2);
        find_cache(&public_caches(arena)->cFtheMain$d5,arena,TO_BLOCKS(sizeof(struct sFtheMain$d5)),2);
        find_cache(&public_caches(arena)->cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&public_caches(arena)->cFW$__fJhc_Inst_Show_showWordMax,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWordMax)),2);
        find_cache(&public_caches(arena)->cFJhc_Show_shows,arena,TO_BLOCKS(sizeof(struct sFJhc_Show_shows)),4);
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Show_shows(gc_t gc,arena_t arena,struct sFJhc_Show_shows* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Show_shows(gc,arena,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFR$__fJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Basics_$pp(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWordMax* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWordMax(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d2(gc_t gc,arena_t arena,struct sFtheMain$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d2(gc,arena);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d3(gc_t gc,arena_t arena,struct sFtheMain$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d3(gc,arena);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d4(gc_t gc,arena_t arena,struct sFtheMain$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d5(gc_t gc,arena_t arena,struct sFtheMain$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d5(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

void 
_amain(void)
{
        arena_t arena;
        gc_t gc;
        gc = NULL;
        arena = NULL;
        jhc_alloc_init(&gc,&arena);
        jhc_hs_init(gc,arena);
        b__main(gc,arena);
        jhc_alloc_fini(gc,arena);
}

static struct tup1 A_STD
bRfW$__fR$__fMain_wwc(gc_t gc,arena_t arena,uintmax_t v135371080,wptr_t v220263301,wptr_t v44000772,sptr_t v215884585)
{
        sptr_t v251;
        sptr_t v253;
        sptr_t v255;
        struct tup1 _t2;
        struct tup3 x2;
        sptr_t v220263440 = demote(v220263301);
        if (0 == v135371080) {
            uintmax_t v260457468;
            v260457468 = ((struct sCJhc_Type_Basic_Integer*)v220263301)->a1;
            if (0 == v260457468) {
                uint16_t v187;
                v187 = ((uint16_t)RAW_GET_UF(v44000772));
                switch (v187) {
                case 0:
                    {   sptr_t v155;
                        wptr_t v157;
                        wptr_t v305;
                        struct tup1 x3;
                        {   gc_frame0(gc,1,v215884585);
                            x3 = bRfW$__fR$__fMain_wwc(gc,arena,1,PROMOTE(c1),RAW_SET_UF(0),v215884585);
                        }
                        v305 = x3.t0;
                        v155 = x3.t1;
                        v157 = x3.t2;
                        sptr_t v159 = demote(v305);
                        sptr_t v162 = demote(v157);
                        x2.t0 = v159;
                        x2.t1 = v155;
                        x2.t2 = v162;
                    }
                    break;
                default:
                    {   uint16_t v153480246;
                        v153480246 = v187;
                        {   uint32_t v115160452;
                            gc_frame0(gc,1,v220263440);
                            wptr_t v100026 = eval(gc,arena,v215884585);
                            v115160452 = ((uint32_t)RAW_GET_UF(v100026));
                            if (10 == v115160452) {
                                uintmax_t v260457474 = (1 + v135371080);
                                wptr_t x4 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x4)->a1 = v260457474;
                                wptr_t v272 = x4;
                                sptr_t v181754690 = demote(v272);
                                x2.t0 = v181754690;
                                x2.t1 = v220263440;
                                x2.t2 = ((sptr_t)RAW_SET_UF(0));
                            } else {
                                if (0 == v153480246) {
                                    uint16_t v100028;
                                    {   gc_frame0(gc,1,v100026);
                                        v100028 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100026,PROMOTE(c8));
                                    }
                                    if (0 == v100028) {
                                        uintmax_t v29375124 = (1 + v260457468);
                                        wptr_t x5 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                        ((struct sCJhc_Type_Basic_Integer*)x5)->a1 = v29375124;
                                        wptr_t v117 = x5;
                                        sptr_t v201839438 = demote(v117);
                                        {   gc_frame0(gc,1,v201839438);
                                            wptr_t x6 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                            ((struct sCJhc_Type_Basic_Integer*)x6)->a1 = v135371080;
                                            wptr_t v119 = x6;
                                            sptr_t v90861648 = demote(v119);
                                            x2.t0 = v90861648;
                                            x2.t1 = v201839438;
                                            x2.t2 = ((sptr_t)RAW_SET_UF(1));
                                        }
                                    } else {
                                        /* 1 */
                                        assert(1 == v100028);
                                        wptr_t x7 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                        ((struct sCJhc_Type_Basic_Integer*)x7)->a1 = v135371080;
                                        wptr_t v284 = x7;
                                        sptr_t v127754094 = demote(v284);
                                        x2.t0 = v127754094;
                                        x2.t1 = v220263440;
                                        x2.t2 = ((sptr_t)RAW_SET_UF(0));
                                    }
                                } else {
                                    uint16_t v100030;
                                    {   gc_frame0(gc,1,v100026);
                                        v100030 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100026,PROMOTE(c8));
                                    }
                                    if (0 == v100030) {
                                        wptr_t x8 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                        ((struct sCJhc_Type_Basic_Integer*)x8)->a1 = v135371080;
                                        wptr_t v310 = x8;
                                        sptr_t v240673846 = demote(v310);
                                        x2.t0 = v240673846;
                                        x2.t1 = v220263440;
                                        x2.t2 = ((sptr_t)RAW_SET_UF(1));
                                    } else {
                                        /* 1 */
                                        assert(1 == v100030);
                                        wptr_t x9 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                        ((struct sCJhc_Type_Basic_Integer*)x9)->a1 = v135371080;
                                        wptr_t v306 = x9;
                                        sptr_t v59069478 = demote(v306);
                                        x2.t0 = v59069478;
                                        x2.t1 = v220263440;
                                        x2.t2 = ((sptr_t)RAW_SET_UF(0));
                                    }
                                }
                            }
                        }
                    }
                break;
                }
            } else {
                {   uint32_t v132127014;
                    gc_frame0(gc,2,v44000772,v220263440);
                    wptr_t v100032 = eval(gc,arena,v215884585);
                    v132127014 = ((uint32_t)RAW_GET_UF(v100032));
                    if (10 == v132127014) {
                        uintmax_t v256943490 = (1 + v135371080);
                        wptr_t x10 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x10)->a1 = v256943490;
                        wptr_t v263 = x10;
                        sptr_t v124235150 = demote(v263);
                        x2.t0 = v124235150;
                        x2.t1 = v220263440;
                        x2.t2 = ((sptr_t)RAW_SET_UF(0));
                    } else {
                        uint16_t v34;
                        v34 = ((uint16_t)RAW_GET_UF(v44000772));
                        if (0 == v34) {
                            uint16_t v100036;
                            {   gc_frame0(gc,1,v100032);
                                v100036 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100032,PROMOTE(c8));
                            }
                            if (0 == v100036) {
                                uintmax_t v215350916 = (1 + v260457468);
                                wptr_t x11 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x11)->a1 = v215350916;
                                wptr_t v142 = x11;
                                sptr_t v158113096 = demote(v142);
                                {   gc_frame0(gc,1,v158113096);
                                    wptr_t x12 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                    ((struct sCJhc_Type_Basic_Integer*)x12)->a1 = v135371080;
                                    wptr_t v144 = x12;
                                    sptr_t v1780406 = demote(v144);
                                    x2.t0 = v1780406;
                                    x2.t1 = v158113096;
                                    x2.t2 = ((sptr_t)RAW_SET_UF(1));
                                }
                            } else {
                                /* 1 */
                                assert(1 == v100036);
                                wptr_t x13 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x13)->a1 = v135371080;
                                wptr_t v316 = x13;
                                sptr_t v110207572 = demote(v316);
                                x2.t0 = v110207572;
                                x2.t1 = v220263440;
                                x2.t2 = ((sptr_t)RAW_SET_UF(0));
                            }
                        } else {
                            uint16_t v100038;
                            {   gc_frame0(gc,1,v100032);
                                v100038 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100032,PROMOTE(c8));
                            }
                            if (0 == v100038) {
                                wptr_t x14 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x14)->a1 = v135371080;
                                wptr_t v150 = x14;
                                sptr_t v21055632 = demote(v150);
                                x2.t0 = v21055632;
                                x2.t1 = v220263440;
                                x2.t2 = ((sptr_t)RAW_SET_UF(1));
                            } else {
                                /* 1 */
                                assert(1 == v100038);
                                wptr_t x15 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x15)->a1 = v135371080;
                                wptr_t v148 = x15;
                                sptr_t v66102156 = demote(v148);
                                x2.t0 = v66102156;
                                x2.t1 = v220263440;
                                x2.t2 = ((sptr_t)RAW_SET_UF(0));
                            }
                        }
                    }
                }
            }
        } else {
            {   uint32_t v260952206;
                gc_frame0(gc,3,v44000772,v220263301,v220263440);
                wptr_t v100040 = eval(gc,arena,v215884585);
                v260952206 = ((uint32_t)RAW_GET_UF(v100040));
                if (10 == v260952206) {
                    uintmax_t v209623816 = (1 + v135371080);
                    wptr_t x16 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                    ((struct sCJhc_Type_Basic_Integer*)x16)->a1 = v209623816;
                    wptr_t v381 = x16;
                    sptr_t v45052584 = demote(v381);
                    x2.t0 = v45052584;
                    x2.t1 = v220263440;
                    x2.t2 = ((sptr_t)RAW_SET_UF(0));
                } else {
                    uint16_t v68216828;
                    v68216828 = ((uint16_t)RAW_GET_UF(v44000772));
                    if (0 == v68216828) {
                        uint16_t v100044;
                        {   gc_frame0(gc,1,v100040);
                            v100044 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100040,PROMOTE(c8));
                        }
                        if (0 == v100044) {
                            sptr_t x17 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d4);
                            ((struct sFtheMain$d4*)x17)->head = TO_FPTR(&E__ftheMain$d4);
                            ((struct sFtheMain$d4*)x17)->a1 = v220263301;
                            sptr_t v172090968 = MKLAZY(x17);
                            {   gc_frame0(gc,1,v172090968);
                                wptr_t x18 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                                ((struct sCJhc_Type_Basic_Integer*)x18)->a1 = v135371080;
                                wptr_t v167 = x18;
                                sptr_t v237992580 = demote(v167);
                                x2.t0 = v237992580;
                                x2.t1 = v172090968;
                                x2.t2 = ((sptr_t)RAW_SET_UF(1));
                            }
                        } else {
                            /* 1 */
                            assert(1 == v100044);
                            wptr_t x19 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                            ((struct sCJhc_Type_Basic_Integer*)x19)->a1 = v135371080;
                            wptr_t v164 = x19;
                            sptr_t v187526658 = demote(v164);
                            x2.t0 = v187526658;
                            x2.t1 = v220263440;
                            x2.t2 = ((sptr_t)RAW_SET_UF(0));
                        }
                    } else {
                        uint16_t v100046;
                        {   gc_frame0(gc,1,v100040);
                            v100046 = fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc,arena,v100040,PROMOTE(c8));
                        }
                        if (0 == v100046) {
                            wptr_t x20 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                            ((struct sCJhc_Type_Basic_Integer*)x20)->a1 = v135371080;
                            wptr_t v421 = x20;
                            sptr_t v2998634 = demote(v421);
                            x2.t0 = v2998634;
                            x2.t1 = v220263440;
                            x2.t2 = ((sptr_t)RAW_SET_UF(1));
                        } else {
                            /* 1 */
                            assert(1 == v100046);
                            wptr_t x21 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
                            ((struct sCJhc_Type_Basic_Integer*)x21)->a1 = v135371080;
                            wptr_t v171 = x21;
                            sptr_t v202961034 = demote(v171);
                            x2.t0 = v202961034;
                            x2.t1 = v220263440;
                            x2.t2 = ((sptr_t)RAW_SET_UF(0));
                        }
                    }
                }
            }
        }
        v251 = x2.t0;
        v253 = x2.t1;
        v255 = x2.t2;
        wptr_t v257 = promote(v251);
        wptr_t v259 = promote(v255);
        return (_t2.t0 = v257,_t2.t1 = v253,_t2.t2 = v259,_t2);
}

static struct tup1 A_STD
bRfW$__fW$__fData_List_610__lgo(gc_t gc,arena_t arena,wptr_t v209623981,sptr_t v227981230,wptr_t v105553547,sptr_t v61835296)
{
        sptr_t v209624053 = demote(v209623981);
        sptr_t v105553620 = demote(v105553547);
        {   sptr_t v109;
            sptr_t v223;
            sptr_t v627;
            struct tup1 _t4;
            struct tup3 x22;
            gc_frame0(gc,5,v105553547,v105553620,v209623981,v209624053,v227981230);
            wptr_t v100084 = eval(gc,arena,v61835296);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100084) {
                x22.t0 = v209624053;
                x22.t1 = v227981230;
                x22.t2 = v105553620;
            } else {
                sptr_t v826;
                sptr_t v828;
                uintmax_t v115160442;
                /* ("CJhc.Prim.Prim.:" ni826 ni828) */
                v826 = ((struct sCJhc_Prim_Prim_$x3a*)v100084)->a1;
                v828 = ((struct sCJhc_Prim_Prim_$x3a*)v100084)->a2;
                v115160442 = ((struct sCJhc_Type_Basic_Integer*)v209623981)->a1;
                {   wptr_t v179;
                    wptr_t v207;
                    sptr_t v338;
                    wptr_t v341;
                    sptr_t v359;
                    wptr_t v362;
                    struct tup1 x23;
                    struct tup1 x24;
                    gc_frame0(gc,2,v826,v828);
                    wptr_t v100088 = eval(gc,arena,v227981230);
                    {   gc_frame0(gc,1,v100088);
                        x23 = fW$__fR$__fMain_wwc(gc,arena,v115160442,v100088,v105553547,v826);
                    }
                    v179 = x23.t0;
                    v338 = x23.t1;
                    v341 = x23.t2;
                    {   gc_frame0(gc,3,v179,v338,v341);
                        x24 = bRfW$__fW$__fData_List_610__lgo(gc,arena,v179,v338,v341,v828);
                    }
                    v207 = x24.t0;
                    v359 = x24.t1;
                    v362 = x24.t2;
                    sptr_t v110 = demote(v207);
                    sptr_t v369 = demote(v362);
                    x22.t0 = v110;
                    x22.t1 = v359;
                    x22.t2 = v369;
                }
            }
            v109 = x22.t0;
            v627 = x22.t1;
            v223 = x22.t2;
            wptr_t v375 = promote(v109);
            wptr_t v5 = promote(v223);
            return (_t4.t0 = v375,_t4.t1 = v627,_t4.t2 = v5,_t4);
        }
}

static void A_STD
b__main(gc_t gc,arena_t arena)
{
        ftheMain(gc,arena);
        return;
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t v476,wptr_t v134)
{
        sptr_t v478 = demote(v476);
        {   gc_frame0(gc,2,v134,v478);
            return fR$__fJhc_Basics_$pp(gc,arena,v478,v134);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_shows(gc_t gc,arena_t arena,wptr_t v1830945819,sptr_t v110947990,wptr_t v29534744)
{
        {   gc_frame0(gc,3,v29534744,v110947990,v1830945819);
            return fJhc_Show_showsPrec(gc,arena,v1830945819,PROMOTE(c17),v110947990,v29534744);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_showsPrec(gc_t gc,arena_t arena,wptr_t v1832649755,wptr_t v80256462,sptr_t v75583672,wptr_t v103925132)
{
        sptr_t v103925412 = demote(v103925132);
        switch (FETCH_TAG(v1832649755)) {
        case TJhc_Prim_Prim_$LccR:
            {   {   sptr_t v115160446;
                    sptr_t v124940228;
                    sptr_t v216085092;
                    gc_frame0(gc,1,v103925412);
                    wptr_t v100010 = eval(gc,arena,v75583672);
                    v115160446 = ((struct sCJhc_Prim_Prim_$LccR*)v100010)->a1;
                    v124940228 = ((struct sCJhc_Prim_Prim_$LccR*)v100010)->a2;
                    v216085092 = ((struct sCJhc_Prim_Prim_$LccR*)v100010)->a3;
                    {   gc_frame0(gc,3,v115160446,v124940228,v216085092);
                        wptr_t x34 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x34)->a1 = ((sptr_t)RAW_SET_UF(')'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x34)->a2 = v103925412;
                        wptr_t v352 = x34;
                        {   gc_frame0(gc,1,v352);
                            sptr_t x35 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Show_shows);
                            ((struct sFJhc_Show_shows*)x35)->head = TO_FPTR(&E__fJhc_Show_shows);
                            ((struct sFJhc_Show_shows*)x35)->a1 = SET_RAW_TAG(TJhc_Prim_Prim_Bool);
                            ((struct sFJhc_Show_shows*)x35)->a2 = v216085092;
                            ((struct sFJhc_Show_shows*)x35)->a3 = v352;
                            sptr_t v10527818 = MKLAZY(x35);
                            {   gc_frame0(gc,1,v10527818);
                                wptr_t x36 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x36)->a1 = ((sptr_t)RAW_SET_UF(','));
                                ((struct sCJhc_Prim_Prim_$x3a*)x36)->a2 = v10527818;
                                wptr_t v67 = x36;
                                {   gc_frame0(gc,1,v67);
                                    sptr_t x37 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Show_shows);
                                    ((struct sFJhc_Show_shows*)x37)->head = TO_FPTR(&E__fJhc_Show_shows);
                                    ((struct sFJhc_Show_shows*)x37)->a1 = SET_RAW_TAG(TJhc_Type_Basic_Integer);
                                    ((struct sFJhc_Show_shows*)x37)->a2 = v124940228;
                                    ((struct sFJhc_Show_shows*)x37)->a3 = v67;
                                    sptr_t v253468956 = MKLAZY(x37);
                                    {   gc_frame0(gc,1,v253468956);
                                        wptr_t x38 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x38)->a1 = ((sptr_t)RAW_SET_UF(','));
                                        ((struct sCJhc_Prim_Prim_$x3a*)x38)->a2 = v253468956;
                                        wptr_t v372 = x38;
                                        {   gc_frame0(gc,1,v372);
                                            sptr_t x39 = s_alloc(gc,arena,public_caches(arena)->cFJhc_Show_shows);
                                            ((struct sFJhc_Show_shows*)x39)->head = TO_FPTR(&E__fJhc_Show_shows);
                                            ((struct sFJhc_Show_shows*)x39)->a1 = SET_RAW_TAG(TJhc_Type_Basic_Integer);
                                            ((struct sFJhc_Show_shows*)x39)->a2 = v115160446;
                                            ((struct sFJhc_Show_shows*)x39)->a3 = v372;
                                            sptr_t v209623814 = MKLAZY(x39);
                                            {   gc_frame0(gc,1,v209623814);
                                                wptr_t x40 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                                ((struct sCJhc_Prim_Prim_$x3a*)x40)->a1 = ((sptr_t)RAW_SET_UF('('));
                                                ((struct sCJhc_Prim_Prim_$x3a*)x40)->a2 = v209623814;
                                                return x40;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        case TJhc_Prim_Prim_Bool:
            {   {   sptr_t v314;
                    sptr_t v444;
                    uint16_t v29534746;
                    struct tup5 x41;
                    gc_frame0(gc,1,v103925412);
                    wptr_t v100012 = eval(gc,arena,v75583672);
                    v29534746 = ((uint16_t)RAW_GET_UF(v100012));
                    if (0 == v29534746) {
                        x41.t0 = c13;
                        x41.t1 = v103925412;
                    } else {
                        /* 1 */
                        assert(1 == v29534746);
                        x41.t0 = c16;
                        x41.t1 = v103925412;
                    }
                    v444 = x41.t0;
                    v314 = x41.t1;
                    wptr_t v631 = promote(v444);
                    wptr_t v318 = promote(v314);
                    {   gc_frame0(gc,2,v318,v631);
                        return fJhc_Basics_$pp(gc,arena,v631,v318);
                    }
                }
            }
            break;
        case TJhc_Type_Basic_Integer:
            {   uint32_t v68216834;
                v68216834 = ((struct sCJhc_Type_Word_Int*)v80256462)->a1;
                {   uintmax_t v73786432;
                    gc_frame0(gc,2,v103925132,v103925412);
                    wptr_t v100016 = eval(gc,arena,v75583672);
                    v73786432 = ((struct sCJhc_Type_Basic_Integer*)v100016)->a1;
                    uint16_t v100018 = (((intmax_t)0) > ((intmax_t)v73786432));
                    if (0 == v100018) {
                        return fW$__fJhc_Inst_Show_showWordMax(gc,arena,v73786432,v103925132);
                    } else {
                        /* 1 */
                        assert(1 == v100018);
                        uint16_t v100020 = (((int32_t)6) < ((int32_t)v68216834));
                        if (0 == v100020) {
                            return fJhc_Show_showsPrec$d2(gc,arena,v73786432,v103925132);
                        } else {
                            wptr_t v657;
                            /* 1 */
                            assert(1 == v100020);
                            wptr_t x42 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x42)->a1 = ((sptr_t)RAW_SET_UF(')'));
                            ((struct sCJhc_Prim_Prim_$x3a*)x42)->a2 = v103925412;
                            wptr_t v407 = x42;
                            {   gc_frame0(gc,1,v407);
                                v657 = fJhc_Show_showsPrec$d2(gc,arena,v73786432,v407);
                            }
                            sptr_t v207604362 = demote(v657);
                            {   gc_frame0(gc,1,v207604362);
                                wptr_t x43 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x43)->a1 = ((sptr_t)RAW_SET_UF('('));
                                ((struct sCJhc_Prim_Prim_$x3a*)x43)->a2 = v207604362;
                                return x43;
                            }
                        }
                    }
                }
            }
            break;
        default: jhc_case_fell_off(__LINE__);
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Show_showsPrec$d2(gc_t gc,arena_t arena,uintmax_t v80100076,wptr_t v49410872)
{
        uintmax_t v606388 = (-((intmax_t)v80100076));
        {   gc_frame0(gc,1,v49410872);
            sptr_t x32 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_Inst_Show_showWordMax);
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x32)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWordMax);
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x32)->a1 = v606388;
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x32)->a2 = v49410872;
            sptr_t v191816884 = MKLAZY(x32);
            {   gc_frame0(gc,1,v191816884);
                wptr_t x33 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x33)->a1 = ((sptr_t)RAW_SET_UF('-'));
                ((struct sCJhc_Prim_Prim_$x3a*)x33)->a2 = v191816884;
                return x33;
            }
        }
}

static wptr_t A_STD A_MALLOC
fPrelude_IO_10__getContents$t(gc_t gc,arena_t arena)
{
        uint32_t v264603956 = ((uint32_t)jhc_utf8_getchar());
        if (-1 == v264603956) {
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        } else {
            uint32_t v48808022 = v264603956;
            sptr_t x47 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d2);
            ((struct sFtheMain$d2*)x47)->head = TO_FPTR(&E__ftheMain$d2);
            sptr_t v26950328 = MKLAZY(x47);
            {   gc_frame0(gc,1,v26950328);
                wptr_t v206 = RAW_SET_UF(v48808022);
                sptr_t v142346402 = demote(v206);
                {   gc_frame0(gc,1,v142346402);
                    wptr_t x48 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x48)->a1 = v142346402;
                    ((struct sCJhc_Prim_Prim_$x3a*)x48)->a2 = v26950328;
                    return x48;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v110947982,wptr_t v29534740)
{
        {   gc_frame0(gc,1,v29534740);
            wptr_t v100000 = eval(gc,arena,v110947982);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100000) {
                return v29534740;
            } else {
                sptr_t v136;
                sptr_t v315;
                /* ("CJhc.Prim.Prim.:" ni136 ni315) */
                v136 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a1;
                v315 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a2;
                {   gc_frame0(gc,2,v136,v315);
                    sptr_t x30 = s_alloc(gc,arena,public_caches(arena)->cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x30)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x30)->a1 = v315;
                    ((struct sFR$__fJhc_Basics_$pp*)x30)->a2 = v29534740;
                    sptr_t v188984854 = MKLAZY(x30);
                    {   gc_frame0(gc,1,v188984854);
                        wptr_t x31 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a1 = v136;
                        ((struct sCJhc_Prim_Prim_$x3a*)x31)->a2 = v188984854;
                        return x31;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWordMax(gc_t gc,arena_t arena,uintmax_t v405807667,wptr_t v2049319469)
{
        {   wptr_t v68216830;
            uintmax_t v40405744;
            gc_frame0(gc,1,v2049319469);
            {   gc_frame0(gc,1,v2049319469);
                v40405744 = v405807667;
                v68216830 = v2049319469;
                goto fW$__fR$__fJhc_Inst_Show_showWordMax__26;
            }
            /* [bm40405744,nd68216830] */
            fW$__fR$__fJhc_Inst_Show_showWordMax__26:;
            {   sptr_t v68217223 = demote(v68216830);
                uintmax_t v40405740 = (v40405744 / 10);
                uintmax_t v253468954 = (v40405744 % 10);
                uint32_t v242159984 = ((uint32_t)v253468954);
                uint32_t v37497784 = (48 + v242159984);
                uint32_t v267505550 = v37497784;
                {   gc_frame0(gc,1,v68217223);
                    wptr_t v606 = RAW_SET_UF(v267505550);
                    sptr_t v111346350 = demote(v606);
                    if (0 == v40405740) {
                        {   gc_frame0(gc,1,v111346350);
                            wptr_t x27 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x27)->a1 = v111346350;
                            ((struct sCJhc_Prim_Prim_$x3a*)x27)->a2 = v68217223;
                            return x27;
                        }
                    } else {
                        {   gc_frame0(gc,1,v111346350);
                            wptr_t x28 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x28)->a1 = v111346350;
                            ((struct sCJhc_Prim_Prim_$x3a*)x28)->a2 = v68217223;
                            wptr_t v14 = x28;
                            {   gc_frame0(gc,1,v14);
                                v40405744 = v40405740;
                                v68216830 = v14;
                                goto fW$__fR$__fJhc_Inst_Show_showWordMax__26;
                            }
                        }
                    }
                }
            }
        }
}

static struct tup1 A_STD
fW$__fR$__fMain_wwc(gc_t gc,arena_t arena,uintmax_t v135370992,wptr_t v220263212,wptr_t v44000682,sptr_t v215884494)
{
        {   gc_frame0(gc,3,v44000682,v215884494,v220263212);
            return bRfW$__fR$__fMain_wwc(gc,arena,v135370992,v220263212,v44000682,v215884494);
        }
}

static uint16_t A_STD
fW$__fSpec$__Jhc_List_217_fJhc_List_elem(gc_t gc,arena_t arena,wptr_t v72,wptr_t v254)
{
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v254) {
            return 0;
        } else {
            sptr_t v458;
            sptr_t v461;
            uint32_t v44725398;
            /* ("CJhc.Prim.Prim.:" ni458 ni461) */
            v458 = ((struct sCJhc_Prim_Prim_$x3a*)v254)->a1;
            v461 = ((struct sCJhc_Prim_Prim_$x3a*)v254)->a2;
            v44725398 = ((uint32_t)RAW_GET_UF(v72));
            {   uint32_t v228308038;
                gc_frame0(gc,1,v461);
                wptr_t v100074 = eval(gc,arena,v458);
                v228308038 = ((uint32_t)RAW_GET_UF(v100074));
                uint16_t v100076 = (v44725398 == v228308038);
                if (0 == v100076) {
                    sptr_t v153480252;
                    uint32_t v196335310;
                    v196335310 = v228308038;
                    v153480252 = v461;
                    fW$__fJhc_List_213__f__29:;
                    {   uint16_t v100078 = (v44725398 == v196335310);
                        if (0 == v100078) {
                            wptr_t v100080 = eval(gc,arena,v153480252);
                            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100080) {
                                return 0;
                            } else {
                                sptr_t v465;
                                sptr_t v468;
                                /* ("CJhc.Prim.Prim.:" ni465 ni468) */
                                v465 = ((struct sCJhc_Prim_Prim_$x3a*)v100080)->a1;
                                v468 = ((struct sCJhc_Prim_Prim_$x3a*)v100080)->a2;
                                {   uint32_t v2026116629;
                                    gc_frame0(gc,1,v468);
                                    wptr_t v100082 = eval(gc,arena,v465);
                                    v2026116629 = ((uint32_t)RAW_GET_UF(v100082));
                                    v196335310 = v2026116629;
                                    v153480252 = v468;
                                    goto fW$__fJhc_List_213__f__29;
                                }
                            }
                        } else {
                            /* 1 */
                            assert(1 == v100078);
                            return 1;
                        }
                    }
                } else {
                    /* 1 */
                    assert(1 == v100076);
                    return 1;
                }
            }
        }
}

static struct tup1 A_STD
fW$__fW$__fData_List_610__lgo(gc_t gc,arena_t arena,wptr_t v209623812,wptr_t v227981060,wptr_t v105553376,sptr_t v61835124)
{
        sptr_t v227981115 = demote(v227981060);
        {   gc_frame0(gc,4,v61835124,v105553376,v209623812,v227981115);
            return bRfW$__fW$__fData_List_610__lgo(gc,arena,v209623812,v227981115,v105553376,v61835124);
        }
}

static void A_STD
ftheMain(gc_t gc,arena_t arena)
{
        sptr_t x49 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d3);
        ((struct sFtheMain$d3*)x49)->head = TO_FPTR(&E__ftheMain$d3);
        sptr_t v196335306 = MKLAZY(x49);
        {   wptr_t v100056;
            gc_frame0(gc,1,v196335306);
            sptr_t x50 = s_alloc(gc,arena,public_caches(arena)->cFtheMain$d5);
            ((struct sFtheMain$d5*)x50)->head = TO_FPTR(&E__ftheMain$d5);
            ((struct sFtheMain$d5*)x50)->a1 = v196335306;
            sptr_t v169358450 = MKLAZY(x50);
            {   gc_frame0(gc,1,v169358450);
                v100056 = fJhc_Show_showsPrec(gc,arena,PROMOTE(c18),PROMOTE(c17),v169358450,SET_RAW_TAG(CJhc_Prim_Prim_$BE));
            }
            sptr_t v69343904 = demote(v100056);
            {   sptr_t v10;
                gc_frame0(gc,1,v69343904);
                {   gc_frame0(gc,1,v69343904);
                    v10 = v69343904;
                    goto fJhc_Monad_72__go__51;
                }
                goto done51;
                fJhc_Monad_72__go__51:;
                {   wptr_t v100069 = eval(gc,arena,v10);
                    if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100069) {
                        SET_RAW_TAG(CJhc_Prim_Prim_$LR);
                    } else {
                        sptr_t v228308040;
                        sptr_t v26;
                        /* ("CJhc.Prim.Prim.:" ni26 ni228308040) */
                        v26 = ((struct sCJhc_Prim_Prim_$x3a*)v100069)->a1;
                        v228308040 = ((struct sCJhc_Prim_Prim_$x3a*)v100069)->a2;
                        {   uint32_t v216085086;
                            gc_frame0(gc,1,v228308040);
                            wptr_t v100062 = eval(gc,arena,v26);
                            v216085086 = ((uint32_t)RAW_GET_UF(v100062));
                            uint32_t v71241998 = v216085086;
                            jhc_utf8_putchar((int)v71241998);
                            v10 = v228308040;
                            goto fJhc_Monad_72__go__51;
                        }
                    }
                }
            }
            done51:;
            return;
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc,arena_t arena)
{
        return fPrelude_IO_10__getContents$t(gc,arena);
}

static wptr_t A_STD A_MALLOC
ftheMain$d3(gc_t gc,arena_t arena)
{
        return fPrelude_IO_10__getContents$t(gc,arena);
}

static wptr_t A_STD A_MALLOC
ftheMain$d4(gc_t gc,arena_t arena,wptr_t v29375122)
{
        uintmax_t v137248436;
        v137248436 = ((struct sCJhc_Type_Basic_Integer*)v29375122)->a1;
        uintmax_t v166168408 = (1 + v137248436);
        wptr_t x44 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x44)->a1 = v166168408;
        return x44;
}

static wptr_t A_STD A_MALLOC
ftheMain$d5(gc_t gc,arena_t arena,sptr_t v66333984)
{
        wptr_t v43;
        wptr_t v585;
        sptr_t v88;
        struct tup1 x45;
        {   gc_frame0(gc,1,v66333984);
            x45 = fW$__fW$__fData_List_610__lgo(gc,arena,PROMOTE(c1),PROMOTE(c1),RAW_SET_UF(0),v66333984);
        }
        v43 = x45.t0;
        v88 = x45.t1;
        v585 = x45.t2;
        sptr_t v49 = demote(v43);
        sptr_t v6 = demote(v585);
        {   gc_frame0(gc,3,v6,v49,v88);
            wptr_t x46 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$LccR);
            ((struct sCJhc_Prim_Prim_$LccR*)x46)->a1 = v49;
            ((struct sCJhc_Prim_Prim_$LccR*)x46)->a2 = v88;
            ((struct sCJhc_Prim_Prim_$LccR*)x46)->a3 = v6;
            return x46;
        }
}
