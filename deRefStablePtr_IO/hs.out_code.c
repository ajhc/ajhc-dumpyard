char jhc_c_compile[] = "gcc /tmp/jhc_22135/rts/profile.c /tmp/jhc_22135/rts/rts_support.c /tmp/jhc_22135/rts/gc_none.c /tmp/jhc_22135/rts/jhc_rts.c /tmp/jhc_22135/lib/lib_cbits.c /tmp/jhc_22135/rts/gc_jgc.c /tmp/jhc_22135/rts/stableptr.c -I/tmp/jhc_22135/cbits -I/tmp/jhc_22135 hs.out_code.c -o hs.out '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'";
char jhc_command[] = "ajhc Main.hs --ignore-cache -dcore -dcore-afterlift -dcore-beforelift -dcore-initial -dcore-mangled -dcore-mini -dcore-pass -dcore-steps -ddatatable -ddatatable-builtin -de-alias -de-info -de-verbose -doptimization-stats -drules -drules-spec -dgrin -dgrin-datalog -dgrin-final -dgrin-graph -dgrin-initial -dgrin-normalized -dgrin-posteval -dgrin-preeval -dsteps -dtags -dc";
char jhc_version[] = "ajhc 0.8.0.6 (54d1b9f6c7a5d644a9bf019e6871c46abace4a1a)";

#include "jhc_rts_header.h"
struct s_caches_pub {
    struct s_cache *cCJhc_Prim_Prim_$x3a;
    struct s_cache *cFW$__fJhc_Inst_Show_showWord;
    struct s_cache *cFR$__fJhc_Basics_$pp;
    struct s_cache *cFW$__fPrelude_Text_showLitChar$d2;
    struct s_cache *cFW$__fPrelude_Text_showLitChar$d3;
    struct s_cache *cFW$__fPrelude_Text_showLitChar$d4;
    struct s_cache *cFW$__fPrelude_Text_showLitChar$d5;
    struct s_cache *cP1__theMain$d2;
    struct s_cache *cFPrelude_Text_30__showl;
};
#include <stdio.h>
#include <wchar.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0,
    P1__theMain$d2 = 0
};
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sFPrelude_Text_30__showl A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWord A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d2 A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d3 A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d4 A_ALIGNED;
struct sFW$__fPrelude_Text_showLitChar$d5 A_ALIGNED;
struct sP1__theMain$d2 A_ALIGNED;

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sFPrelude_Text_30__showl {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fJhc_Inst_Show_showWord {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d3 {
    fptr_t head;
    sptr_t a1;
    uint32_t a2;
};

struct sFW$__fPrelude_Text_showLitChar$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fPrelude_Text_showLitChar$d5 {
    fptr_t head;
    uint32_t a1;
};

struct sP1__theMain$d2 {
    what_t what;
    sptr_t a1;
};
void jhc_hs_init(gc_t gc,arena_t arena) ;
static wptr_t E__fPrelude_Text_30__showl(gc_t gc,arena_t arena,struct sFPrelude_Text_30__showl* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWord(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWord* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d2(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d3(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d4(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fPrelude_Text_showLitChar$d5(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d5* arg) A_STD A_FALIGNED;
void _amain(void) ;
static void b__main(gc_t gc,arena_t arena) A_STD;
static wptr_t fInstance$__iJhc_Show_show_default(gc_t gc,arena_t arena,wptr_t v1219895323) A_STD A_MALLOC;
static wptr_t fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t v102,sptr_t v104) A_STD A_MALLOC;
static wptr_t fPrelude_IO_getChar(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t fPrelude_IO_putStrLn(gc_t gc,arena_t arena,wptr_t v270666271) A_STD A_MALLOC;
static wptr_t fPrelude_Text_30__showl(gc_t gc,arena_t arena,sptr_t v282,wptr_t v113231878) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v29534742,sptr_t v29534740) A_STD A_MALLOC;
static wptr_t fR$__fPrelude_IO_getLine(gc_t gc,arena_t arena) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Show_showWord(gc_t gc,arena_t arena,uint32_t v224534579,sptr_t v1364604973) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar(gc_t gc,arena_t arena,uint32_t v1544160791,sptr_t v209623812) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d2(gc_t gc,arena_t arena,sptr_t v239029634) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d3(gc_t gc,arena_t arena,sptr_t v44211038,uint32_t v206125088) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d4(gc_t gc,arena_t arena,sptr_t v153480246) A_STD A_MALLOC;
static wptr_t fW$__fPrelude_Text_showLitChar$d5(gc_t gc,arena_t arena,uint32_t v17791354) A_STD A_MALLOC;
static wptr_t fW$__fR$__fJhc_List_243__sub(gc_t gc,arena_t arena,wptr_t v115160438,uint32_t v124940224) A_STD A_MALLOC;
static void ftheMain(gc_t gc,arena_t arena) A_STD;
static sptr_t ftheMain$d2(gc_t gc,arena_t arena,sptr_t v73786432) A_STD A_MALLOC;
struct tup1 {
    sptr_t t0;
    sptr_t t1;
};
/* CAFS */
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 2],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c2};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 8],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c8};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 34),Left &("CJhc.Prim.Prim.[]")],139) */
static const struct sCJhc_Prim_Prim_$x3a _c139 = {.a1 = (sptr_t)RAW_SET_UF('"'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c139 (TO_SPTR_C(P_WHNF, (sptr_t)&_c139))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 38),Left &("CJhc.Prim.Prim.[]")],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF('&'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 49),Left &("CJhc.Prim.Prim.[]")],52) */
static const struct sCJhc_Prim_Prim_$x3a _c52 = {.a1 = (sptr_t)RAW_SET_UF('1'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c52 (TO_SPTR_C(P_WHNF, (sptr_t)&_c52))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 50),Left &("CJhc.Prim.Prim.[]")],55) */
static const struct sCJhc_Prim_Prim_$x3a _c55 = {.a1 = (sptr_t)RAW_SET_UF('2'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c55 (TO_SPTR_C(P_WHNF, (sptr_t)&_c55))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 51),Left &("CJhc.Prim.Prim.[]")],58) */
static const struct sCJhc_Prim_Prim_$x3a _c58 = {.a1 = (sptr_t)RAW_SET_UF('3'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c58 (TO_SPTR_C(P_WHNF, (sptr_t)&_c58))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 52),Left &("CJhc.Prim.Prim.[]")],61) */
static const struct sCJhc_Prim_Prim_$x3a _c61 = {.a1 = (sptr_t)RAW_SET_UF('4'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c61 (TO_SPTR_C(P_WHNF, (sptr_t)&_c61))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 75),Left &("CJhc.Prim.Prim.[]")],31) */
static const struct sCJhc_Prim_Prim_$x3a _c31 = {.a1 = (sptr_t)RAW_SET_UF('K'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c31 (TO_SPTR_C(P_WHNF, (sptr_t)&_c31))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 31],64) */
static const struct sCJhc_Prim_Prim_$x3a _c64 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c31};
#define c64 (TO_SPTR_C(P_WHNF, (sptr_t)&_c64))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 31],32) */
static const struct sCJhc_Prim_Prim_$x3a _c32 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c31};
#define c32 (TO_SPTR_C(P_WHNF, (sptr_t)&_c32))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 32],33) */
static const struct sCJhc_Prim_Prim_$x3a _c33 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c32};
#define c33 (TO_SPTR_C(P_WHNF, (sptr_t)&_c33))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Left &("CJhc.Prim.Prim.[]")],66) */
static const struct sCJhc_Prim_Prim_$x3a _c66 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c66 (TO_SPTR_C(P_WHNF, (sptr_t)&_c66))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 65),Right 66],72) */
static const struct sCJhc_Prim_Prim_$x3a _c72 = {.a1 = (sptr_t)RAW_SET_UF('A'), .a2 = c66};
#define c72 (TO_SPTR_C(P_WHNF, (sptr_t)&_c72))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Left &("CJhc.Prim.Prim.[]")],69) */
static const struct sCJhc_Prim_Prim_$x3a _c69 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c69 (TO_SPTR_C(P_WHNF, (sptr_t)&_c69))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Left &("CJhc.Prim.Prim.[]")],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 15],34) */
static const struct sCJhc_Prim_Prim_$x3a _c34 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c15};
#define c34 (TO_SPTR_C(P_WHNF, (sptr_t)&_c34))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Right 34],35) */
static const struct sCJhc_Prim_Prim_$x3a _c35 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = c34};
#define c35 (TO_SPTR_C(P_WHNF, (sptr_t)&_c35))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Left &("CJhc.Prim.Prim.[]")],36) */
static const struct sCJhc_Prim_Prim_$x3a _c36 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c36 (TO_SPTR_C(P_WHNF, (sptr_t)&_c36))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 66),Right 36],37) */
static const struct sCJhc_Prim_Prim_$x3a _c37 = {.a1 = (sptr_t)RAW_SET_UF('B'), .a2 = c36};
#define c37 (TO_SPTR_C(P_WHNF, (sptr_t)&_c37))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Left &("CJhc.Prim.Prim.[]")],78) */
static const struct sCJhc_Prim_Prim_$x3a _c78 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c78 (TO_SPTR_C(P_WHNF, (sptr_t)&_c78))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 82),Left &("CJhc.Prim.Prim.[]")],43) */
static const struct sCJhc_Prim_Prim_$x3a _c43 = {.a1 = (sptr_t)RAW_SET_UF('R'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c43 (TO_SPTR_C(P_WHNF, (sptr_t)&_c43))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 43],44) */
static const struct sCJhc_Prim_Prim_$x3a _c44 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c43};
#define c44 (TO_SPTR_C(P_WHNF, (sptr_t)&_c44))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 52],53) */
static const struct sCJhc_Prim_Prim_$x3a _c53 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c52};
#define c53 (TO_SPTR_C(P_WHNF, (sptr_t)&_c53))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 55],56) */
static const struct sCJhc_Prim_Prim_$x3a _c56 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c55};
#define c56 (TO_SPTR_C(P_WHNF, (sptr_t)&_c56))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 58],59) */
static const struct sCJhc_Prim_Prim_$x3a _c59 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c58};
#define c59 (TO_SPTR_C(P_WHNF, (sptr_t)&_c59))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 61],62) */
static const struct sCJhc_Prim_Prim_$x3a _c62 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c61};
#define c62 (TO_SPTR_C(P_WHNF, (sptr_t)&_c62))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 67),Right 72],73) */
static const struct sCJhc_Prim_Prim_$x3a _c73 = {.a1 = (sptr_t)RAW_SET_UF('C'), .a2 = c72};
#define c73 (TO_SPTR_C(P_WHNF, (sptr_t)&_c73))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 34],122) */
static const struct sCJhc_Prim_Prim_$x3a _c122 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c34};
#define c122 (TO_SPTR_C(P_WHNF, (sptr_t)&_c122))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Left &("CJhc.Prim.Prim.[]")],49) */
static const struct sCJhc_Prim_Prim_$x3a _c49 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c49 (TO_SPTR_C(P_WHNF, (sptr_t)&_c49))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Right 49],50) */
static const struct sCJhc_Prim_Prim_$x3a _c50 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = c49};
#define c50 (TO_SPTR_C(P_WHNF, (sptr_t)&_c50))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 50],51) */
static const struct sCJhc_Prim_Prim_$x3a _c51 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c50};
#define c51 (TO_SPTR_C(P_WHNF, (sptr_t)&_c51))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 53],54) */
static const struct sCJhc_Prim_Prim_$x3a _c54 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c53};
#define c54 (TO_SPTR_C(P_WHNF, (sptr_t)&_c54))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 56],57) */
static const struct sCJhc_Prim_Prim_$x3a _c57 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c56};
#define c57 (TO_SPTR_C(P_WHNF, (sptr_t)&_c57))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 59],60) */
static const struct sCJhc_Prim_Prim_$x3a _c60 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c59};
#define c60 (TO_SPTR_C(P_WHNF, (sptr_t)&_c60))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 68),Right 62],63) */
static const struct sCJhc_Prim_Prim_$x3a _c63 = {.a1 = (sptr_t)RAW_SET_UF('D'), .a2 = c62};
#define c63 (TO_SPTR_C(P_WHNF, (sptr_t)&_c63))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 11],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c11};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 88),Left &("CJhc.Prim.Prim.[]")],21) */
static const struct sCJhc_Prim_Prim_$x3a _c21 = {.a1 = (sptr_t)RAW_SET_UF('X'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c21 (TO_SPTR_C(P_WHNF, (sptr_t)&_c21))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Right 21],22) */
static const struct sCJhc_Prim_Prim_$x3a _c22 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = c21};
#define c22 (TO_SPTR_C(P_WHNF, (sptr_t)&_c22))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 22],24) */
static const struct sCJhc_Prim_Prim_$x3a _c24 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c22};
#define c24 (TO_SPTR_C(P_WHNF, (sptr_t)&_c24))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Left &("CJhc.Prim.Prim.[]")],25) */
static const struct sCJhc_Prim_Prim_$x3a _c25 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c25 (TO_SPTR_C(P_WHNF, (sptr_t)&_c25))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Right 25],26) */
static const struct sCJhc_Prim_Prim_$x3a _c26 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = c25};
#define c26 (TO_SPTR_C(P_WHNF, (sptr_t)&_c26))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 26],27) */
static const struct sCJhc_Prim_Prim_$x3a _c27 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c26};
#define c27 (TO_SPTR_C(P_WHNF, (sptr_t)&_c27))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 81),Left &("CJhc.Prim.Prim.[]")],28) */
static const struct sCJhc_Prim_Prim_$x3a _c28 = {.a1 = (sptr_t)RAW_SET_UF('Q'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c28 (TO_SPTR_C(P_WHNF, (sptr_t)&_c28))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 28],29) */
static const struct sCJhc_Prim_Prim_$x3a _c29 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c28};
#define c29 (TO_SPTR_C(P_WHNF, (sptr_t)&_c29))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 29],30) */
static const struct sCJhc_Prim_Prim_$x3a _c30 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c29};
#define c30 (TO_SPTR_C(P_WHNF, (sptr_t)&_c30))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 84),Right 69],70) */
static const struct sCJhc_Prim_Prim_$x3a _c70 = {.a1 = (sptr_t)RAW_SET_UF('T'), .a2 = c69};
#define c70 (TO_SPTR_C(P_WHNF, (sptr_t)&_c70))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 70],71) */
static const struct sCJhc_Prim_Prim_$x3a _c71 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c70};
#define c71 (TO_SPTR_C(P_WHNF, (sptr_t)&_c71))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 77),Left &("CJhc.Prim.Prim.[]")],74) */
static const struct sCJhc_Prim_Prim_$x3a _c74 = {.a1 = (sptr_t)RAW_SET_UF('M'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c74 (TO_SPTR_C(P_WHNF, (sptr_t)&_c74))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 74],75) */
static const struct sCJhc_Prim_Prim_$x3a _c75 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c74};
#define c75 (TO_SPTR_C(P_WHNF, (sptr_t)&_c75))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 78],79) */
static const struct sCJhc_Prim_Prim_$x3a _c79 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c78};
#define c79 (TO_SPTR_C(P_WHNF, (sptr_t)&_c79))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 69),Right 79],80) */
static const struct sCJhc_Prim_Prim_$x3a _c80 = {.a1 = (sptr_t)RAW_SET_UF('E'), .a2 = c79};
#define c80 (TO_SPTR_C(P_WHNF, (sptr_t)&_c80))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Left &("CJhc.Prim.Prim.[]")],39) */
static const struct sCJhc_Prim_Prim_$x3a _c39 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c39 (TO_SPTR_C(P_WHNF, (sptr_t)&_c39))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Right 36],81) */
static const struct sCJhc_Prim_Prim_$x3a _c81 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = c36};
#define c81 (TO_SPTR_C(P_WHNF, (sptr_t)&_c81))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 70),Right 39],42) */
static const struct sCJhc_Prim_Prim_$x3a _c42 = {.a1 = (sptr_t)RAW_SET_UF('F'), .a2 = c39};
#define c42 (TO_SPTR_C(P_WHNF, (sptr_t)&_c42))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 71),Right 36],82) */
static const struct sCJhc_Prim_Prim_$x3a _c82 = {.a1 = (sptr_t)RAW_SET_UF('G'), .a2 = c36};
#define c82 (TO_SPTR_C(P_WHNF, (sptr_t)&_c82))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 72),Left &("CJhc.Prim.Prim.[]")],18) */
static const struct sCJhc_Prim_Prim_$x3a _c18 = {.a1 = (sptr_t)RAW_SET_UF('H'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 72),Right 25],38) */
static const struct sCJhc_Prim_Prim_$x3a _c38 = {.a1 = (sptr_t)RAW_SET_UF('H'), .a2 = c25};
#define c38 (TO_SPTR_C(P_WHNF, (sptr_t)&_c38))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 73),Left &("CJhc.Prim.Prim.[]")],47) */
static const struct sCJhc_Prim_Prim_$x3a _c47 = {.a1 = (sptr_t)RAW_SET_UF('I'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c47 (TO_SPTR_C(P_WHNF, (sptr_t)&_c47))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 76),Right 39],40) */
static const struct sCJhc_Prim_Prim_$x3a _c40 = {.a1 = (sptr_t)RAW_SET_UF('L'), .a2 = c39};
#define c40 (TO_SPTR_C(P_WHNF, (sptr_t)&_c40))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 15],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c15};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 16],17) */
static const struct sCJhc_Prim_Prim_$x3a _c17 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c16};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 64],65) */
static const struct sCJhc_Prim_Prim_$x3a _c65 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c64};
#define c65 (TO_SPTR_C(P_WHNF, (sptr_t)&_c65))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Left &("CJhc.Prim.Prim.[]")],45) */
static const struct sCJhc_Prim_Prim_$x3a _c45 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c45 (TO_SPTR_C(P_WHNF, (sptr_t)&_c45))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 79),Right 18],19) */
static const struct sCJhc_Prim_Prim_$x3a _c19 = {.a1 = (sptr_t)RAW_SET_UF('O'), .a2 = c18};
#define c19 (TO_SPTR_C(P_WHNF, (sptr_t)&_c19))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 80),Left &("CJhc.Prim.Prim.[]")],85) */
static const struct sCJhc_Prim_Prim_$x3a _c85 = {.a1 = (sptr_t)RAW_SET_UF('P'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c85 (TO_SPTR_C(P_WHNF, (sptr_t)&_c85))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 82),Right 36],83) */
static const struct sCJhc_Prim_Prim_$x3a _c83 = {.a1 = (sptr_t)RAW_SET_UF('R'), .a2 = c36};
#define c83 (TO_SPTR_C(P_WHNF, (sptr_t)&_c83))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 19],20) */
static const struct sCJhc_Prim_Prim_$x3a _c20 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c19};
#define c20 (TO_SPTR_C(P_WHNF, (sptr_t)&_c20))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 22],23) */
static const struct sCJhc_Prim_Prim_$x3a _c23 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c22};
#define c23 (TO_SPTR_C(P_WHNF, (sptr_t)&_c23))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 45],46) */
static const struct sCJhc_Prim_Prim_$x3a _c46 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c45};
#define c46 (TO_SPTR_C(P_WHNF, (sptr_t)&_c46))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 47],48) */
static const struct sCJhc_Prim_Prim_$x3a _c48 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c47};
#define c48 (TO_SPTR_C(P_WHNF, (sptr_t)&_c48))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 89),Right 66],67) */
static const struct sCJhc_Prim_Prim_$x3a _c67 = {.a1 = (sptr_t)RAW_SET_UF('Y'), .a2 = c66};
#define c67 (TO_SPTR_C(P_WHNF, (sptr_t)&_c67))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 67],68) */
static const struct sCJhc_Prim_Prim_$x3a _c68 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c67};
#define c68 (TO_SPTR_C(P_WHNF, (sptr_t)&_c68))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 69],76) */
static const struct sCJhc_Prim_Prim_$x3a _c76 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c69};
#define c76 (TO_SPTR_C(P_WHNF, (sptr_t)&_c76))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 76],77) */
static const struct sCJhc_Prim_Prim_$x3a _c77 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c76};
#define c77 (TO_SPTR_C(P_WHNF, (sptr_t)&_c77))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 83),Right 85],86) */
static const struct sCJhc_Prim_Prim_$x3a _c86 = {.a1 = (sptr_t)RAW_SET_UF('S'), .a2 = c85};
#define c86 (TO_SPTR_C(P_WHNF, (sptr_t)&_c86))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 85),Right 36],84) */
static const struct sCJhc_Prim_Prim_$x3a _c84 = {.a1 = (sptr_t)RAW_SET_UF('U'), .a2 = c36};
#define c84 (TO_SPTR_C(P_WHNF, (sptr_t)&_c84))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 86),Right 25],41) */
static const struct sCJhc_Prim_Prim_$x3a _c41 = {.a1 = (sptr_t)RAW_SET_UF('V'), .a2 = c25};
#define c41 (TO_SPTR_C(P_WHNF, (sptr_t)&_c41))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Left &("CJhc.Prim.Prim.[]")],120) */
static const struct sCJhc_Prim_Prim_$x3a _c120 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c120 (TO_SPTR_C(P_WHNF, (sptr_t)&_c120))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 13],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c13};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 46],138) */
static const struct sCJhc_Prim_Prim_$x3a _c138 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c46};
#define c138 (TO_SPTR_C(P_WHNF, (sptr_t)&_c138))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 120],121) */
static const struct sCJhc_Prim_Prim_$x3a _c121 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c120};
#define c121 (TO_SPTR_C(P_WHNF, (sptr_t)&_c121))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 122],123) */
static const struct sCJhc_Prim_Prim_$x3a _c123 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c122};
#define c123 (TO_SPTR_C(P_WHNF, (sptr_t)&_c123))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Left &("CJhc.Prim.Prim.[]")],124) */
static const struct sCJhc_Prim_Prim_$x3a _c124 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c124 (TO_SPTR_C(P_WHNF, (sptr_t)&_c124))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 124],125) */
static const struct sCJhc_Prim_Prim_$x3a _c125 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c124};
#define c125 (TO_SPTR_C(P_WHNF, (sptr_t)&_c125))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 98),Left &("CJhc.Prim.Prim.[]")],126) */
static const struct sCJhc_Prim_Prim_$x3a _c126 = {.a1 = (sptr_t)RAW_SET_UF('b'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c126 (TO_SPTR_C(P_WHNF, (sptr_t)&_c126))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 126],127) */
static const struct sCJhc_Prim_Prim_$x3a _c127 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c126};
#define c127 (TO_SPTR_C(P_WHNF, (sptr_t)&_c127))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Left &("CJhc.Prim.Prim.[]")],128) */
static const struct sCJhc_Prim_Prim_$x3a _c128 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c128 (TO_SPTR_C(P_WHNF, (sptr_t)&_c128))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 128],129) */
static const struct sCJhc_Prim_Prim_$x3a _c129 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c128};
#define c129 (TO_SPTR_C(P_WHNF, (sptr_t)&_c129))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Left &("CJhc.Prim.Prim.[]")],130) */
static const struct sCJhc_Prim_Prim_$x3a _c130 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c130 (TO_SPTR_C(P_WHNF, (sptr_t)&_c130))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 130],131) */
static const struct sCJhc_Prim_Prim_$x3a _c131 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c130};
#define c131 (TO_SPTR_C(P_WHNF, (sptr_t)&_c131))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 118),Left &("CJhc.Prim.Prim.[]")],132) */
static const struct sCJhc_Prim_Prim_$x3a _c132 = {.a1 = (sptr_t)RAW_SET_UF('v'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c132 (TO_SPTR_C(P_WHNF, (sptr_t)&_c132))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 132],133) */
static const struct sCJhc_Prim_Prim_$x3a _c133 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c132};
#define c133 (TO_SPTR_C(P_WHNF, (sptr_t)&_c133))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Left &("CJhc.Prim.Prim.[]")],134) */
static const struct sCJhc_Prim_Prim_$x3a _c134 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c134 (TO_SPTR_C(P_WHNF, (sptr_t)&_c134))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 134],135) */
static const struct sCJhc_Prim_Prim_$x3a _c135 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c134};
#define c135 (TO_SPTR_C(P_WHNF, (sptr_t)&_c135))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 114),Left &("CJhc.Prim.Prim.[]")],136) */
static const struct sCJhc_Prim_Prim_$x3a _c136 = {.a1 = (sptr_t)RAW_SET_UF('r'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c136 (TO_SPTR_C(P_WHNF, (sptr_t)&_c136))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 136],137) */
static const struct sCJhc_Prim_Prim_$x3a _c137 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c136};
#define c137 (TO_SPTR_C(P_WHNF, (sptr_t)&_c137))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 92),Right 139],140) */
static const struct sCJhc_Prim_Prim_$x3a _c140 = {.a1 = (sptr_t)RAW_SET_UF('\\'), .a2 = c139};
#define c140 (TO_SPTR_C(P_WHNF, (sptr_t)&_c140))
/* (HcNode CJhc.Prim.Prim.: [Right 86,Left &("CJhc.Prim.Prim.[]")],87) */
static const struct sCJhc_Prim_Prim_$x3a _c87 = {.a1 = c86, .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c87 (TO_SPTR_C(P_WHNF, (sptr_t)&_c87))
/* (HcNode CJhc.Prim.Prim.: [Right 84,Right 87],88) */
static const struct sCJhc_Prim_Prim_$x3a _c88 = {.a1 = c84, .a2 = c87};
#define c88 (TO_SPTR_C(P_WHNF, (sptr_t)&_c88))
/* (HcNode CJhc.Prim.Prim.: [Right 83,Right 88],89) */
static const struct sCJhc_Prim_Prim_$x3a _c89 = {.a1 = c83, .a2 = c88};
#define c89 (TO_SPTR_C(P_WHNF, (sptr_t)&_c89))
/* (HcNode CJhc.Prim.Prim.: [Right 82,Right 89],90) */
static const struct sCJhc_Prim_Prim_$x3a _c90 = {.a1 = c82, .a2 = c89};
#define c90 (TO_SPTR_C(P_WHNF, (sptr_t)&_c90))
/* (HcNode CJhc.Prim.Prim.: [Right 81,Right 90],91) */
static const struct sCJhc_Prim_Prim_$x3a _c91 = {.a1 = c81, .a2 = c90};
#define c91 (TO_SPTR_C(P_WHNF, (sptr_t)&_c91))
/* (HcNode CJhc.Prim.Prim.: [Right 80,Right 91],92) */
static const struct sCJhc_Prim_Prim_$x3a _c92 = {.a1 = c80, .a2 = c91};
#define c92 (TO_SPTR_C(P_WHNF, (sptr_t)&_c92))
/* (HcNode CJhc.Prim.Prim.: [Right 77,Right 92],93) */
static const struct sCJhc_Prim_Prim_$x3a _c93 = {.a1 = c77, .a2 = c92};
#define c93 (TO_SPTR_C(P_WHNF, (sptr_t)&_c93))
/* (HcNode CJhc.Prim.Prim.: [Right 75,Right 93],94) */
static const struct sCJhc_Prim_Prim_$x3a _c94 = {.a1 = c75, .a2 = c93};
#define c94 (TO_SPTR_C(P_WHNF, (sptr_t)&_c94))
/* (HcNode CJhc.Prim.Prim.: [Right 73,Right 94],95) */
static const struct sCJhc_Prim_Prim_$x3a _c95 = {.a1 = c73, .a2 = c94};
#define c95 (TO_SPTR_C(P_WHNF, (sptr_t)&_c95))
/* (HcNode CJhc.Prim.Prim.: [Right 71,Right 95],96) */
static const struct sCJhc_Prim_Prim_$x3a _c96 = {.a1 = c71, .a2 = c95};
#define c96 (TO_SPTR_C(P_WHNF, (sptr_t)&_c96))
/* (HcNode CJhc.Prim.Prim.: [Right 68,Right 96],97) */
static const struct sCJhc_Prim_Prim_$x3a _c97 = {.a1 = c68, .a2 = c96};
#define c97 (TO_SPTR_C(P_WHNF, (sptr_t)&_c97))
/* (HcNode CJhc.Prim.Prim.: [Right 65,Right 97],98) */
static const struct sCJhc_Prim_Prim_$x3a _c98 = {.a1 = c65, .a2 = c97};
#define c98 (TO_SPTR_C(P_WHNF, (sptr_t)&_c98))
/* (HcNode CJhc.Prim.Prim.: [Right 63,Right 98],99) */
static const struct sCJhc_Prim_Prim_$x3a _c99 = {.a1 = c63, .a2 = c98};
#define c99 (TO_SPTR_C(P_WHNF, (sptr_t)&_c99))
/* (HcNode CJhc.Prim.Prim.: [Right 60,Right 99],100) */
static const struct sCJhc_Prim_Prim_$x3a _c100 = {.a1 = c60, .a2 = c99};
#define c100 (TO_SPTR_C(P_WHNF, (sptr_t)&_c100))
/* (HcNode CJhc.Prim.Prim.: [Right 57,Right 100],101) */
static const struct sCJhc_Prim_Prim_$x3a _c101 = {.a1 = c57, .a2 = c100};
#define c101 (TO_SPTR_C(P_WHNF, (sptr_t)&_c101))
/* (HcNode CJhc.Prim.Prim.: [Right 54,Right 101],102) */
static const struct sCJhc_Prim_Prim_$x3a _c102 = {.a1 = c54, .a2 = c101};
#define c102 (TO_SPTR_C(P_WHNF, (sptr_t)&_c102))
/* (HcNode CJhc.Prim.Prim.: [Right 51,Right 102],103) */
static const struct sCJhc_Prim_Prim_$x3a _c103 = {.a1 = c51, .a2 = c102};
#define c103 (TO_SPTR_C(P_WHNF, (sptr_t)&_c103))
/* (HcNode CJhc.Prim.Prim.: [Right 48,Right 103],104) */
static const struct sCJhc_Prim_Prim_$x3a _c104 = {.a1 = c48, .a2 = c103};
#define c104 (TO_SPTR_C(P_WHNF, (sptr_t)&_c104))
/* (HcNode CJhc.Prim.Prim.: [Right 46,Right 104],105) */
static const struct sCJhc_Prim_Prim_$x3a _c105 = {.a1 = c46, .a2 = c104};
#define c105 (TO_SPTR_C(P_WHNF, (sptr_t)&_c105))
/* (HcNode CJhc.Prim.Prim.: [Right 44,Right 105],106) */
static const struct sCJhc_Prim_Prim_$x3a _c106 = {.a1 = c44, .a2 = c105};
#define c106 (TO_SPTR_C(P_WHNF, (sptr_t)&_c106))
/* (HcNode CJhc.Prim.Prim.: [Right 42,Right 106],107) */
static const struct sCJhc_Prim_Prim_$x3a _c107 = {.a1 = c42, .a2 = c106};
#define c107 (TO_SPTR_C(P_WHNF, (sptr_t)&_c107))
/* (HcNode CJhc.Prim.Prim.: [Right 41,Right 107],108) */
static const struct sCJhc_Prim_Prim_$x3a _c108 = {.a1 = c41, .a2 = c107};
#define c108 (TO_SPTR_C(P_WHNF, (sptr_t)&_c108))
/* (HcNode CJhc.Prim.Prim.: [Right 40,Right 108],109) */
static const struct sCJhc_Prim_Prim_$x3a _c109 = {.a1 = c40, .a2 = c108};
#define c109 (TO_SPTR_C(P_WHNF, (sptr_t)&_c109))
/* (HcNode CJhc.Prim.Prim.: [Right 38,Right 109],110) */
static const struct sCJhc_Prim_Prim_$x3a _c110 = {.a1 = c38, .a2 = c109};
#define c110 (TO_SPTR_C(P_WHNF, (sptr_t)&_c110))
/* (HcNode CJhc.Prim.Prim.: [Right 37,Right 110],111) */
static const struct sCJhc_Prim_Prim_$x3a _c111 = {.a1 = c37, .a2 = c110};
#define c111 (TO_SPTR_C(P_WHNF, (sptr_t)&_c111))
/* (HcNode CJhc.Prim.Prim.: [Right 35,Right 111],112) */
static const struct sCJhc_Prim_Prim_$x3a _c112 = {.a1 = c35, .a2 = c111};
#define c112 (TO_SPTR_C(P_WHNF, (sptr_t)&_c112))
/* (HcNode CJhc.Prim.Prim.: [Right 33,Right 112],113) */
static const struct sCJhc_Prim_Prim_$x3a _c113 = {.a1 = c33, .a2 = c112};
#define c113 (TO_SPTR_C(P_WHNF, (sptr_t)&_c113))
/* (HcNode CJhc.Prim.Prim.: [Right 30,Right 113],114) */
static const struct sCJhc_Prim_Prim_$x3a _c114 = {.a1 = c30, .a2 = c113};
#define c114 (TO_SPTR_C(P_WHNF, (sptr_t)&_c114))
/* (HcNode CJhc.Prim.Prim.: [Right 27,Right 114],115) */
static const struct sCJhc_Prim_Prim_$x3a _c115 = {.a1 = c27, .a2 = c114};
#define c115 (TO_SPTR_C(P_WHNF, (sptr_t)&_c115))
/* (HcNode CJhc.Prim.Prim.: [Right 24,Right 115],116) */
static const struct sCJhc_Prim_Prim_$x3a _c116 = {.a1 = c24, .a2 = c115};
#define c116 (TO_SPTR_C(P_WHNF, (sptr_t)&_c116))
/* (HcNode CJhc.Prim.Prim.: [Right 23,Right 116],117) */
static const struct sCJhc_Prim_Prim_$x3a _c117 = {.a1 = c23, .a2 = c116};
#define c117 (TO_SPTR_C(P_WHNF, (sptr_t)&_c117))
/* (HcNode CJhc.Prim.Prim.: [Right 20,Right 117],118) */
static const struct sCJhc_Prim_Prim_$x3a _c118 = {.a1 = c20, .a2 = c117};
#define c118 (TO_SPTR_C(P_WHNF, (sptr_t)&_c118))
/* (HcNode CJhc.Prim.Prim.: [Right 17,Right 118],119) */
static const struct sCJhc_Prim_Prim_$x3a _c119 = {.a1 = c17, .a2 = c118};
#define c119 (TO_SPTR_C(P_WHNF, (sptr_t)&_c119))

const void * const nh_stuff[] = {
&_c1, &_c2, &_c3, &_c4, &_c5, &_c6, &_c7, &_c8, &_c9, &_c10, &_c11,
&_c12, &_c13, &_c14, &_c15, &_c16, &_c17, &_c18, &_c19, &_c20,
&_c21, &_c22, &_c23, &_c24, &_c25, &_c26, &_c27, &_c28, &_c29,
&_c30, &_c31, &_c32, &_c33, &_c34, &_c35, &_c36, &_c37, &_c38,
&_c39, &_c40, &_c41, &_c42, &_c43, &_c44, &_c45, &_c46, &_c47,
&_c48, &_c49, &_c50, &_c51, &_c52, &_c53, &_c54, &_c55, &_c56,
&_c57, &_c58, &_c59, &_c60, &_c61, &_c62, &_c63, &_c64, &_c65,
&_c66, &_c67, &_c68, &_c69, &_c70, &_c71, &_c72, &_c73, &_c74,
&_c75, &_c76, &_c77, &_c78, &_c79, &_c80, &_c81, &_c82, &_c83,
&_c84, &_c85, &_c86, &_c87, &_c88, &_c89, &_c90, &_c91, &_c92,
&_c93, &_c94, &_c95, &_c96, &_c97, &_c98, &_c99, &_c100, &_c101,
&_c102, &_c103, &_c104, &_c105, &_c106, &_c107, &_c108, &_c109,
&_c110, &_c111, &_c112, &_c113, &_c114, &_c115, &_c116, &_c117,
&_c118, &_c119, &_c120, &_c121, &_c122, &_c123, &_c124, &_c125,
&_c126, &_c127, &_c128, &_c129, &_c130, &_c131, &_c132, &_c133,
&_c134, &_c135, &_c136, &_c137, &_c138, &_c139, &_c140, NULL
};


void 
jhc_hs_init(gc_t gc,arena_t arena)
{
        alloc_public_caches(arena,sizeof(struct s_caches_pub));
        find_cache(&public_caches(arena)->cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&public_caches(arena)->cFW$__fJhc_Inst_Show_showWord,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWord)),2);
        find_cache(&public_caches(arena)->cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d2,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d2)),2);
        find_cache(&public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d3)),2);
        find_cache(&public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d4)),2);
        find_cache(&public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d5,arena,TO_BLOCKS(sizeof(struct sFW$__fPrelude_Text_showLitChar$d5)),1);
        find_cache(&public_caches(arena)->cP1__theMain$d2,arena,TO_BLOCKS(sizeof(struct sP1__theMain$d2)),2);
        find_cache(&public_caches(arena)->cFPrelude_Text_30__showl,arena,TO_BLOCKS(sizeof(struct sFPrelude_Text_30__showl)),3);
}

static wptr_t A_STD A_FALIGNED
E__fPrelude_Text_30__showl(gc_t gc,arena_t arena,struct sFPrelude_Text_30__showl* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fPrelude_Text_30__showl(gc,arena,arg->a1,arg->a2);
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
E__fW$__fJhc_Inst_Show_showWord(gc_t gc,arena_t arena,struct sFW$__fJhc_Inst_Show_showWord* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWord(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d2(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d2(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d3(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d3(gc,arena,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d4(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d4(gc,arena,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fPrelude_Text_showLitChar$d5(gc_t gc,arena_t arena,struct sFW$__fPrelude_Text_showLitChar$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fPrelude_Text_showLitChar$d5(gc,arena,arg->a1);
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

static void A_STD
b__main(gc_t gc,arena_t arena)
{
        return ftheMain(gc,arena);
}

static wptr_t A_STD A_MALLOC
fInstance$__iJhc_Show_show_default(gc_t gc,arena_t arena,wptr_t v1219895323)
{
        sptr_t v1219895345 = demote(v1219895323);
        {   gc_frame0(gc,1,v1219895345);
            sptr_t x28 = s_alloc(gc,arena,public_caches(arena)->cFPrelude_Text_30__showl);
            ((struct sFPrelude_Text_30__showl*)x28)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
            ((struct sFPrelude_Text_30__showl*)x28)->a1 = v1219895345;
            ((struct sFPrelude_Text_30__showl*)x28)->a2 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
            sptr_t v43467080 = MKLAZY(x28);
            {   gc_frame0(gc,1,v43467080);
                wptr_t x29 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x29)->a1 = ((sptr_t)RAW_SET_UF('"'));
                ((struct sCJhc_Prim_Prim_$x3a*)x29)->a2 = v43467080;
                return x29;
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_$pp(gc_t gc,arena_t arena,wptr_t v102,sptr_t v104)
{
        sptr_t v255 = demote(v102);
        return fR$__fJhc_Basics_$pp(gc,arena,v255,v104);
}

static wptr_t A_STD A_MALLOC
fPrelude_IO_getChar(gc_t gc,arena_t arena)
{
        uint32_t v177;
        uint32_t v158403286 = ((uint32_t)jhc_utf8_getchar());
        if (-1 == v158403286) {
            sptr_t v119549090;
            v119549090 = c12;
            fR$__fJhc_IO_putErrLn__5:;
            {   wptr_t v100042 = eval(gc,arena,v119549090);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100042) {
                    (void)jhc_utf8_putchar((int)10);
                    SET_RAW_TAG(CJhc_Prim_Prim_$LR);
                } else {
                    sptr_t v246;
                    sptr_t v80;
                    /* ("CJhc.Prim.Prim.:" ni246 ni80) */
                    v246 = ((struct sCJhc_Prim_Prim_$x3a*)v100042)->a1;
                    v80 = ((struct sCJhc_Prim_Prim_$x3a*)v100042)->a2;
                    {   uint32_t v216085086;
                        gc_frame0(gc,1,v80);
                        wptr_t v100044 = eval(gc,arena,v246);
                        v216085086 = ((uint32_t)RAW_GET_UF(v100044));
                        uint32_t v124940230 = v216085086;
                        (void)jhc_utf8_putchar((int)v124940230);
                        v119549090 = v80;
                        goto fR$__fJhc_IO_putErrLn__5;
                    }
                }
            }
            jhc_exit(255);
        } else {
            v177 = v158403286;
        }
        return RAW_SET_UF(v177);
}

static wptr_t A_STD A_MALLOC
fPrelude_IO_putStrLn(gc_t gc,arena_t arena,wptr_t v270666271)
{
        sptr_t v16;
        sptr_t v270666451 = demote(v270666271);
        v16 = v270666451;
        fJhc_Monad_72__go__4:;
        {   wptr_t v100046 = eval(gc,arena,v16);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100046) {
                SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v18;
                sptr_t v205;
                /* ("CJhc.Prim.Prim.:" ni18 ni205) */
                v18 = ((struct sCJhc_Prim_Prim_$x3a*)v100046)->a1;
                v205 = ((struct sCJhc_Prim_Prim_$x3a*)v100046)->a2;
                {   uint32_t v44725398;
                    gc_frame0(gc,1,v205);
                    wptr_t v100048 = eval(gc,arena,v18);
                    v44725398 = ((uint32_t)RAW_GET_UF(v100048));
                    uint32_t v57502540 = v44725398;
                    (void)jhc_utf8_putchar((int)v57502540);
                    v16 = v205;
                    goto fJhc_Monad_72__go__4;
                }
            }
        }
        (void)jhc_utf8_putchar((int)10);
        return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}

static wptr_t A_STD A_MALLOC
fPrelude_Text_30__showl(gc_t gc,arena_t arena,sptr_t v282,wptr_t v113231878)
{
        sptr_t v113231907 = demote(v113231878);
        {   gc_frame0(gc,2,v113231878,v113231907);
            wptr_t v100002 = eval(gc,arena,v282);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100002) {
                wptr_t x25 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x25)->a1 = ((sptr_t)RAW_SET_UF('"'));
                ((struct sCJhc_Prim_Prim_$x3a*)x25)->a2 = v113231907;
                return x25;
            } else {
                sptr_t v286;
                sptr_t v420;
                /* ("CJhc.Prim.Prim.:" ni420 ni286) */
                v420 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a1;
                v286 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a2;
                {   uint32_t v290;
                    gc_frame0(gc,1,v286);
                    wptr_t v100004 = eval(gc,arena,v420);
                    v290 = ((uint32_t)RAW_GET_UF(v100004));
                    if (34 == v290) {
                        sptr_t x26 = s_alloc(gc,arena,public_caches(arena)->cFPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x26)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x26)->a1 = v286;
                        ((struct sFPrelude_Text_30__showl*)x26)->a2 = v113231878;
                        sptr_t v147040062 = MKLAZY(x26);
                        return fJhc_Basics_$pp(gc,arena,PROMOTE(c140),v147040062);
                    } else {
                        sptr_t x27 = s_alloc(gc,arena,public_caches(arena)->cFPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x27)->head = TO_FPTR(&E__fPrelude_Text_30__showl);
                        ((struct sFPrelude_Text_30__showl*)x27)->a1 = v286;
                        ((struct sFPrelude_Text_30__showl*)x27)->a2 = v113231878;
                        sptr_t v216797338 = MKLAZY(x27);
                        return fW$__fPrelude_Text_showLitChar(gc,arena,v290,v216797338);
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,arena_t arena,sptr_t v29534742,sptr_t v29534740)
{
        {   gc_frame0(gc,1,v29534740);
            wptr_t v100012 = eval(gc,arena,v29534742);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100012) {
                return eval(gc,arena,v29534740);
            } else {
                sptr_t v106;
                sptr_t v108;
                /* ("CJhc.Prim.Prim.:" ni106 ni108) */
                v106 = ((struct sCJhc_Prim_Prim_$x3a*)v100012)->a1;
                v108 = ((struct sCJhc_Prim_Prim_$x3a*)v100012)->a2;
                {   gc_frame0(gc,2,v106,v108);
                    sptr_t x6 = s_alloc(gc,arena,public_caches(arena)->cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x6)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x6)->a1 = v108;
                    ((struct sFR$__fJhc_Basics_$pp*)x6)->a2 = v29534740;
                    sptr_t v69834446 = MKLAZY(x6);
                    {   gc_frame0(gc,1,v69834446);
                        wptr_t x7 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a1 = v106;
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a2 = v69834446;
                        return x7;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fPrelude_IO_getLine(gc_t gc,arena_t arena)
{
        wptr_t v3;
        uint32_t v205159266;
        v3 = fPrelude_IO_getChar(gc,arena);
        sptr_t v7438922 = demote(v3);
        v205159266 = ((uint32_t)RAW_GET_UF(v3));
        if (10 == v205159266) {
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        } else {
            {   wptr_t v8;
                gc_frame0(gc,1,v7438922);
                v8 = fR$__fPrelude_IO_getLine(gc,arena);
                sptr_t v101613132 = demote(v8);
                {   gc_frame0(gc,1,v101613132);
                    wptr_t x2 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x2)->a1 = v7438922;
                    ((struct sCJhc_Prim_Prim_$x3a*)x2)->a2 = v101613132;
                    return x2;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWord(gc_t gc,arena_t arena,uint32_t v224534579,sptr_t v1364604973)
{
        sptr_t v40405744;
        uint32_t v29534746;
        v29534746 = v224534579;
        v40405744 = v1364604973;
        fW$__fR$__fJhc_Inst_Show_showWord__11:;
        {   uint32_t v40405740 = (v29534746 / 10);
            uint32_t v253468954 = (v29534746 % 10);
            uintmax_t v194635132 = ((uintmax_t)v253468954);
            uint32_t v242159984 = ((uint32_t)v194635132);
            uint32_t v265004796 = (48 + v242159984);
            uint32_t v159938620 = v265004796;
            {   gc_frame0(gc,1,v40405744);
                wptr_t v65 = RAW_SET_UF(v159938620);
                sptr_t v165365804 = demote(v65);
                if (0 == v40405740) {
                    {   gc_frame0(gc,1,v165365804);
                        wptr_t x12 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x12)->a1 = v165365804;
                        ((struct sCJhc_Prim_Prim_$x3a*)x12)->a2 = v40405744;
                        return x12;
                    }
                } else {
                    {   gc_frame0(gc,1,v165365804);
                        wptr_t x13 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x13)->a1 = v165365804;
                        ((struct sCJhc_Prim_Prim_$x3a*)x13)->a2 = v40405744;
                        wptr_t v68 = x13;
                        sptr_t v1367488559 = demote(v68);
                        v29534746 = v40405740;
                        v40405744 = v1367488559;
                        goto fW$__fR$__fJhc_Inst_Show_showWord__11;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar(gc_t gc,arena_t arena,uint32_t v1544160791,sptr_t v209623812)
{
        uint16_t v100006 = (127 < v1544160791);
        if (0 == v100006) {
            switch (v1544160791) {
            case 92:
                {   return fJhc_Basics_$pp(gc,arena,PROMOTE(c121),v209623812);
                }
                break;
            case 127:
                {   return fJhc_Basics_$pp(gc,arena,PROMOTE(c123),v209623812);
                }
                break;
            default:
                {   uint32_t v38138848;
                    v38138848 = v1544160791;
                    uint16_t v100008 = (32 <= v1544160791);
                    if (0 == v100008) {
                        sptr_t v219;
                        sptr_t v94;
                        struct tup1 x17;
                        switch (v38138848) {
                        case 7:
                            {   x17.t0 = c125;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 8:
                            {   x17.t0 = c127;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 9:
                            {   x17.t0 = c129;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 10:
                            {   x17.t0 = c131;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 11:
                            {   x17.t0 = c133;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 12:
                            {   x17.t0 = c135;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 13:
                            {   x17.t0 = c137;
                                x17.t1 = v209623812;
                            }
                            break;
                        case 14:
                            {   {   gc_frame0(gc,1,v209623812);
                                    sptr_t x18 = s_alloc(gc,arena,public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d4);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d4*)x18)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d4);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d4*)x18)->a1 = v209623812;
                                    sptr_t v28527102 = MKLAZY(x18);
                                    x17.t0 = c138;
                                    x17.t1 = v28527102;
                                }
                            }
                            break;
                        default:
                            {   uint32_t v264254028 = v1544160791;
                                {   gc_frame0(gc,1,v209623812);
                                    sptr_t x19 = s_alloc(gc,arena,public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d5);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d5*)x19)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d5);
                                    ((struct sFW$__fPrelude_Text_showLitChar$d5*)x19)->a1 = v264254028;
                                    sptr_t v94093968 = MKLAZY(x19);
                                    {   gc_frame0(gc,1,v94093968);
                                        wptr_t x20 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x20)->a1 = ((sptr_t)RAW_SET_UF('\\'));
                                        ((struct sCJhc_Prim_Prim_$x3a*)x20)->a2 = v94093968;
                                        wptr_t v103 = x20;
                                        sptr_t v64078912 = demote(v103);
                                        x17.t0 = v64078912;
                                        x17.t1 = v209623812;
                                    }
                                }
                            }
                        break;
                        }
                        v219 = x17.t0;
                        v94 = x17.t1;
                        wptr_t v284 = promote(v219);
                        return fJhc_Basics_$pp(gc,arena,v284,v94);
                    } else {
                        /* 1 */
                        assert(1 == v100008);
                        {   gc_frame0(gc,1,v209623812);
                            wptr_t v97 = RAW_SET_UF(v1544160791);
                            sptr_t v17928184 = demote(v97);
                            {   gc_frame0(gc,1,v17928184);
                                wptr_t x21 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x21)->a1 = v17928184;
                                ((struct sCJhc_Prim_Prim_$x3a*)x21)->a2 = v209623812;
                                return x21;
                            }
                        }
                    }
                }
            break;
            }
        } else {
            /* 1 */
            assert(1 == v100006);
            uint32_t v227981058 = v1544160791;
            {   gc_frame0(gc,1,v209623812);
                sptr_t x22 = s_alloc(gc,arena,public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d2);
                ((struct sFW$__fPrelude_Text_showLitChar$d2*)x22)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d2);
                ((struct sFW$__fPrelude_Text_showLitChar$d2*)x22)->a1 = v209623812;
                sptr_t v105553374 = MKLAZY(x22);
                {   gc_frame0(gc,1,v105553374);
                    sptr_t x23 = s_alloc(gc,arena,public_caches(arena)->cFW$__fPrelude_Text_showLitChar$d3);
                    ((struct sFW$__fPrelude_Text_showLitChar$d3*)x23)->head = TO_FPTR(&E__fW$__fPrelude_Text_showLitChar$d3);
                    ((struct sFW$__fPrelude_Text_showLitChar$d3*)x23)->a1 = v105553374;
                    ((struct sFW$__fPrelude_Text_showLitChar$d3*)x23)->a2 = v227981058;
                    sptr_t v157932636 = MKLAZY(x23);
                    {   gc_frame0(gc,1,v157932636);
                        wptr_t x24 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x24)->a1 = ((sptr_t)RAW_SET_UF('\\'));
                        ((struct sCJhc_Prim_Prim_$x3a*)x24)->a2 = v157932636;
                        return x24;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d2(gc_t gc,arena_t arena,sptr_t v239029634)
{
        {   gc_frame0(gc,1,v239029634);
            wptr_t v100018 = eval(gc,arena,v239029634);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100018) {
                return v100018;
            } else {
                sptr_t v5240;
                sptr_t v5242;
                /* ("CJhc.Prim.Prim.:" ni5240 ni5242) */
                v5240 = ((struct sCJhc_Prim_Prim_$x3a*)v100018)->a1;
                v5242 = ((struct sCJhc_Prim_Prim_$x3a*)v100018)->a2;
                {   uint32_t v209508030;
                    gc_frame0(gc,2,v5240,v5242);
                    wptr_t v100020 = eval(gc,arena,v5240);
                    v209508030 = ((uint32_t)RAW_GET_UF(v100020));
                    uint16_t v100022 = (48 <= v209508030);
                    if (0 == v100022) {
                        wptr_t x8 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a1 = v5240;
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a2 = v5242;
                        return x8;
                    } else {
                        /* 1 */
                        assert(1 == v100022);
                        uint16_t v100024 = (57 >= v209508030);
                        if (0 == v100024) {
                            wptr_t x9 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                            ((struct sCJhc_Prim_Prim_$x3a*)x9)->a1 = v5240;
                            ((struct sCJhc_Prim_Prim_$x3a*)x9)->a2 = v5242;
                            return x9;
                        } else {
                            /* 1 */
                            assert(1 == v100024);
                            return fJhc_Basics_$pp(gc,arena,PROMOTE(c14),v239029634);
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d3(gc_t gc,arena_t arena,sptr_t v44211038,uint32_t v206125088)
{
        uint16_t v100026 = (((int32_t)0) > ((int32_t)v206125088));
        if (0 == v100026) {
            uintmax_t v153480248 = ((intmax_t)((int32_t)v206125088));
            uint32_t v120834812 = ((uint32_t)v153480248);
            return fW$__fJhc_Inst_Show_showWord(gc,arena,v120834812,v44211038);
        } else {
            /* 1 */
            assert(1 == v100026);
            uint32_t v228062434 = (-((int32_t)v206125088));
            uintmax_t v196335306 = ((intmax_t)((int32_t)v228062434));
            uint32_t v51274852 = ((uint32_t)v196335306);
            {   gc_frame0(gc,1,v44211038);
                sptr_t x14 = s_alloc(gc,arena,public_caches(arena)->cFW$__fJhc_Inst_Show_showWord);
                ((struct sFW$__fJhc_Inst_Show_showWord*)x14)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWord);
                ((struct sFW$__fJhc_Inst_Show_showWord*)x14)->a1 = v51274852;
                ((struct sFW$__fJhc_Inst_Show_showWord*)x14)->a2 = v44211038;
                sptr_t v172831808 = MKLAZY(x14);
                {   gc_frame0(gc,1,v172831808);
                    wptr_t x15 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x15)->a1 = ((sptr_t)RAW_SET_UF('-'));
                    ((struct sCJhc_Prim_Prim_$x3a*)x15)->a2 = v172831808;
                    return x15;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d4(gc_t gc,arena_t arena,sptr_t v153480246)
{
        {   gc_frame0(gc,1,v153480246);
            wptr_t v100014 = eval(gc,arena,v153480246);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100014) {
                return v100014;
            } else {
                sptr_t v20373958;
                sptr_t v222514442;
                /* ("CJhc.Prim.Prim.:" ni20373958 ni222514442) */
                v20373958 = ((struct sCJhc_Prim_Prim_$x3a*)v100014)->a1;
                v222514442 = ((struct sCJhc_Prim_Prim_$x3a*)v100014)->a2;
                {   uint32_t v186601216;
                    gc_frame0(gc,2,v20373958,v222514442);
                    wptr_t v100016 = eval(gc,arena,v20373958);
                    v186601216 = ((uint32_t)RAW_GET_UF(v100016));
                    if (72 == v186601216) {
                        return fJhc_Basics_$pp(gc,arena,PROMOTE(c14),v153480246);
                    } else {
                        wptr_t x10 = s_alloc(gc,arena,public_caches(arena)->cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a1 = v20373958;
                        ((struct sCJhc_Prim_Prim_$x3a*)x10)->a2 = v222514442;
                        return x10;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fPrelude_Text_showLitChar$d5(gc_t gc,arena_t arena,uint32_t v17791354)
{
        uint32_t v154;
        uint16_t v100010 = (((int32_t)0) > ((int32_t)v17791354));
        if (0 == v100010) {
            v154 = v17791354;
        } else {
            /* 1 */
            assert(1 == v100010);
            jhc_error("Prelude.error: Prelude.(!!): negative index");
        }
        return fW$__fR$__fJhc_List_243__sub(gc,arena,PROMOTE(c119),v154);
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fJhc_List_243__sub(gc_t gc,arena_t arena,wptr_t v115160438,uint32_t v124940224)
{
        sptr_t v115160508;
        uint32_t v124940295;
        sptr_t v115160524 = demote(v115160438);
        v115160508 = v115160524;
        v124940295 = v124940224;
        bRfW$__fR$__fJhc_List_243__sub__16:;
        {   wptr_t v100000 = eval(gc,arena,v115160508);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100000) {
                jhc_error("Prelude.error: Prelude.(!!): index too large");
                return NULL;
            } else {
                sptr_t v132;
                sptr_t v134;
                /* ("CJhc.Prim.Prim.:" ni132 ni134) */
                v132 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a1;
                v134 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a2;
                if (0 == v124940295) {
                    return eval(gc,arena,v132);
                } else {
                    uint32_t v178407644 = (v124940295 - 1);
                    v115160508 = v134;
                    v124940295 = v178407644;
                    goto bRfW$__fR$__fJhc_List_243__sub__16;
                }
            }
        }
}

static void A_STD
ftheMain(gc_t gc,arena_t arena)
{
        wptr_t v331;
        v331 = fR$__fPrelude_IO_getLine(gc,arena);
        sptr_t v68216824 = demote(v331);
        {   gc_frame0(gc,1,v68216824);
            wptr_t x30 = s_alloc(gc,arena,public_caches(arena)->cP1__theMain$d2);
            SET_MEM_TAG((struct sP1__theMain$d2*)x30,P1__theMain$d2);
            ((struct sP1__theMain$d2*)x30)->a1 = v68216824;
            wptr_t v123 = x30;
            wptr_t v132127014 = ((wptr_t)c_newStablePtr((wptr_t)v123));
            (wptr_t)c_derefStablePtr((wptr_t)v132127014);
            return;
        }
}

static sptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc,arena_t arena,sptr_t v73786432)
{
        wptr_t v100038;
        wptr_t v21;
        wptr_t v17 = promote(v73786432);
        v100038 = fInstance$__iJhc_Show_show_default(gc,arena,v17);
        v21 = fPrelude_IO_putStrLn(gc,arena,v100038);
        return demote(v21);
}
