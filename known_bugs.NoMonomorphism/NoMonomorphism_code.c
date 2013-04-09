char jhc_c_compile[] = "gcc rtstdir/rts/profile.c rtstdir/rts/rts_support.c rtstdir/rts/gc_none.c rtstdir/rts/jhc_rts.c rtstdir/lib/lib_cbits.c rtstdir/rts/gc_jgc.c rtstdir/rts/stableptr.c -Irtstdir/cbits -Irtstdir NoMonomorphism_code.c -o NoMonomorphism '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -g -lm '-D_JHC_GC=_JHC_GC_JGC' -lm";
char jhc_command[] = "ajhc --tdir=./rtstdir -fdebug -o NoMonomorphism NoMonomorphism.hs --ignore-cache -dcore -dcore-afterlift -dcore-beforelift -dcore-initial -dcore-mangled -dcore-mini -dcore-pass -dcore-steps -ddatatable -ddatatable-builtin -de-alias -de-info -de-verbose -doptimization-stats -drules -drules-spec -dgrin -dgrin-datalog -dgrin-final -dgrin-graph -dgrin-initial -dgrin-normalized -dgrin-posteval -dgrin-preeval -dsteps -dtags -dc";
char jhc_version[] = "ajhc 0.8.0.5 (210da9343b6b7e38a89eb28f85602471a325647a)";

#include "jhc_rts_header.h"
static struct s_cache *cCJhc_Prim_Prim_$x3a;
static struct s_cache *cCJhc_Type_Word_Int;
static struct s_cache *cCJhc_Type_Basic_Integer;
static struct s_cache *cCJhc_Prim_Prim_$LcccR;
static struct s_cache *cCJhc_Prim_Prim_$LcR;
static struct s_cache *cCJhc_Type_Float_Double;
static struct s_cache *cFW$__fR$__fJhc_List_387__f;
static struct s_cache *cFtheMain$d3;
static struct s_cache *cFtheMain$d7;
static struct s_cache *cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2;
static struct s_cache *cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d3;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d4;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d5;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d6;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d7;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d8;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d9;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d11;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d12;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d13;
static struct s_cache *cFW$__fInstance$__iJhc_Class_Real_divMod_default$d14;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d3;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d2;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d4;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d6;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d7;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d5;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d8;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d9;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d11;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d12;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d13;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d14;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d15;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d16;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d18;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d10;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d19;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d20;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d21;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d22;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d27;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d28;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d29;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d30;
static struct s_cache *cFW$__fW$__fNumeric_floatToDigits$d25;
static struct s_cache *cFtheMain$d2;
static struct s_cache *cFtheMain$d4;
static struct s_cache *cFtheMain$d5;
static struct s_cache *cFtheMain$d6;
static struct s_cache *cFtheMain$d8;
static struct s_cache *cFR$__fJhc_Basics_$pp;
static struct s_cache *cFJhc_Basics_45__go;
static struct s_cache *cFW$__fJhc_Inst_Show_showWord;
static struct s_cache *cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C;
static struct s_cache *cFJhc_Basics_$pp;
#include <math.h>
#include <stdio.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0,
    CJhc_Type_Basic_Integer = 0,
    CJhc_Type_Float_Double = 0,
    CJhc_Type_Word_Int = 0,
    $_hole = 0,
    TJhc_Type_Basic_Integer = 1,
    TJhc_Type_Float_Double = 2,
    TJhc_Type_Word_Int = 3
};
struct sCJhc_Prim_Prim_$LcR A_ALIGNED;
struct sCJhc_Prim_Prim_$LcccR A_ALIGNED;
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sCJhc_Type_Basic_Integer A_ALIGNED;
struct sCJhc_Type_Float_Double A_ALIGNED;
struct sCJhc_Type_Word_Int A_ALIGNED;
struct sFJhc_Basics_$pp A_ALIGNED;
struct sFJhc_Basics_45__go A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8 A_ALIGNED;
struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9 A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWord A_ALIGNED;
struct sFW$__fR$__fJhc_List_387__f A_ALIGNED;
struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C A_ALIGNED;
struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2 A_ALIGNED;
struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d10 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d11 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d12 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d13 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d14 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d15 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d16 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d18 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d19 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d2 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d20 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d21 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d22 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d25 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d27 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d28 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d29 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d3 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d30 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d4 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d5 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d6 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d7 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d8 A_ALIGNED;
struct sFW$__fW$__fNumeric_floatToDigits$d9 A_ALIGNED;
struct sFtheMain$d11 A_ALIGNED;
struct sFtheMain$d12 A_ALIGNED;
struct sFtheMain$d2 A_ALIGNED;
struct sFtheMain$d3 A_ALIGNED;
struct sFtheMain$d4 A_ALIGNED;
struct sFtheMain$d5 A_ALIGNED;
struct sFtheMain$d6 A_ALIGNED;
struct sFtheMain$d7 A_ALIGNED;
struct sFtheMain$d8 A_ALIGNED;
struct sFtheMain$d9 A_ALIGNED;

struct sCJhc_Prim_Prim_$LcR {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Prim_Prim_$LcccR {
    sptr_t a1;
    sptr_t a2;
    sptr_t a3;
    sptr_t a4;
};

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Type_Basic_Integer {
    uintmax_t a1;
};

struct sCJhc_Type_Float_Double {
    double a1;
};

struct sCJhc_Type_Word_Int {
    uint32_t a1;
};

struct sFJhc_Basics_$pp {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
    sptr_t a3;
};

struct sFJhc_Basics_45__go {
    fptr_t head;
    sptr_t a1;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
    sptr_t a3;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
    sptr_t a3;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14 {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6 {
    fptr_t head;
    wptr_t a1;
    wptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7 {
    fptr_t head;
    wptr_t a1;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
};

struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9 {
    fptr_t head;
    wptr_t a1;
};

struct sFW$__fJhc_Inst_Show_showWord {
    fptr_t head;
    wptr_t a2;
    uint32_t a1;
};

struct sFW$__fR$__fJhc_List_387__f {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C {
    fptr_t head;
    wptr_t a1;
    uint32_t a2;
};

struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fW$__fNumeric_floatToDigits$d10 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fW$__fNumeric_floatToDigits$d11 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d12 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d13 {
    fptr_t head;
    sptr_t a2;
    uintmax_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d14 {
    fptr_t head;
    uint32_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d15 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d16 {
    fptr_t head;
    uint32_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d18 {
    fptr_t head;
    uint32_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d19 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d2 {
    fptr_t head;
    double a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d20 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d21 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d22 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
    sptr_t a3;
    sptr_t a4;
    sptr_t a5;
    sptr_t a6;
    sptr_t a7;
};

struct sFW$__fW$__fNumeric_floatToDigits$d25 {
    fptr_t head;
    wptr_t a1;
    sptr_t a2;
    sptr_t a3;
    sptr_t a4;
    sptr_t a5;
    sptr_t a6;
};

struct sFW$__fW$__fNumeric_floatToDigits$d27 {
    fptr_t head;
    wptr_t a1;
    uintmax_t a2;
};

struct sFW$__fW$__fNumeric_floatToDigits$d28 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d29 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d3 {
    fptr_t head;
    double a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d30 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d5 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fW$__fNumeric_floatToDigits$d6 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d7 {
    fptr_t head;
    sptr_t a1;
    sptr_t a2;
};

struct sFW$__fW$__fNumeric_floatToDigits$d8 {
    fptr_t head;
    sptr_t a1;
};

struct sFW$__fW$__fNumeric_floatToDigits$d9 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d11 {
    fptr_t head;
};

struct sFtheMain$d12 {
    fptr_t head;
};

struct sFtheMain$d2 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d3 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d4 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d5 {
    fptr_t head;
    sptr_t a1;
};

struct sFtheMain$d6 {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFtheMain$d7 {
    fptr_t head;
    uint32_t a1;
};

struct sFtheMain$d8 {
    fptr_t head;
    sptr_t a2;
    uint32_t a1;
};

struct sFtheMain$d9 {
    fptr_t head;
};
void jhc_hs_init(void) ;
static wptr_t E__fJhc_Basics_$pp(gc_t gc,struct sFJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fJhc_Basics_45__go(gc_t gc,struct sFJhc_Basics_45__go* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d11(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d12(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d13(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d14(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d8(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d9(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWord(gc_t gc,struct sFW$__fJhc_Inst_Show_showWord* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fR$__fJhc_List_387__f(gc_t gc,struct sFW$__fR$__fJhc_List_387__f* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d10(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d10* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d11(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d11* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d12(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d12* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d13(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d13* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d14(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d14* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d15(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d15* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d16(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d16* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d18(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d18* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d19(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d19* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d2(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d2* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d20(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d20* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d21(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d21* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d22(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d22* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d25(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d25* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d27(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d27* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d28(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d28* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d29(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d29* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d3(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d3* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d30(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d30* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d4(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d4* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d5(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d5* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d6(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d6* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d7(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d7* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d8(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d8* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fW$__fNumeric_floatToDigits$d9(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d9* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d11(gc_t gc,struct sFtheMain$d11* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d12(gc_t gc,struct sFtheMain$d12* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d2(gc_t gc,struct sFtheMain$d2* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d3(gc_t gc,struct sFtheMain$d3* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d4(gc_t gc,struct sFtheMain$d4* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d5(gc_t gc,struct sFtheMain$d5* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d6(gc_t gc,struct sFtheMain$d6* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d7(gc_t gc,struct sFtheMain$d7* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d8(gc_t gc,struct sFtheMain$d8* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d9(gc_t gc,struct sFtheMain$d9* arg) A_STD A_FALIGNED;
void _amain(void) ;
static void b__main(gc_t gc) A_STD;
static wptr_t fJhc_Basics_$pp(gc_t gc,wptr_t u1,sptr_t v102,sptr_t v104) A_STD A_MALLOC;
static wptr_t fJhc_Basics_45__go(gc_t gc,sptr_t v1058) A_STD A_MALLOC;
static wptr_t fJhc_Basics_reverse(gc_t gc,wptr_t v1688746017) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v29534742,sptr_t v29534740) A_STD A_MALLOC;
static struct tup1 fW$__fInstance$__iJhc_Class_Real_divMod_default(gc_t gc,wptr_t v110207574,sptr_t v654182441,sptr_t v648939561) A_STD;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d10(gc_t gc,wptr_t v1674606) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d11(gc_t gc,wptr_t v209206800,wptr_t v99988804,sptr_t v1581791273) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d12(gc_t gc,wptr_t v75583672,wptr_t v103925132,sptr_t v181754692) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d13(gc_t gc,wptr_t v90861650,wptr_t v201839440) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d14(gc_t gc,sptr_t v79964294,wptr_t v163734714) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,wptr_t v132679388,wptr_t v242159978,wptr_t v646580261) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,wptr_t v186210172,wptr_t v216807138) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,wptr_t v154420598,wptr_t v256943494) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,wptr_t v260952208,wptr_t v73786432) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,wptr_t v23565122,wptr_t v132127014) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,wptr_t v643041335) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d8(gc_t gc,wptr_t v217301932,sptr_t v651561001) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Class_Real_divMod_default$d9(gc_t gc,wptr_t v119514824) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int(gc_t gc,uint32_t v1027212851,uint32_t v115160438,wptr_t v85122216) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int$d2(gc_t gc,uint32_t v1023936051,wptr_t v127502482) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Basics_drop(gc_t gc,uint32_t v1670789167,sptr_t v1673803813) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Show_showWord(gc_t gc,uint32_t v144711731,wptr_t v1692809261) A_STD A_MALLOC;
static wptr_t fW$__fNumeric_67__doFmt(gc_t gc,uint16_t v225564906,sptr_t v71383250,sptr_t v56741148) A_STD A_MALLOC;
static uint32_t fW$__fPrelude_CType_intToDigit(gc_t gc,uint32_t v1444941875) A_STD;
static wptr_t fW$__fR$__fJhc_List_387__f(gc_t gc,uint32_t v216085092,sptr_t v110947990) A_STD A_MALLOC;
static wptr_t fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc_t gc,wptr_t v55748264,uint32_t v595462177) A_STD A_MALLOC;
static wptr_t fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2(gc_t gc,sptr_t v119285244) A_STD A_MALLOC;
static wptr_t fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3(gc_t gc,sptr_t v115766306,sptr_t v40405742) A_STD A_MALLOC;
static struct tup1 fW$__fW$__fNumeric_floatToDigits(gc_t gc,wptr_t v95073924,double v15818818) A_STD;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d10(gc_t gc,sptr_t v137486610,sptr_t v86428118) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d11(gc_t gc,uintmax_t v154397124,sptr_t v1704986143) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d12(gc_t gc,sptr_t v209100920) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d13(gc_t gc,uintmax_t v201297312,sptr_t v178901588) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d14(gc_t gc,uint32_t v19530610) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d15(gc_t gc,sptr_t v36059414) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d16(gc_t gc,uint32_t v128611262) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d17(gc_t gc,uintmax_t v132029984) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d18(gc_t gc,uint32_t v22697324) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d19(gc_t gc,sptr_t v1710622253) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d2(gc_t gc,double v1150171673) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d20(gc_t gc,sptr_t v69432560) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d21(gc_t gc,sptr_t v113838344) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d22(gc_t gc,wptr_t v253791876,sptr_t v1697646111,sptr_t v1706952221,sptr_t v1708787229,sptr_t v237992580,sptr_t v172090968,sptr_t v111142934) A_STD A_MALLOC;
static uint32_t fW$__fW$__fNumeric_floatToDigits$d23(gc_t gc,wptr_t v3148,sptr_t v1713505821,sptr_t v1715340833,sptr_t v1717437981,uint32_t v101519594) A_STD;
static uint32_t fW$__fW$__fNumeric_floatToDigits$d24(gc_t gc,wptr_t v61835122,sptr_t v264254028,sptr_t v44725398,sptr_t v182639120,uint32_t v194635134) A_STD;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d25(gc_t gc,wptr_t v211219932,sptr_t v134427062,sptr_t v202526176,sptr_t v268164216,sptr_t v53399310,sptr_t v1728710173) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d26(gc_t gc,wptr_t v67338508,wptr_t v117740416,uintmax_t v232701278,uintmax_t v256943490,uintmax_t v62470118,uintmax_t v260457472) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d27(gc_t gc,wptr_t v51476038,uintmax_t v154420602) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d28(gc_t gc,sptr_t v264446462) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d29(gc_t gc,sptr_t v250404512) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d3(gc_t gc,double v4342) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d30(gc_t gc,sptr_t v1066) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d31(gc_t gc,wptr_t v2976460) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d4(gc_t gc,sptr_t v1679951403) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d5(gc_t gc,sptr_t v208364912,sptr_t v28059878) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d6(gc_t gc,sptr_t v174020696) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d7(gc_t gc,sptr_t v240844478,sptr_t v1688602143) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d8(gc_t gc,sptr_t v1702102573) A_STD A_MALLOC;
static wptr_t fW$__fW$__fNumeric_floatToDigits$d9(gc_t gc,sptr_t v207549704) A_STD A_MALLOC;
static void ftheMain(gc_t gc) A_STD;
static wptr_t ftheMain$d10(gc_t gc,sptr_t v215350918) A_STD A_MALLOC;
static wptr_t ftheMain$d11(gc_t gc) A_STD A_MALLOC;
static wptr_t ftheMain$d12(gc_t gc) A_STD A_MALLOC;
static wptr_t ftheMain$d2(gc_t gc,sptr_t v59150088) A_STD A_MALLOC;
static wptr_t ftheMain$d3(gc_t gc,sptr_t v235511026) A_STD A_MALLOC;
static wptr_t ftheMain$d4(gc_t gc,sptr_t v122527200) A_STD A_MALLOC;
static wptr_t ftheMain$d5(gc_t gc,sptr_t v216085088) A_STD A_MALLOC;
static wptr_t ftheMain$d6(gc_t gc,uint32_t v157166250,sptr_t v1629750813) A_STD A_MALLOC;
static wptr_t ftheMain$d7(gc_t gc,uint32_t v108955764) A_STD A_MALLOC;
static wptr_t ftheMain$d8(gc_t gc,uint32_t v114991274,sptr_t v167886982) A_STD A_MALLOC;
static wptr_t ftheMain$d9(gc_t gc) A_STD A_MALLOC;
struct tup10 {
    double t0;
    uint32_t t1;
};

struct tup1 {
    sptr_t t0;
    sptr_t t1;
};

struct tup7 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t2;
};

struct tup8 {
    sptr_t t0;
    sptr_t t1;
    sptr_t t2;
    sptr_t t3;
};

struct tup11 {
    sptr_t t0;
    uintmax_t t1;
    uintmax_t t2;
    uintmax_t t3;
    uintmax_t t4;
};

struct tup4 {
    sptr_t t1;
    sptr_t t2;
    uint16_t t0;
};
/* CAFS */
/* v-844905495 = (FtheMain$12)*/
static node_t _g844905495 = { .head = TO_FPTR(&E__ftheMain$d12) };
#define g844905495 (MKLAZY_C(&_g844905495))

/* v-842021911 = (FtheMain$11)*/
static node_t _g842021911 = { .head = TO_FPTR(&E__ftheMain$d11) };
#define g842021911 (MKLAZY_C(&_g842021911))

/* v-834681877 = (FtheMain$9)*/
static node_t _g834681877 = { .head = TO_FPTR(&E__ftheMain$d9) };
#define g834681877 (MKLAZY_C(&_g834681877))

/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 45),Left ni-834681877],22) */
static const struct sCJhc_Prim_Prim_$x3a _c22 = {.a1 = (sptr_t)RAW_SET_UF('-'), .a2 = g834681877};
#define c22 (TO_SPTR_C(P_WHNF, (sptr_t)&_c22))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Left &("CJhc.Prim.Prim.[]")],19) */
static const struct sCJhc_Prim_Prim_$x3a _c19 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c19 (TO_SPTR_C(P_WHNF, (sptr_t)&_c19))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 48),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF('0'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 1],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c1};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 48),Right 12],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF('0'), .a2 = c12};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Right 13],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = c13};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Left &("CJhc.Prim.Prim.[]")],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 48),Right 16],17) */
static const struct sCJhc_Prim_Prim_$x3a _c17 = {.a1 = (sptr_t)RAW_SET_UF('0'), .a2 = c16};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 46),Right 17],18) */
static const struct sCJhc_Prim_Prim_$x3a _c18 = {.a1 = (sptr_t)RAW_SET_UF('.'), .a2 = c17};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 48),Right 14],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('0'), .a2 = c14};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 48),Right 19],20) */
static const struct sCJhc_Prim_Prim_$x3a _c20 = {.a1 = (sptr_t)RAW_SET_UF('0'), .a2 = c19};
#define c20 (TO_SPTR_C(P_WHNF, (sptr_t)&_c20))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 121),Left &("CJhc.Prim.Prim.[]")],23) */
static const struct sCJhc_Prim_Prim_$x3a _c23 = {.a1 = (sptr_t)RAW_SET_UF('y'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c23 (TO_SPTR_C(P_WHNF, (sptr_t)&_c23))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 23],24) */
static const struct sCJhc_Prim_Prim_$x3a _c24 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c23};
#define c24 (TO_SPTR_C(P_WHNF, (sptr_t)&_c24))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 24],25) */
static const struct sCJhc_Prim_Prim_$x3a _c25 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c24};
#define c25 (TO_SPTR_C(P_WHNF, (sptr_t)&_c25))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 25],26) */
static const struct sCJhc_Prim_Prim_$x3a _c26 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c25};
#define c26 (TO_SPTR_C(P_WHNF, (sptr_t)&_c26))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 26],27) */
static const struct sCJhc_Prim_Prim_$x3a _c27 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c26};
#define c27 (TO_SPTR_C(P_WHNF, (sptr_t)&_c27))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 102),Right 27],28) */
static const struct sCJhc_Prim_Prim_$x3a _c28 = {.a1 = (sptr_t)RAW_SET_UF('f'), .a2 = c27};
#define c28 (TO_SPTR_C(P_WHNF, (sptr_t)&_c28))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 28],29) */
static const struct sCJhc_Prim_Prim_$x3a _c29 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c28};
#define c29 (TO_SPTR_C(P_WHNF, (sptr_t)&_c29))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 73),Right 29],30) */
static const struct sCJhc_Prim_Prim_$x3a _c30 = {.a1 = (sptr_t)RAW_SET_UF('I'), .a2 = c29};
#define c30 (TO_SPTR_C(P_WHNF, (sptr_t)&_c30))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Left &("CJhc.Prim.Prim.[]")],31) */
static const struct sCJhc_Prim_Prim_$x3a _c31 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c31 (TO_SPTR_C(P_WHNF, (sptr_t)&_c31))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 31],32) */
static const struct sCJhc_Prim_Prim_$x3a _c32 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c31};
#define c32 (TO_SPTR_C(P_WHNF, (sptr_t)&_c32))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 78),Right 32],33) */
static const struct sCJhc_Prim_Prim_$x3a _c33 = {.a1 = (sptr_t)RAW_SET_UF('N'), .a2 = c32};
#define c33 (TO_SPTR_C(P_WHNF, (sptr_t)&_c33))
/* (HcNode CJhc.Type.Word.Int [Left -1],3) */
static const struct sCJhc_Type_Word_Int _c3 = {.a1 = -1};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Type.Word.Int [Left 0],2) */
static const struct sCJhc_Type_Word_Int _c2 = {.a1 = 0};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Type.Word.Int [Left 1],4) */
static const struct sCJhc_Type_Word_Int _c4 = {.a1 = 1};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Type.Word.Int [Left 10],11) */
static const struct sCJhc_Type_Word_Int _c11 = {.a1 = 10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Type.Basic.Integer [Left -1],6) */
static const struct sCJhc_Type_Basic_Integer _c6 = {.a1 = -1};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Type.Basic.Integer [Left 0],5) */
static const struct sCJhc_Type_Basic_Integer _c5 = {.a1 = 0};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Type.Basic.Integer [Left 1],7) */
static const struct sCJhc_Type_Basic_Integer _c7 = {.a1 = 1};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Type.Basic.Integer [Left 2],9) */
static const struct sCJhc_Type_Basic_Integer _c9 = {.a1 = 2};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Type.Basic.Integer [Left 4],10) */
static const struct sCJhc_Type_Basic_Integer _c10 = {.a1 = 4};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Type.Basic.Integer [Left 10],21) */
static const struct sCJhc_Type_Basic_Integer _c21 = {.a1 = 10};
#define c21 (TO_SPTR_C(P_WHNF, (sptr_t)&_c21))
/* (HcNode CJhc.Type.Float.Double [Left 1],8) */
static const struct sCJhc_Type_Float_Double _c8 = {.a1 = 1.0};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))

const void * const nh_stuff[] = {
&_g844905495, &_g842021911, &_g834681877, &_c1, &_c2, &_c3, &_c4,
&_c5, &_c6, &_c7, &_c8, &_c9, &_c10, &_c11, &_c12, &_c13, &_c14,
&_c15, &_c16, &_c17, &_c18, &_c19, &_c20, &_c21, &_c22, &_c23,
&_c24, &_c25, &_c26, &_c27, &_c28, &_c29, &_c30, &_c31, &_c32,
&_c33, NULL
};


void 
jhc_hs_init(void)
{
        find_cache(&cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&cCJhc_Type_Word_Int,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Word_Int)),0);
        find_cache(&cCJhc_Type_Basic_Integer,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Basic_Integer)),0);
        find_cache(&cCJhc_Prim_Prim_$LcccR,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$LcccR)),4);
        find_cache(&cCJhc_Prim_Prim_$LcR,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$LcR)),2);
        find_cache(&cCJhc_Type_Float_Double,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Float_Double)),0);
        find_cache(&cFW$__fR$__fJhc_List_387__f,arena,TO_BLOCKS(sizeof(struct sFW$__fR$__fJhc_List_387__f)),2);
        find_cache(&cFtheMain$d3,arena,TO_BLOCKS(sizeof(struct sFtheMain$d3)),2);
        find_cache(&cFtheMain$d7,arena,TO_BLOCKS(sizeof(struct sFtheMain$d7)),1);
        find_cache(&cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2,arena,TO_BLOCKS(sizeof(struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2)),2);
        find_cache(&cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3,arena,TO_BLOCKS(sizeof(struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d5,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d6,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d7,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7)),2);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d8,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d9,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9)),2);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d11,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11)),4);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d12,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12)),4);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d13,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13)),3);
        find_cache(&cFW$__fInstance$__iJhc_Class_Real_divMod_default$d14,arena,TO_BLOCKS(sizeof(struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14)),3);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d3,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d3)),1);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d2,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d2)),1);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d4,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d4)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d6,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d6)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d7,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d7)),3);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d5,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d5)),3);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d8,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d8)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d9,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d9)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d11,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d11)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d12,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d12)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d13,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d13)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d14,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d14)),1);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d15,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d15)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d16,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d16)),1);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d18,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d18)),1);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d10,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d10)),3);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d19,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d19)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d20,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d20)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d21,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d21)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d22,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d22)),8);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d27,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d27)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d28,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d28)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d29,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d29)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d30,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d30)),2);
        find_cache(&cFW$__fW$__fNumeric_floatToDigits$d25,arena,TO_BLOCKS(sizeof(struct sFW$__fW$__fNumeric_floatToDigits$d25)),7);
        find_cache(&cFtheMain$d2,arena,TO_BLOCKS(sizeof(struct sFtheMain$d2)),2);
        find_cache(&cFtheMain$d4,arena,TO_BLOCKS(sizeof(struct sFtheMain$d4)),2);
        find_cache(&cFtheMain$d5,arena,TO_BLOCKS(sizeof(struct sFtheMain$d5)),2);
        find_cache(&cFtheMain$d6,arena,TO_BLOCKS(sizeof(struct sFtheMain$d6)),2);
        find_cache(&cFtheMain$d8,arena,TO_BLOCKS(sizeof(struct sFtheMain$d8)),2);
        find_cache(&cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&cFJhc_Basics_45__go,arena,TO_BLOCKS(sizeof(struct sFJhc_Basics_45__go)),2);
        find_cache(&cFW$__fJhc_Inst_Show_showWord,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWord)),2);
        find_cache(&cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C,arena,TO_BLOCKS(sizeof(struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C)),2);
        find_cache(&cFJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFJhc_Basics_$pp)),4);
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Basics_$pp(gc_t gc,struct sFJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Basics_$pp(gc,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fJhc_Basics_45__go(gc_t gc,struct sFJhc_Basics_45__go* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fJhc_Basics_45__go(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Basics_$pp(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d11(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d11(gc,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d12(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d12(gc,arg->a1,arg->a2,arg->a3);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d13(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d13(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d14(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d14(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d8(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d8(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d9(gc_t gc,struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fInstance$__iJhc_Class_Real_divMod_default$d9(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Show_showWord(gc_t gc,struct sFW$__fJhc_Inst_Show_showWord* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWord(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fR$__fJhc_List_387__f(gc_t gc,struct sFW$__fR$__fJhc_List_387__f* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fR$__fJhc_List_387__f(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3(gc_t gc,struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d10(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d10* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d10(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d11(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d11* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d11(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d12(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d12* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d12(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d13(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d13* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d13(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d14(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d14* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d14(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d15(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d15* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d15(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d16(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d16* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d16(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d18(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d18* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d18(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d19(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d19* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d19(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d2(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d2(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d20(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d20* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d20(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d21(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d21* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d21(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d22(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d22* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d22(gc,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6,arg->a7);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d25(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d25* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d25(gc,arg->a1,arg->a2,arg->a3,arg->a4,arg->a5,arg->a6);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d27(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d27* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d27(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d28(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d28* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d28(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d29(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d29* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d29(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d3(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d3(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d30(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d30* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d30(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d4(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d4(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d5(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d5(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d6(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d6(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d7(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d7(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d8(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d8* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d8(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fW$__fNumeric_floatToDigits$d9(gc_t gc,struct sFW$__fW$__fNumeric_floatToDigits$d9* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fW$__fNumeric_floatToDigits$d9(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d11(gc_t gc,struct sFtheMain$d11* arg)
{
        wptr_t r;
        r = ftheMain$d11(gc);
        update(arg,r);
        gc_add_root(gc,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d12(gc_t gc,struct sFtheMain$d12* arg)
{
        wptr_t r;
        r = ftheMain$d12(gc);
        update(arg,r);
        gc_add_root(gc,(sptr_t)r);
        return r;
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d2(gc_t gc,struct sFtheMain$d2* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d2(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d3(gc_t gc,struct sFtheMain$d3* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d3(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d4(gc_t gc,struct sFtheMain$d4* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d4(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d5(gc_t gc,struct sFtheMain$d5* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d5(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d6(gc_t gc,struct sFtheMain$d6* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d6(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d7(gc_t gc,struct sFtheMain$d7* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d7(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d8(gc_t gc,struct sFtheMain$d8* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = ftheMain$d8(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__ftheMain$d9(gc_t gc,struct sFtheMain$d9* arg)
{
        wptr_t r;
        r = ftheMain$d9(gc);
        update(arg,r);
        gc_add_root(gc,(sptr_t)r);
        return r;
}

void 
_amain(void)
{
        return (void)b__main(saved_gc);
}

static void A_STD
b__main(gc_t gc)
{
        return ftheMain(gc);
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_$pp(gc_t gc,wptr_t u1,sptr_t v102,sptr_t v104)
{
        return fR$__fJhc_Basics_$pp(gc,v102,v104);
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_45__go(gc_t gc,sptr_t v1058)
{
        wptr_t v100022 = eval(gc,v1058);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100022) {
            return v100022;
        } else {
            sptr_t v1065;
            sptr_t v146793348;
            /* ("CJhc.Prim.Prim.:" ni146793348 ni1065) */
            v146793348 = ((struct sCJhc_Prim_Prim_$x3a*)v100022)->a1;
            v1065 = ((struct sCJhc_Prim_Prim_$x3a*)v100022)->a2;
            {   gc_frame0(gc,2,v1065,v146793348);
                sptr_t x13 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d30);
                ((struct sFW$__fW$__fNumeric_floatToDigits$d30*)x13)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d30);
                ((struct sFW$__fW$__fNumeric_floatToDigits$d30*)x13)->a1 = v146793348;
                sptr_t v61074636 = MKLAZY(x13);
                {   gc_frame0(gc,1,v61074636);
                    sptr_t x14 = s_alloc(gc,cFJhc_Basics_45__go);
                    ((struct sFJhc_Basics_45__go*)x14)->head = TO_FPTR(&E__fJhc_Basics_45__go);
                    ((struct sFJhc_Basics_45__go*)x14)->a1 = v1065;
                    sptr_t v187711388 = MKLAZY(x14);
                    {   gc_frame0(gc,1,v187711388);
                        wptr_t x15 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x15)->a1 = v61074636;
                        ((struct sCJhc_Prim_Prim_$x3a*)x15)->a2 = v187711388;
                        return x15;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fJhc_Basics_reverse(gc_t gc,wptr_t v1688746017)
{
        wptr_t v117740408;
        sptr_t v242479192;
        sptr_t v1688747032 = demote(v1688746017);
        v242479192 = v1688747032;
        v117740408 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        fR$__fJhc_Basics_81__rev__2:;
        {   sptr_t v117741429 = demote(v117740408);
            {   gc_frame0(gc,2,v117740408,v117741429);
                wptr_t v100154 = eval(gc,v242479192);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100154) {
                    return v117740408;
                } else {
                    sptr_t v1035;
                    sptr_t v14;
                    /* ("CJhc.Prim.Prim.:" ni1035 ni14) */
                    v1035 = ((struct sCJhc_Prim_Prim_$x3a*)v100154)->a1;
                    v14 = ((struct sCJhc_Prim_Prim_$x3a*)v100154)->a2;
                    {   gc_frame0(gc,2,v14,v1035);
                        wptr_t x3 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x3)->a1 = v1035;
                        ((struct sCJhc_Prim_Prim_$x3a*)x3)->a2 = v117741429;
                        wptr_t v1731 = x3;
                        v242479192 = v14;
                        v117740408 = v1731;
                        goto fR$__fJhc_Basics_81__rev__2;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v29534742,sptr_t v29534740)
{
        {   gc_frame0(gc,1,v29534740);
            wptr_t v100810 = eval(gc,v29534742);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100810) {
                return eval(gc,v29534740);
            } else {
                sptr_t v106;
                sptr_t v108;
                /* ("CJhc.Prim.Prim.:" ni106 ni108) */
                v106 = ((struct sCJhc_Prim_Prim_$x3a*)v100810)->a1;
                v108 = ((struct sCJhc_Prim_Prim_$x3a*)v100810)->a2;
                {   gc_frame0(gc,2,v106,v108);
                    sptr_t x8 = s_alloc(gc,cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x8)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x8)->a1 = v108;
                    ((struct sFR$__fJhc_Basics_$pp*)x8)->a2 = v29534740;
                    sptr_t v69834446 = MKLAZY(x8);
                    {   gc_frame0(gc,1,v69834446);
                        wptr_t x9 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x9)->a1 = v106;
                        ((struct sCJhc_Prim_Prim_$x3a*)x9)->a2 = v69834446;
                        return x9;
                    }
                }
            }
        }
}

static struct tup1 A_STD
fW$__fInstance$__iJhc_Class_Real_divMod_default(gc_t gc,wptr_t v110207574,sptr_t v654182441,sptr_t v648939561)
{
        {   gc_frame0(gc,2,v110207574,v648939561);
            wptr_t v100180 = eval(gc,v654182441);
            {   gc_frame0(gc,1,v100180);
                wptr_t v100184 = eval(gc,v648939561);
                {   wptr_t v422;
                    gc_frame0(gc,1,v100184);
                    v422 = fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc,v100184,v100180,v110207574);
                    {   gc_frame0(gc,1,v422);
                        sptr_t x48 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d13);
                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13*)x48)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d13);
                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13*)x48)->a1 = v100184;
                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d13*)x48)->a2 = v110207574;
                        sptr_t v1780406 = MKLAZY(x48);
                        {   gc_frame0(gc,1,v1780406);
                            sptr_t x49 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d14);
                            ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14*)x49)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d14);
                            ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14*)x49)->a1 = v1780406;
                            ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d14*)x49)->a2 = v110207574;
                            sptr_t v176830360 = MKLAZY(x49);
                            {   gc_frame0(gc,1,v176830360);
                                sptr_t x50 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d7);
                                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7*)x50)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d7);
                                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d7*)x50)->a1 = v422;
                                sptr_t v238502450 = MKLAZY(x50);
                                {   uint16_t v278;
                                    gc_frame0(gc,1,v238502450);
                                    sptr_t x51 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d8);
                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8*)x51)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d8);
                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8*)x51)->a1 = v110207574;
                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d8*)x51)->a2 = v238502450;
                                    sptr_t v201070560 = MKLAZY(x51);
                                    switch (FETCH_TAG(v110207574)) {
                                    case TJhc_Type_Word_Int:
                                        {   uint32_t v216085090;
                                            uint32_t v29534746;
                                            wptr_t v100190 = eval(gc,v201070560);
                                            v216085090 = ((struct sCJhc_Type_Word_Int*)v100190)->a1;
                                            wptr_t v100192 = eval(gc,v176830360);
                                            v29534746 = ((struct sCJhc_Type_Word_Int*)v100192)->a1;
                                            v278 = (v216085090 == v29534746);
                                        }
                                        break;
                                    case TJhc_Type_Basic_Integer:
                                        {   uintmax_t v194635138;
                                            uintmax_t v40405748;
                                            wptr_t v100194 = eval(gc,v201070560);
                                            v40405748 = ((struct sCJhc_Type_Basic_Integer*)v100194)->a1;
                                            wptr_t v100196 = eval(gc,v176830360);
                                            v194635138 = ((struct sCJhc_Type_Basic_Integer*)v100196)->a1;
                                            v278 = (v40405748 == v194635138);
                                        }
                                        break;
                                    case TJhc_Type_Float_Double:
                                        {   double v137248442;
                                            double v153480246;
                                            wptr_t v100198 = eval(gc,v201070560);
                                            v153480246 = ((struct sCJhc_Type_Float_Double*)v100198)->a1;
                                            wptr_t v100200 = eval(gc,v176830360);
                                            v137248442 = ((struct sCJhc_Type_Float_Double*)v100200)->a1;
                                            v278 = (v153480246 == v137248442);
                                        }
                                        break;
                                    default: jhc_case_fell_off(__LINE__);
                                    }
                                    if (0 == v278) {
                                        sptr_t v934;
                                        sptr_t v936;
                                        struct tup1 _t2;
                                        v934 = ((struct sCJhc_Prim_Prim_$LcR*)v422)->a1;
                                        v936 = ((struct sCJhc_Prim_Prim_$LcR*)v422)->a2;
                                        return (_t2.t0 = v934,_t2.t1 = v936,_t2);
                                    } else {
                                        /* 1 */
                                        assert(1 == v278);
                                        sptr_t x52 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d12);
                                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12*)x52)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d12);
                                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12*)x52)->a1 = v100184;
                                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12*)x52)->a2 = v110207574;
                                        ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d12*)x52)->a3 = v238502450;
                                        sptr_t v195071286 = MKLAZY(x52);
                                        {   wptr_t v442;
                                            gc_frame0(gc,1,v195071286);
                                            v442 = fW$__fInstance$__iJhc_Class_Real_divMod_default$d10(gc,v110207574);
                                            {   gc_frame0(gc,1,v442);
                                                sptr_t x53 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d9);
                                                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9*)x53)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d9);
                                                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d9*)x53)->a1 = v422;
                                                sptr_t v130564414 = MKLAZY(x53);
                                                {   struct tup1 _t3;
                                                    gc_frame0(gc,1,v130564414);
                                                    sptr_t x54 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d11);
                                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11*)x54)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d11);
                                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11*)x54)->a1 = v442;
                                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11*)x54)->a2 = v110207574;
                                                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d11*)x54)->a3 = v130564414;
                                                    sptr_t v195071284 = MKLAZY(x54);
                                                    return (_t3.t0 = v195071284,_t3.t1 = v195071286,_t3);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d10(gc_t gc,wptr_t v1674606)
{
        switch (FETCH_TAG(v1674606)) {
        case TJhc_Type_Float_Double:
            {   return PROMOTE(c8);
            }
            break;
        case TJhc_Type_Word_Int:
            {   return PROMOTE(c4);
            }
            break;
        case TJhc_Type_Basic_Integer:
            {   return PROMOTE(c7);
            }
            break;
        default: jhc_case_fell_off(__LINE__);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d11(gc_t gc,wptr_t v209206800,wptr_t v99988804,sptr_t v1581791273)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v99988804) {
            {   uint32_t v1674610;
                uint32_t v99988808;
                gc_frame0(gc,1,v209206800);
                wptr_t v100234 = eval(gc,v1581791273);
                v1674610 = ((struct sCJhc_Type_Word_Int*)v100234)->a1;
                v99988808 = ((struct sCJhc_Type_Word_Int*)v209206800)->a1;
                uint32_t v251973246 = (v1674610 - v99988808);
                wptr_t x36 = s_alloc(gc,cCJhc_Type_Word_Int);
                ((struct sCJhc_Type_Word_Int*)x36)->a1 = v251973246;
                return x36;
            }
        } else {
            /* ("TJhc.Type.Basic.Integer") */
            {   uintmax_t v80256464;
                uintmax_t v808;
                gc_frame0(gc,1,v209206800);
                wptr_t v100238 = eval(gc,v1581791273);
                v808 = ((struct sCJhc_Type_Basic_Integer*)v100238)->a1;
                v80256464 = ((struct sCJhc_Type_Basic_Integer*)v209206800)->a1;
                uintmax_t v75583674 = (v808 - v80256464);
                wptr_t x37 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x37)->a1 = v75583674;
                return x37;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d12(gc_t gc,wptr_t v75583672,wptr_t v103925132,sptr_t v181754692)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v103925132) {
            {   uint32_t v181754694;
                uint32_t v194346574;
                gc_frame0(gc,1,v75583672);
                wptr_t v100224 = eval(gc,v181754692);
                v181754694 = ((struct sCJhc_Type_Word_Int*)v100224)->a1;
                v194346574 = ((struct sCJhc_Type_Word_Int*)v75583672)->a1;
                uint32_t v127754102 = (v181754694 + v194346574);
                wptr_t x34 = s_alloc(gc,cCJhc_Type_Word_Int);
                ((struct sCJhc_Type_Word_Int*)x34)->a1 = v127754102;
                return x34;
            }
        } else {
            /* ("TJhc.Type.Basic.Integer") */
            {   uintmax_t v1217246;
                uintmax_t v201839446;
                gc_frame0(gc,1,v75583672);
                wptr_t v100228 = eval(gc,v181754692);
                v1217246 = ((struct sCJhc_Type_Basic_Integer*)v100228)->a1;
                v201839446 = ((struct sCJhc_Type_Basic_Integer*)v75583672)->a1;
                uintmax_t v137643142 = (v1217246 + v201839446);
                wptr_t x35 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x35)->a1 = v137643142;
                return x35;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d13(gc_t gc,wptr_t v90861650,wptr_t v201839440)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v201839440) {
            uint32_t v205779222;
            v205779222 = ((struct sCJhc_Type_Word_Int*)v90861650)->a1;
            if (0 == v205779222) {
                return PROMOTE(c2);
            } else {
                uint16_t v100216 = (((int32_t)0) < ((int32_t)v205779222));
                if (0 == v100216) {
                    return PROMOTE(c3);
                } else {
                    /* 1 */
                    assert(1 == v100216);
                    return PROMOTE(c4);
                }
            }
        } else {
            uintmax_t v163734716;
            /* ("TJhc.Type.Basic.Integer") */
            v163734716 = ((struct sCJhc_Type_Basic_Integer*)v90861650)->a1;
            if (0 == v163734716) {
                return PROMOTE(c5);
            } else {
                uint16_t v100220 = (((intmax_t)0) < ((intmax_t)v163734716));
                if (0 == v100220) {
                    return PROMOTE(c6);
                } else {
                    /* 1 */
                    assert(1 == v100220);
                    return PROMOTE(c7);
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d14(gc_t gc,sptr_t v79964294,wptr_t v163734714)
{
        switch (FETCH_TAG(v163734714)) {
        case TJhc_Type_Float_Double:
            {   double v59642630;
                wptr_t v100206 = eval(gc,v79964294);
                v59642630 = ((struct sCJhc_Type_Float_Double*)v100206)->a1;
                double v217301934 = (-v59642630);
                wptr_t x31 = s_alloc(gc,cCJhc_Type_Float_Double);
                ((struct sCJhc_Type_Float_Double*)x31)->a1 = v217301934;
                return x31;
            }
            break;
        case TJhc_Type_Word_Int:
            {   uint32_t v264446468;
                wptr_t v100208 = eval(gc,v79964294);
                v264446468 = ((struct sCJhc_Type_Word_Int*)v100208)->a1;
                uint32_t v59150090 = (-((int32_t)v264446468));
                wptr_t x32 = s_alloc(gc,cCJhc_Type_Word_Int);
                ((struct sCJhc_Type_Word_Int*)x32)->a1 = v59150090;
                return x32;
            }
            break;
        case TJhc_Type_Basic_Integer:
            {   uintmax_t v52590396;
                wptr_t v100210 = eval(gc,v79964294);
                v52590396 = ((struct sCJhc_Type_Basic_Integer*)v100210)->a1;
                uintmax_t v119514822 = (-((intmax_t)v52590396));
                wptr_t x33 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x33)->a1 = v119514822;
                return x33;
            }
            break;
        default: jhc_case_fell_off(__LINE__);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d2(gc_t gc,wptr_t v132679388,wptr_t v242159978,wptr_t v646580261)
{
        sptr_t v252;
        sptr_t v736;
        struct tup1 x42;
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v646580261) {
            {   gc_frame0(gc,2,v132679388,v242159978);
                sptr_t x43 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d4);
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4*)x43)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d4);
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4*)x43)->a1 = v132679388;
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d4*)x43)->a2 = v242159978;
                sptr_t v80100070 = MKLAZY(x43);
                {   gc_frame0(gc,1,v80100070);
                    sptr_t x44 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d3);
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x44)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d3);
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x44)->a1 = v132679388;
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d3*)x44)->a2 = v242159978;
                    sptr_t v196335304 = MKLAZY(x44);
                    x42.t0 = v80100070;
                    x42.t1 = v196335304;
                }
            }
        } else {
            /* ("TJhc.Type.Basic.Integer") */
            {   gc_frame0(gc,2,v132679388,v242159978);
                sptr_t x45 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d6);
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6*)x45)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d6);
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6*)x45)->a1 = v132679388;
                ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d6*)x45)->a2 = v242159978;
                sptr_t v194635136 = MKLAZY(x45);
                {   gc_frame0(gc,1,v194635136);
                    sptr_t x46 = s_alloc(gc,cFW$__fInstance$__iJhc_Class_Real_divMod_default$d5);
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5*)x46)->head = TO_FPTR(&E__fW$__fInstance$__iJhc_Class_Real_divMod_default$d5);
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5*)x46)->a1 = v132679388;
                    ((struct sFW$__fInstance$__iJhc_Class_Real_divMod_default$d5*)x46)->a2 = v242159978;
                    sptr_t v80100072 = MKLAZY(x46);
                    x42.t0 = v194635136;
                    x42.t1 = v80100072;
                }
            }
        }
        v252 = x42.t0;
        v736 = x42.t1;
        {   gc_frame0(gc,2,v252,v736);
            wptr_t x47 = s_alloc(gc,cCJhc_Prim_Prim_$LcR);
            ((struct sCJhc_Prim_Prim_$LcR*)x47)->a1 = v252;
            ((struct sCJhc_Prim_Prim_$LcR*)x47)->a2 = v736;
            return x47;
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d3(gc_t gc,wptr_t v186210172,wptr_t v216807138)
{
        uint32_t v228308042;
        uint32_t v44725408;
        v44725408 = ((struct sCJhc_Type_Word_Int*)v216807138)->a1;
        v228308042 = ((struct sCJhc_Type_Word_Int*)v186210172)->a1;
        uint32_t v119285248 = (((int32_t)v44725408) % ((int32_t)v228308042));
        wptr_t x41 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x41)->a1 = v119285248;
        return x41;
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d4(gc_t gc,wptr_t v154420598,wptr_t v256943494)
{
        uint32_t v166168410;
        uint32_t v73786440;
        v73786440 = ((struct sCJhc_Type_Word_Int*)v256943494)->a1;
        v166168410 = ((struct sCJhc_Type_Word_Int*)v154420598)->a1;
        uint32_t v23565124 = (((int32_t)v73786440) / ((int32_t)v166168410));
        wptr_t x40 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x40)->a1 = v23565124;
        return x40;
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d5(gc_t gc,wptr_t v260952208,wptr_t v73786432)
{
        uintmax_t v215884496;
        uintmax_t v29375126;
        v29375126 = ((struct sCJhc_Type_Basic_Integer*)v73786432)->a1;
        v215884496 = ((struct sCJhc_Type_Basic_Integer*)v260952208)->a1;
        uintmax_t v242479198 = (((intmax_t)v29375126) % ((intmax_t)v215884496));
        wptr_t x39 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x39)->a1 = v242479198;
        return x39;
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d6(gc_t gc,wptr_t v23565122,wptr_t v132127014)
{
        uintmax_t v118721824;
        uintmax_t v132679390;
        v118721824 = ((struct sCJhc_Type_Basic_Integer*)v132127014)->a1;
        v132679390 = ((struct sCJhc_Type_Basic_Integer*)v23565122)->a1;
        uintmax_t v242159976 = (((intmax_t)v118721824) / ((intmax_t)v132679390));
        wptr_t x38 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x38)->a1 = v242159976;
        return x38;
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d7(gc_t gc,wptr_t v643041335)
{
        sptr_t v928;
        v928 = ((struct sCJhc_Prim_Prim_$LcR*)v643041335)->a2;
        return eval(gc,v928);
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d8(gc_t gc,wptr_t v217301932,sptr_t v651561001)
{
        if (SET_RAW_TAG(TJhc_Type_Word_Int) == v217301932) {
            uint32_t v10527820;
            wptr_t v100248 = eval(gc,v651561001);
            v10527820 = ((struct sCJhc_Type_Word_Int*)v100248)->a1;
            if (0 == v10527820) {
                return PROMOTE(c2);
            } else {
                uint16_t v100250 = (((int32_t)0) < ((int32_t)v10527820));
                if (0 == v100250) {
                    return PROMOTE(c3);
                } else {
                    /* 1 */
                    assert(1 == v100250);
                    return PROMOTE(c4);
                }
            }
        } else {
            uintmax_t v209623820;
            /* ("TJhc.Type.Basic.Integer") */
            wptr_t v100252 = eval(gc,v651561001);
            v209623820 = ((struct sCJhc_Type_Basic_Integer*)v100252)->a1;
            if (0 == v209623820) {
                return PROMOTE(c5);
            } else {
                uint16_t v100254 = (((intmax_t)0) < ((intmax_t)v209623820));
                if (0 == v100254) {
                    return PROMOTE(c6);
                } else {
                    /* 1 */
                    assert(1 == v100254);
                    return PROMOTE(c7);
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Class_Real_divMod_default$d9(gc_t gc,wptr_t v119514824)
{
        sptr_t v930;
        v930 = ((struct sCJhc_Prim_Prim_$LcR*)v119514824)->a1;
        return eval(gc,v930);
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int(gc_t gc,uint32_t v1027212851,uint32_t v115160438,wptr_t v85122216)
{
        sptr_t v85122463 = demote(v85122216);
        uint16_t v100348 = (((int32_t)0) > ((int32_t)v115160438));
        if (0 == v100348) {
            uintmax_t v247340480 = ((intmax_t)((int32_t)v115160438));
            uint32_t v163333522 = ((uint32_t)v247340480);
            return fW$__fJhc_Inst_Show_showWord(gc,v163333522,v85122216);
        } else {
            /* 1 */
            assert(1 == v100348);
            uint16_t v100350 = (((int32_t)6) < ((int32_t)v1027212851));
            if (0 == v100350) {
                return fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int$d2(gc,v115160438,v85122216);
            } else {
                /* 1 */
                assert(1 == v100350);
                {   wptr_t v1865;
                    gc_frame0(gc,1,v85122463);
                    wptr_t x100 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x100)->a1 = ((sptr_t)RAW_SET_UF(')'));
                    ((struct sCJhc_Prim_Prim_$x3a*)x100)->a2 = v85122463;
                    wptr_t v605 = x100;
                    v1865 = fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int$d2(gc,v115160438,v605);
                    sptr_t v164098062 = demote(v1865);
                    {   gc_frame0(gc,1,v164098062);
                        wptr_t x101 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x101)->a1 = ((sptr_t)RAW_SET_UF('('));
                        ((struct sCJhc_Prim_Prim_$x3a*)x101)->a2 = v164098062;
                        return x101;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int$d2(gc_t gc,uint32_t v1023936051,wptr_t v127502482)
{
        uint32_t v179364108 = (-((int32_t)v1023936051));
        uintmax_t v160064800 = ((intmax_t)((int32_t)v179364108));
        uint32_t v196970364 = ((uint32_t)v160064800);
        {   gc_frame0(gc,1,v127502482);
            sptr_t x98 = s_alloc(gc,cFW$__fJhc_Inst_Show_showWord);
            ((struct sFW$__fJhc_Inst_Show_showWord*)x98)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWord);
            ((struct sFW$__fJhc_Inst_Show_showWord*)x98)->a1 = v196970364;
            ((struct sFW$__fJhc_Inst_Show_showWord*)x98)->a2 = v127502482;
            sptr_t v19029132 = MKLAZY(x98);
            {   gc_frame0(gc,1,v19029132);
                wptr_t x99 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x99)->a1 = ((sptr_t)RAW_SET_UF('-'));
                ((struct sCJhc_Prim_Prim_$x3a*)x99)->a2 = v19029132;
                return x99;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Basics_drop(gc_t gc,uint32_t v1670789167,sptr_t v1673803813)
{
        sptr_t v196335312;
        uint32_t v80100076;
        v80100076 = v1670789167;
        v196335312 = v1673803813;
        fW$__fR$__fJhc_Basics_136__f__4:;
        {   uint16_t v100158 = (((int32_t)0) >= ((int32_t)v80100076));
            if (0 == v100158) {
                wptr_t v100160 = eval(gc,v196335312);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100160) {
                    return v100160;
                } else {
                    sptr_t v80;
                    /* ("CJhc.Prim.Prim.:" ni0 ni80) */
                    v80 = ((struct sCJhc_Prim_Prim_$x3a*)v100160)->a2;
                    uint32_t v153480252 = (v80100076 - 1);
                    v80100076 = v153480252;
                    v196335312 = v80;
                    goto fW$__fR$__fJhc_Basics_136__f__4;
                }
            } else {
                /* 1 */
                assert(1 == v100158);
                return eval(gc,v196335312);
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWord(gc_t gc,uint32_t v144711731,wptr_t v1692809261)
{
        wptr_t v135594734;
        uint32_t v178901586;
        v178901586 = v144711731;
        v135594734 = v1692809261;
        fW$__fR$__fJhc_Inst_Show_showWord__5:;
        {   sptr_t v135595716 = demote(v135594734);
            uint32_t v260457474 = (v178901586 / 10);
            uint32_t v61835124 = (v178901586 % 10);
            uintmax_t v86428116 = ((uintmax_t)v61835124);
            uint32_t v59642628 = ((uint32_t)v86428116);
            uint32_t v13468102 = (48 + v59642628);
            uint32_t v59199098 = v13468102;
            {   gc_frame0(gc,1,v135595716);
                wptr_t v36 = RAW_SET_UF(v59199098);
                sptr_t v44342088 = demote(v36);
                if (0 == v260457474) {
                    {   gc_frame0(gc,1,v44342088);
                        wptr_t x6 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x6)->a1 = v44342088;
                        ((struct sCJhc_Prim_Prim_$x3a*)x6)->a2 = v135595716;
                        return x6;
                    }
                } else {
                    {   gc_frame0(gc,1,v44342088);
                        wptr_t x7 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a1 = v44342088;
                        ((struct sCJhc_Prim_Prim_$x3a*)x7)->a2 = v135595716;
                        wptr_t v2023 = x7;
                        v178901586 = v260457474;
                        v135594734 = v2023;
                        goto fW$__fR$__fJhc_Inst_Show_showWord__5;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fNumeric_67__doFmt(gc_t gc,uint16_t v225564906,sptr_t v71383250,sptr_t v56741148)
{
        sptr_t v56741806;
        sptr_t v71383907;
        uint16_t v225565562;
        v225565562 = v225564906;
        v71383907 = v71383250;
        v56741806 = v56741148;
        bRfW$__fNumeric_67__doFmt__122:;
        {   {   gc_frame0(gc,2,v56741806,v71383907);
                sptr_t x123 = s_alloc(gc,cFtheMain$d3);
                ((struct sFtheMain$d3*)x123)->head = TO_FPTR(&E__ftheMain$d3);
                ((struct sFtheMain$d3*)x123)->a1 = v71383907;
                sptr_t v92400194 = MKLAZY(x123);
                switch (v225565562) {
                case 0:
                    {   wptr_t v100126 = eval(gc,v92400194);
                        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100126) {
                            return PROMOTE(c15);
                        } else {
                            sptr_t v3064;
                            sptr_t v3066;
                            /* ("CJhc.Prim.Prim.:" ni3064 ni3066) */
                            v3064 = ((struct sCJhc_Prim_Prim_$x3a*)v100126)->a1;
                            v3066 = ((struct sCJhc_Prim_Prim_$x3a*)v100126)->a2;
                            {   sptr_t v638;
                                sptr_t v640;
                                struct tup1 x124;
                                gc_frame0(gc,2,v3064,v3066);
                                wptr_t v100128 = eval(gc,v3066);
                                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100128) {
                                    sptr_t x125 = s_alloc(gc,cFtheMain$d4);
                                    ((struct sFtheMain$d4*)x125)->head = TO_FPTR(&E__ftheMain$d4);
                                    ((struct sFtheMain$d4*)x125)->a1 = v56741806;
                                    sptr_t v71423084 = MKLAZY(x125);
                                    {   gc_frame0(gc,1,v71423084);
                                        sptr_t x126 = s_alloc(gc,cFJhc_Basics_$pp);
                                        ((struct sFJhc_Basics_$pp*)x126)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                                        ((struct sFJhc_Basics_$pp*)x126)->a1 = SET_RAW_TAG($_hole);
                                        ((struct sFJhc_Basics_$pp*)x126)->a2 = c18;
                                        ((struct sFJhc_Basics_$pp*)x126)->a3 = v71423084;
                                        sptr_t v107005534 = MKLAZY(x126);
                                        x124.t0 = v3064;
                                        x124.t1 = v107005534;
                                    }
                                } else {
                                    /* ("CJhc.Prim.Prim.:" ni0 ni0) */
                                    sptr_t x127 = s_alloc(gc,cFtheMain$d5);
                                    ((struct sFtheMain$d5*)x127)->head = TO_FPTR(&E__ftheMain$d5);
                                    ((struct sFtheMain$d5*)x127)->a1 = v56741806;
                                    sptr_t v61415316 = MKLAZY(x127);
                                    {   gc_frame0(gc,1,v61415316);
                                        wptr_t x128 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                        ((struct sCJhc_Prim_Prim_$x3a*)x128)->a1 = ((sptr_t)RAW_SET_UF('e'));
                                        ((struct sCJhc_Prim_Prim_$x3a*)x128)->a2 = v61415316;
                                        wptr_t v734 = x128;
                                        sptr_t v131535980 = demote(v734);
                                        {   gc_frame0(gc,1,v131535980);
                                            sptr_t x129 = s_alloc(gc,cFJhc_Basics_$pp);
                                            ((struct sFJhc_Basics_$pp*)x129)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                                            ((struct sFJhc_Basics_$pp*)x129)->a1 = SET_RAW_TAG($_hole);
                                            ((struct sFJhc_Basics_$pp*)x129)->a2 = v3066;
                                            ((struct sFJhc_Basics_$pp*)x129)->a3 = v131535980;
                                            sptr_t v60981616 = MKLAZY(x129);
                                            {   gc_frame0(gc,1,v60981616);
                                                wptr_t x130 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                                ((struct sCJhc_Prim_Prim_$x3a*)x130)->a1 = ((sptr_t)RAW_SET_UF('.'));
                                                ((struct sCJhc_Prim_Prim_$x3a*)x130)->a2 = v60981616;
                                                wptr_t v1585 = x130;
                                                sptr_t v226855492 = demote(v1585);
                                                x124.t0 = v3064;
                                                x124.t1 = v226855492;
                                            }
                                        }
                                    }
                                }
                                v638 = x124.t0;
                                v640 = x124.t1;
                                {   gc_frame0(gc,2,v638,v640);
                                    wptr_t x131 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x131)->a1 = v638;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x131)->a2 = v640;
                                    return x131;
                                }
                            }
                        }
                    }
                    break;
                case 1:
                    {   {   sptr_t v1531;
                            sptr_t v1534;
                            uint32_t v163333524;
                            struct tup1 x132;
                            gc_frame0(gc,1,v92400194);
                            wptr_t v100130 = eval(gc,v56741806);
                            v163333524 = ((struct sCJhc_Type_Word_Int*)v100130)->a1;
                            uint16_t v100132 = (((int32_t)0) < ((int32_t)v163333524));
                            if (0 == v100132) {
                                uint32_t v73700196 = (-((int32_t)v163333524));
                                sptr_t x133 = s_alloc(gc,cFtheMain$d8);
                                ((struct sFtheMain$d8*)x133)->head = TO_FPTR(&E__ftheMain$d8);
                                ((struct sFtheMain$d8*)x133)->a1 = v73700196;
                                ((struct sFtheMain$d8*)x133)->a2 = v92400194;
                                sptr_t v3601048 = MKLAZY(x133);
                                x132.t0 = c20;
                                x132.t1 = v3601048;
                            } else {
                                /* 1 */
                                assert(1 == v100132);
                                wptr_t x134 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                wptr_t v1598 = x134;
                                sptr_t v1117661731 = demote(v1598);
                                ((struct sCJhc_Prim_Prim_$x3a*)FROM_SPTR(v1117661731))->a1 = ((sptr_t)RAW_SET_UF('0'));
                                ((struct sCJhc_Prim_Prim_$x3a*)FROM_SPTR(v1117661731))->a2 = v1117661731;
                                {   wptr_t v100138;
                                    gc_frame0(gc,1,v1117661731);
                                    sptr_t x135 = s_alloc(gc,cFJhc_Basics_$pp);
                                    ((struct sFJhc_Basics_$pp*)x135)->head = TO_FPTR(&E__fJhc_Basics_$pp);
                                    ((struct sFJhc_Basics_$pp*)x135)->a1 = SET_RAW_TAG($_hole);
                                    ((struct sFJhc_Basics_$pp*)x135)->a2 = v92400194;
                                    ((struct sFJhc_Basics_$pp*)x135)->a3 = v1117661731;
                                    sptr_t v74953232 = MKLAZY(x135);
                                    v100138 = fW$__fR$__fJhc_List_387__f(gc,v163333524,v74953232);
                                    sptr_t v233267568 = demote(v100138);
                                    {   gc_frame0(gc,1,v233267568);
                                        sptr_t x136 = s_alloc(gc,cFtheMain$d6);
                                        ((struct sFtheMain$d6*)x136)->head = TO_FPTR(&E__ftheMain$d6);
                                        ((struct sFtheMain$d6*)x136)->a1 = v163333524;
                                        ((struct sFtheMain$d6*)x136)->a2 = v92400194;
                                        sptr_t v17699900 = MKLAZY(x136);
                                        {   gc_frame0(gc,1,v17699900);
                                            wptr_t x137 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                            ((struct sCJhc_Prim_Prim_$x3a*)x137)->a1 = ((sptr_t)RAW_SET_UF('.'));
                                            ((struct sCJhc_Prim_Prim_$x3a*)x137)->a2 = v17699900;
                                            wptr_t v749 = x137;
                                            sptr_t v45901368 = demote(v749);
                                            x132.t0 = v233267568;
                                            x132.t1 = v45901368;
                                        }
                                    }
                                }
                            }
                            v1531 = x132.t0;
                            v1534 = x132.t1;
                            return fJhc_Basics_$pp(gc,SET_RAW_TAG($_hole),v1531,v1534);
                        }
                    }
                    break;
                case 2:
                    {   sptr_t v1548;
                        sptr_t v665;
                        uint32_t v119285246;
                        uint16_t v1352;
                        struct tup4 x138;
                        wptr_t v100142 = eval(gc,v56741806);
                        sptr_t v261292856 = demote(v100142);
                        v119285246 = ((struct sCJhc_Type_Word_Int*)v100142)->a1;
                        uint16_t v100144 = (((int32_t)0) > ((int32_t)v119285246));
                        if (0 == v100144) {
                            uint16_t v100146 = (((int32_t)7) < ((int32_t)v119285246));
                            if (0 == v100146) {
                                x138.t0 = 1;
                                x138.t1 = v71383907;
                                x138.t2 = v261292856;
                            } else {
                                /* 1 */
                                assert(1 == v100146);
                                x138.t0 = 0;
                                x138.t1 = v71383907;
                                x138.t2 = v261292856;
                            }
                        } else {
                            /* 1 */
                            assert(1 == v100144);
                            x138.t0 = 0;
                            x138.t1 = v71383907;
                            x138.t2 = v261292856;
                        }
                        v1352 = x138.t0;
                        v1548 = x138.t1;
                        v665 = x138.t2;
                        v225565562 = v1352;
                        v71383907 = v1548;
                        v56741806 = v665;
                        goto bRfW$__fNumeric_67__doFmt__122;
                    }
                    break;
                default: jhc_case_fell_off(__LINE__);
                }
            }
        }
}

static uint32_t A_STD
fW$__fPrelude_CType_intToDigit(gc_t gc,uint32_t v1444941875)
{
        uint16_t v100166 = (10 > v1444941875);
        if (0 == v100166) {
            uint16_t v100168 = (16 > v1444941875);
            if (0 == v100168) {
                jhc_error("Prelude.error: Char.intToDigit: not a digit");
                return (uint32_t)0;
            } else {
                /* 1 */
                assert(1 == v100168);
                uint32_t v110947988 = (87 + v1444941875);
                return v110947988;
            }
        } else {
            /* 1 */
            assert(1 == v100166);
            uint32_t v170441214 = (48 + v1444941875);
            return v170441214;
        }
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fJhc_List_387__f(gc_t gc,uint32_t v216085092,sptr_t v110947990)
{
        uint16_t v100018 = (((int32_t)0) >= ((int32_t)v216085092));
        if (0 == v100018) {
            wptr_t v100020 = eval(gc,v110947990);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100020) {
                return v100020;
            } else {
                sptr_t v1121;
                sptr_t v304;
                /* ("CJhc.Prim.Prim.:" ni304 ni1121) */
                v304 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a1;
                v1121 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a2;
                uint32_t v194508206 = (v216085092 - 1);
                {   gc_frame0(gc,2,v304,v1121);
                    sptr_t x120 = s_alloc(gc,cFW$__fR$__fJhc_List_387__f);
                    ((struct sFW$__fR$__fJhc_List_387__f*)x120)->head = TO_FPTR(&E__fW$__fR$__fJhc_List_387__f);
                    ((struct sFW$__fR$__fJhc_List_387__f*)x120)->a1 = v194508206;
                    ((struct sFW$__fR$__fJhc_List_387__f*)x120)->a2 = v1121;
                    sptr_t v178933326 = MKLAZY(x120);
                    {   gc_frame0(gc,1,v178933326);
                        wptr_t x121 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x121)->a1 = v304;
                        ((struct sCJhc_Prim_Prim_$x3a*)x121)->a2 = v178933326;
                        return x121;
                    }
                }
            }
        } else {
            /* 1 */
            assert(1 == v100018);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc_t gc,wptr_t v55748264,uint32_t v595462177)
{
        sptr_t v55748811 = demote(v55748264);
        if (0 == v595462177) {
            return PROMOTE(c7);
        } else {
            uint16_t v100334 = (((int32_t)0) < ((int32_t)v595462177));
            if (0 == v100334) {
                jhc_error("Prelude.error: Prelude.^: negative exponent");
                return NULL;
            } else {
                sptr_t v196335306;
                sptr_t v212210744;
                uint32_t v120257688;
                /* 1 */
                assert(1 == v100334);
                uint32_t v138591038 = (v595462177 - 1);
                v212210744 = v55748811;
                v120257688 = v138591038;
                v196335306 = v55748811;
                fW$__fx95688111__68:;
                {   if (0 == v120257688) {
                        return eval(gc,v196335306);
                    } else {
                        sptr_t v10527818;
                        uint32_t v135370998;
                        v10527818 = v212210744;
                        v135370998 = v120257688;
                        fW$__fx15896136__69:;
                        {   uint32_t v100336 = (((int32_t)v135370998) % ((int32_t)2));
                            if (0 == v100336) {
                                {   gc_frame0(gc,1,v10527818);
                                    sptr_t x70 = s_alloc(gc,cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2);
                                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2*)x70)->head = TO_FPTR(&E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2);
                                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2*)x70)->a1 = v10527818;
                                    sptr_t v164454568 = MKLAZY(x70);
                                    uint32_t v135243418 = (((int32_t)v135370998) / ((int32_t)2));
                                    v10527818 = v164454568;
                                    v135370998 = v135243418;
                                    goto fW$__fx15896136__69;
                                }
                            } else {
                                uint32_t v9075028 = (v135370998 - 1);
                                {   gc_frame0(gc,2,v10527818,v196335306);
                                    sptr_t x71 = s_alloc(gc,cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3);
                                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3*)x71)->head = TO_FPTR(&E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3);
                                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3*)x71)->a1 = v196335306;
                                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3*)x71)->a2 = v10527818;
                                    sptr_t v138818196 = MKLAZY(x71);
                                    v212210744 = v10527818;
                                    v120257688 = v9075028;
                                    v196335306 = v138818196;
                                    goto fW$__fx95688111__68;
                                }
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd2(gc_t gc,sptr_t v119285244)
{
        uintmax_t v164466462;
        wptr_t v100342 = eval(gc,v119285244);
        v164466462 = ((struct sCJhc_Type_Basic_Integer*)v100342)->a1;
        uintmax_t v261754148 = (v164466462 * v164466462);
        wptr_t x67 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x67)->a1 = v261754148;
        return x67;
}

static wptr_t A_STD A_MALLOC
fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$Cd3(gc_t gc,sptr_t v115766306,sptr_t v40405742)
{
        {   gc_frame0(gc,1,v115766306);
            wptr_t v100338 = eval(gc,v40405742);
            {   uintmax_t v200654378;
                uintmax_t v58099870;
                gc_frame0(gc,1,v100338);
                wptr_t v100340 = eval(gc,v115766306);
                v58099870 = ((struct sCJhc_Type_Basic_Integer*)v100338)->a1;
                v200654378 = ((struct sCJhc_Type_Basic_Integer*)v100340)->a1;
                uintmax_t v241096360 = (v58099870 * v200654378);
                wptr_t x66 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x66)->a1 = v241096360;
                return x66;
            }
        }
}

static struct tup1 A_STD
fW$__fW$__fNumeric_floatToDigits(gc_t gc,wptr_t v95073924,double v15818818)
{
        uint16_t v100028 = (0.0 == v15818818);
        if (0 == v100028) {
            {   gc_frame0(gc,1,v95073924);
                sptr_t x109 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d2);
                ((struct sFW$__fW$__fNumeric_floatToDigits$d2*)x109)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d2);
                ((struct sFW$__fW$__fNumeric_floatToDigits$d2*)x109)->a1 = v15818818;
                sptr_t v71920768 = MKLAZY(x109);
                {   gc_frame0(gc,1,v71920768);
                    sptr_t x110 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d4);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d4*)x110)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d4);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d4*)x110)->a1 = v71920768;
                    sptr_t v85806474 = MKLAZY(x110);
                    {   gc_frame0(gc,1,v85806474);
                        sptr_t x111 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d5);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d5*)x111)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d5);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d5*)x111)->a1 = v71920768;
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d5*)x111)->a2 = v85806474;
                        sptr_t v151167342 = MKLAZY(x111);
                        {   gc_frame0(gc,1,v151167342);
                            sptr_t x112 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d8);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d8*)x112)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d8);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d8*)x112)->a1 = v151167342;
                            sptr_t v24658036 = MKLAZY(x112);
                            {   gc_frame0(gc,1,v24658036);
                                sptr_t x113 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d9);
                                ((struct sFW$__fW$__fNumeric_floatToDigits$d9*)x113)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d9);
                                ((struct sFW$__fW$__fNumeric_floatToDigits$d9*)x113)->a1 = v151167342;
                                sptr_t v150886634 = MKLAZY(x113);
                                {   gc_frame0(gc,1,v150886634);
                                    sptr_t x114 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d10);
                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d10*)x114)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d10);
                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d10*)x114)->a1 = v150886634;
                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d10*)x114)->a2 = v24658036;
                                    sptr_t v194492352 = MKLAZY(x114);
                                    {   gc_frame0(gc,1,v194492352);
                                        sptr_t x115 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d19);
                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d19*)x115)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d19);
                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d19*)x115)->a1 = v194492352;
                                        sptr_t v226176096 = MKLAZY(x115);
                                        {   gc_frame0(gc,1,v226176096);
                                            sptr_t x116 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d20);
                                            ((struct sFW$__fW$__fNumeric_floatToDigits$d20*)x116)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d20);
                                            ((struct sFW$__fW$__fNumeric_floatToDigits$d20*)x116)->a1 = v194492352;
                                            sptr_t v240576404 = MKLAZY(x116);
                                            {   gc_frame0(gc,1,v240576404);
                                                sptr_t x117 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d21);
                                                ((struct sFW$__fW$__fNumeric_floatToDigits$d21*)x117)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d21);
                                                ((struct sFW$__fW$__fNumeric_floatToDigits$d21*)x117)->a1 = v194492352;
                                                sptr_t v117603324 = MKLAZY(x117);
                                                {   gc_frame0(gc,1,v117603324);
                                                    sptr_t x118 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d22);
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d22);
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a1 = v95073924;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a2 = v85806474;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a3 = v150886634;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a4 = v24658036;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a5 = v226176096;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a6 = v117603324;
                                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d22*)x118)->a7 = v240576404;
                                                    sptr_t v212210746 = MKLAZY(x118);
                                                    {   struct tup1 _t5;
                                                        gc_frame0(gc,1,v212210746);
                                                        sptr_t x119 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d25);
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d25);
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a1 = v95073924;
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a2 = v194492352;
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a3 = v226176096;
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a4 = v117603324;
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a5 = v240576404;
                                                        ((struct sFW$__fW$__fNumeric_floatToDigits$d25*)x119)->a6 = v212210746;
                                                        sptr_t v215884490 = MKLAZY(x119);
                                                        return (_t5.t0 = v215884490,_t5.t1 = v212210746,_t5);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            struct tup1 _t6;
            /* 1 */
            assert(1 == v100028);
            return (_t6.t0 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)),_t6.t1 = c2,_t6);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d10(gc_t gc,sptr_t v137486610,sptr_t v86428118)
{
        {   sptr_t v325;
            sptr_t v407;
            sptr_t v409;
            sptr_t v906;
            uint32_t v147773776;
            struct tup8 x81;
            gc_frame0(gc,1,v137486610);
            wptr_t v100090 = eval(gc,v86428118);
            v147773776 = ((struct sCJhc_Type_Word_Int*)v100090)->a1;
            uint16_t v100092 = (((int32_t)0) <= ((int32_t)v147773776));
            if (0 == v100092) {
                sptr_t v404;
                sptr_t v503;
                sptr_t v900;
                struct tup7 x82;
                uint16_t v100098 = (((int32_t)-1074) < ((int32_t)v147773776));
                if (0 == v100098) {
                    uint32_t v107672530 = (-((int32_t)v147773776));
                    sptr_t x83 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d15);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d15*)x83)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d15);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d15*)x83)->a1 = v137486610;
                    sptr_t v15725352 = MKLAZY(x83);
                    {   gc_frame0(gc,1,v15725352);
                        sptr_t x84 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d14);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d14*)x84)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d14);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d14*)x84)->a1 = v107672530;
                        sptr_t v260772456 = MKLAZY(x84);
                        x82.t0 = v15725352;
                        x82.t1 = v260772456;
                        x82.t2 = c7;
                    }
                } else {
                    wptr_t v100102;
                    uintmax_t v53587372;
                    uintmax_t v97616042;
                    /* 1 */
                    assert(1 == v100098);
                    wptr_t v100100 = eval(gc,v137486610);
                    v53587372 = ((struct sCJhc_Type_Basic_Integer*)v100100)->a1;
                    v100102 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,PROMOTE(c9),52);
                    v97616042 = ((struct sCJhc_Type_Basic_Integer*)v100102)->a1;
                    uint16_t v100104 = (v53587372 == v97616042);
                    if (0 == v100104) {
                        uintmax_t v49994606 = (2 * v53587372);
                        uint32_t v179695638 = (-((int32_t)v147773776));
                        wptr_t x85 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                        ((struct sCJhc_Type_Basic_Integer*)x85)->a1 = v49994606;
                        wptr_t v961 = x85;
                        sptr_t v16257346 = demote(v961);
                        {   gc_frame0(gc,1,v16257346);
                            sptr_t x86 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d18);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d18*)x86)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d18);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d18*)x86)->a1 = v179695638;
                            sptr_t v265843062 = MKLAZY(x86);
                            x82.t0 = v16257346;
                            x82.t1 = v265843062;
                            x82.t2 = c7;
                        }
                    } else {
                        wptr_t v794;
                        /* 1 */
                        assert(1 == v100104);
                        uint32_t v135520224 = (-((int32_t)v147773776));
                        uint32_t v146226744 = (1 + v135520224);
                        v794 = fW$__fW$__fNumeric_floatToDigits$d17(gc,v53587372);
                        sptr_t v37321524 = demote(v794);
                        {   gc_frame0(gc,1,v37321524);
                            sptr_t x87 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d16);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d16*)x87)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d16);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d16*)x87)->a1 = v146226744;
                            sptr_t v160825212 = MKLAZY(x87);
                            x82.t0 = v37321524;
                            x82.t1 = v160825212;
                            x82.t2 = c9;
                        }
                    }
                }
                v900 = x82.t0;
                v404 = x82.t1;
                v503 = x82.t2;
                x81.t0 = v900;
                x81.t1 = v404;
                x81.t2 = v503;
                x81.t3 = c7;
            } else {
                wptr_t v100096;
                uintmax_t v247340482;
                uintmax_t v48277546;
                /* 1 */
                assert(1 == v100092);
                wptr_t v100094 = eval(gc,v137486610);
                v247340482 = ((struct sCJhc_Type_Basic_Integer*)v100094)->a1;
                v100096 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,PROMOTE(c9),52);
                v48277546 = ((struct sCJhc_Type_Basic_Integer*)v100096)->a1;
                uint16_t v220151332 = (v247340482 == v48277546);
                sptr_t x88 = s_alloc(gc,cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C);
                ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x88)->head = TO_FPTR(&E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C);
                ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x88)->a1 = PROMOTE(c9);
                ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x88)->a2 = v147773776;
                sptr_t v50432182 = MKLAZY(x88);
                if (0 == v220151332) {
                    {   gc_frame0(gc,1,v50432182);
                        sptr_t x89 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d13);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d13*)x89)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d13);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d13*)x89)->a1 = v247340482;
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d13*)x89)->a2 = v50432182;
                        sptr_t v157224844 = MKLAZY(x89);
                        x81.t0 = v157224844;
                        x81.t1 = c9;
                        x81.t2 = v50432182;
                        x81.t3 = v50432182;
                    }
                } else {
                    /* 1 */
                    assert(1 == v220151332);
                    {   gc_frame0(gc,1,v50432182);
                        sptr_t x90 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d12);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d12*)x90)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d12);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d12*)x90)->a1 = v50432182;
                        sptr_t v107337456 = MKLAZY(x90);
                        {   gc_frame0(gc,1,v107337456);
                            sptr_t x91 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d11);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d11*)x91)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d11);
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d11*)x91)->a1 = v247340482;
                            ((struct sFW$__fW$__fNumeric_floatToDigits$d11*)x91)->a2 = v50432182;
                            sptr_t v220622136 = MKLAZY(x91);
                            x81.t0 = v220622136;
                            x81.t1 = c10;
                            x81.t2 = v107337456;
                            x81.t3 = c9;
                        }
                    }
                }
            }
            v906 = x81.t0;
            v407 = x81.t1;
            v409 = x81.t2;
            v325 = x81.t3;
            {   gc_frame0(gc,4,v325,v407,v409,v906);
                wptr_t x92 = s_alloc(gc,cCJhc_Prim_Prim_$LcccR);
                ((struct sCJhc_Prim_Prim_$LcccR*)x92)->a1 = v906;
                ((struct sCJhc_Prim_Prim_$LcccR*)x92)->a2 = v407;
                ((struct sCJhc_Prim_Prim_$LcccR*)x92)->a3 = v409;
                ((struct sCJhc_Prim_Prim_$LcccR*)x92)->a4 = v325;
                return x92;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d11(gc_t gc,uintmax_t v154397124,sptr_t v1704986143)
{
        uintmax_t v164562416;
        wptr_t v100112 = eval(gc,v1704986143);
        v164562416 = ((struct sCJhc_Type_Basic_Integer*)v100112)->a1;
        uintmax_t v136589144 = (v154397124 * v164562416);
        uintmax_t v159700512 = (2 * v136589144);
        uintmax_t v74199388 = (2 * v159700512);
        wptr_t x23 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x23)->a1 = v74199388;
        return x23;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d12(gc_t gc,sptr_t v209100920)
{
        uintmax_t v238570298;
        wptr_t v100110 = eval(gc,v209100920);
        v238570298 = ((struct sCJhc_Type_Basic_Integer*)v100110)->a1;
        uintmax_t v233660398 = (2 * v238570298);
        wptr_t x22 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x22)->a1 = v233660398;
        return x22;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d13(gc_t gc,uintmax_t v201297312,sptr_t v178901588)
{
        uintmax_t v215224070;
        wptr_t v100108 = eval(gc,v178901588);
        v215224070 = ((struct sCJhc_Type_Basic_Integer*)v100108)->a1;
        uintmax_t v73520034 = (v201297312 * v215224070);
        uintmax_t v236625870 = (2 * v73520034);
        wptr_t x21 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x21)->a1 = v236625870;
        return x21;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d14(gc_t gc,uint32_t v19530610)
{
        wptr_t v100332;
        uintmax_t v246097322;
        v100332 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,PROMOTE(c9),v19530610);
        v246097322 = ((struct sCJhc_Type_Basic_Integer*)v100332)->a1;
        uintmax_t v38644154 = (2 * v246097322);
        wptr_t x78 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x78)->a1 = v38644154;
        return x78;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d15(gc_t gc,sptr_t v36059414)
{
        uintmax_t v10194302;
        wptr_t v100106 = eval(gc,v36059414);
        v10194302 = ((struct sCJhc_Type_Basic_Integer*)v100106)->a1;
        uintmax_t v52214544 = (2 * v10194302);
        wptr_t x20 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x20)->a1 = v52214544;
        return x20;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d16(gc_t gc,uint32_t v128611262)
{
        wptr_t v100330;
        uintmax_t v78259272;
        v100330 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,PROMOTE(c9),v128611262);
        v78259272 = ((struct sCJhc_Type_Basic_Integer*)v100330)->a1;
        uintmax_t v145737756 = (2 * v78259272);
        wptr_t x79 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x79)->a1 = v145737756;
        return x79;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d17(gc_t gc,uintmax_t v132029984)
{
        uintmax_t v173886986 = (2 * v132029984);
        uintmax_t v178033788 = (2 * v173886986);
        wptr_t x19 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x19)->a1 = v178033788;
        return x19;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d18(gc_t gc,uint32_t v22697324)
{
        wptr_t v100328;
        uintmax_t v252594042;
        v100328 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,PROMOTE(c9),v22697324);
        v252594042 = ((struct sCJhc_Type_Basic_Integer*)v100328)->a1;
        uintmax_t v246473314 = (2 * v252594042);
        wptr_t x80 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x80)->a1 = v246473314;
        return x80;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d19(gc_t gc,sptr_t v1710622253)
{
        sptr_t v3194;
        wptr_t v100088 = eval(gc,v1710622253);
        v3194 = ((struct sCJhc_Prim_Prim_$LcccR*)v100088)->a2;
        return eval(gc,v3194);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d2(gc_t gc,double v1150171673)
{
        struct tup10 _t9;
        double v11751994;
        uint32_t v4344;
        struct tup10 x25;
        int x26;
        double x27 = frexp((double)v1150171673,&x26);
        x25 = (_t9.t0 = x27,_t9.t1 = x26,_t9);
        v11751994 = x25.t0;
        v4344 = x25.t1;
        uint32_t v236343106 = (v4344 - 53);
        wptr_t x28 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x28)->a1 = v236343106;
        wptr_t v176 = x28;
        sptr_t v110947982 = demote(v176);
        {   gc_frame0(gc,1,v110947982);
            sptr_t x29 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d3);
            ((struct sFW$__fW$__fNumeric_floatToDigits$d3*)x29)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d3);
            ((struct sFW$__fW$__fNumeric_floatToDigits$d3*)x29)->a1 = v11751994;
            sptr_t v216085086 = MKLAZY(x29);
            {   gc_frame0(gc,1,v216085086);
                wptr_t x30 = s_alloc(gc,cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x30)->a1 = v216085086;
                ((struct sCJhc_Prim_Prim_$LcR*)x30)->a2 = v110947982;
                return x30;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d20(gc_t gc,sptr_t v69432560)
{
        sptr_t v3208;
        wptr_t v100086 = eval(gc,v69432560);
        v3208 = ((struct sCJhc_Prim_Prim_$LcccR*)v100086)->a1;
        return eval(gc,v3208);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d21(gc_t gc,sptr_t v113838344)
{
        sptr_t v3204;
        wptr_t v100084 = eval(gc,v113838344);
        v3204 = ((struct sCJhc_Prim_Prim_$LcccR*)v100084)->a3;
        return eval(gc,v3204);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d22(gc_t gc,wptr_t v253791876,sptr_t v1697646111,sptr_t v1706952221,sptr_t v1708787229,sptr_t v237992580,sptr_t v172090968,sptr_t v111142934)
{
        uintmax_t v241939046;
        uint32_t v510;
        v241939046 = ((struct sCJhc_Type_Basic_Integer*)v253791876)->a1;
        if (10 == v241939046) {
            {   sptr_t v68216826;
                uint32_t v201839444;
                uint32_t v47322492;
                struct tup1 x96;
                gc_frame0(gc,4,v111142934,v172090968,v237992580,v253791876);
                wptr_t v100172 = eval(gc,v1697646111);
                v47322492 = ((struct sCJhc_Type_Word_Int*)v100172)->a1;
                uint32_t v109901816 = (52 + v47322492);
                uint32_t v62483066 = (3 * v109901816);
                wptr_t x95 = s_alloc(gc,cCJhc_Type_Word_Int);
                ((struct sCJhc_Type_Word_Int*)x95)->a1 = v62483066;
                wptr_t v1189 = x95;
                sptr_t v39061214 = demote(v1189);
                x96 = fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,SET_RAW_TAG(TJhc_Type_Word_Int),v39061214,c11);
                v68216826 = x96.t0;
                wptr_t v100174 = eval(gc,v68216826);
                v201839444 = ((struct sCJhc_Type_Word_Int*)v100174)->a1;
                v510 = fW$__fW$__fNumeric_floatToDigits$d23(gc,v253791876,v237992580,v172090968,v111142934,v201839444);
            }
        } else {
            {   uintmax_t v161443782;
                uint32_t v218304844;
                gc_frame0(gc,5,v111142934,v172090968,v237992580,v253791876,v1708787229);
                wptr_t v100176 = eval(gc,v1706952221);
                v161443782 = ((struct sCJhc_Type_Basic_Integer*)v100176)->a1;
                uintmax_t v97286416 = (1 + v161443782);
                double v262269098 = ((double)((intmax_t)v97286416));
                double v62470112 = log(v262269098);
                wptr_t v100178 = eval(gc,v1708787229);
                v218304844 = ((struct sCJhc_Type_Word_Int*)v100178)->a1;
                double v110947986 = ((double)((int32_t)v218304844));
                double v196278420 = (v110947986 * log(2.0));
                double v132811632 = (v62470112 + v196278420);
                double v195537776 = ((double)((intmax_t)v241939046));
                double v42970046 = log(v195537776);
                double v197291872 = (v132811632 / v42970046);
                saved_gc = gc;
                double v215350916 = ((double)ceil((double)v197291872));
                uintmax_t v59642622 = ((intmax_t)v215350916);
                uint32_t v40405744 = ((uint32_t)v59642622);
                v510 = fW$__fW$__fNumeric_floatToDigits$d24(gc,v253791876,v237992580,v172090968,v111142934,v40405744);
            }
        }
        wptr_t x97 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x97)->a1 = v510;
        return x97;
}

static uint32_t A_STD
fW$__fW$__fNumeric_floatToDigits$d23(gc_t gc,wptr_t v3148,sptr_t v1713505821,sptr_t v1715340833,sptr_t v1717437981,uint32_t v101519594)
{
        sptr_t v1713506257;
        sptr_t v1715341270;
        sptr_t v1717438419;
        wptr_t v3583;
        uint32_t v101520033;
        v3583 = v3148;
        v1713506257 = v1713505821;
        v1715341270 = v1715340833;
        v1717438419 = v1717437981;
        v101520033 = v101519594;
        bRfW$__fW$__fNumeric_floatToDigits$d23u93:;
        {   uint16_t v100302 = (((int32_t)0) <= ((int32_t)v101520033));
            if (0 == v100302) {
                uint32_t v181754690 = (-((int32_t)v101520033));
                {   wptr_t v100316;
                    uintmax_t v194346572;
                    uintmax_t v205779218;
                    uintmax_t v247305776;
                    uintmax_t v90861648;
                    gc_frame0(gc,4,v3583,v1713506257,v1715341270,v1717438419);
                    v100316 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v3583,v181754690);
                    v194346572 = ((struct sCJhc_Type_Basic_Integer*)v100316)->a1;
                    wptr_t v100318 = eval(gc,v1717438419);
                    v247305776 = ((struct sCJhc_Type_Basic_Integer*)v100318)->a1;
                    wptr_t v100320 = eval(gc,v1715341270);
                    v90861648 = ((struct sCJhc_Type_Basic_Integer*)v100320)->a1;
                    uintmax_t v201839438 = (v247305776 + v90861648);
                    uintmax_t v137643138 = (v194346572 * v201839438);
                    wptr_t v100322 = eval(gc,v1713506257);
                    v205779218 = ((struct sCJhc_Type_Basic_Integer*)v100322)->a1;
                    uint16_t v100324 = (((intmax_t)v137643138) <= ((intmax_t)v205779218));
                    if (0 == v100324) {
                        uint32_t v240673846 = (1 + v101520033);
                        v3583 = v3583;
                        v1713506257 = v1713506257;
                        v1715341270 = v1715341270;
                        v1717438419 = v1717438419;
                        v101520033 = v240673846;
                        goto bRfW$__fW$__fNumeric_floatToDigits$d23u93;
                    } else {
                        /* 1 */
                        assert(1 == v100324);
                        return v101520033;
                    }
                }
            } else {
                /* 1 */
                assert(1 == v100302);
                {   wptr_t v100308;
                    uintmax_t v119514818;
                    uintmax_t v129659906;
                    uintmax_t v14053568;
                    uintmax_t v251973242;
                    gc_frame0(gc,4,v3583,v1713506257,v1715341270,v1717438419);
                    wptr_t v100574 = eval(gc,v1717438419);
                    v129659906 = ((struct sCJhc_Type_Basic_Integer*)v100574)->a1;
                    wptr_t v100306 = eval(gc,v1715341270);
                    v119514818 = ((struct sCJhc_Type_Basic_Integer*)v100306)->a1;
                    uintmax_t v136238518 = (v129659906 + v119514818);
                    v100308 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v3583,v101520033);
                    v14053568 = ((struct sCJhc_Type_Basic_Integer*)v100308)->a1;
                    wptr_t v100310 = eval(gc,v1713506257);
                    v251973242 = ((struct sCJhc_Type_Basic_Integer*)v100310)->a1;
                    uintmax_t v65312582 = (v14053568 * v251973242);
                    uint16_t v100312 = (((intmax_t)v136238518) <= ((intmax_t)v65312582));
                    if (0 == v100312) {
                        uint32_t v913262 = (1 + v101520033);
                        v3583 = v3583;
                        v1713506257 = v1713506257;
                        v1715341270 = v1715341270;
                        v1717438419 = v1717438419;
                        v101520033 = v913262;
                        goto bRfW$__fW$__fNumeric_floatToDigits$d23u93;
                    } else {
                        /* 1 */
                        assert(1 == v100312);
                        return v101520033;
                    }
                }
            }
        }
}

static uint32_t A_STD
fW$__fW$__fNumeric_floatToDigits$d24(gc_t gc,wptr_t v61835122,sptr_t v264254028,sptr_t v44725398,sptr_t v182639120,uint32_t v194635134)
{
        sptr_t v182639594;
        sptr_t v264254500;
        sptr_t v44725871;
        wptr_t v61835593;
        uint32_t v194635609;
        v61835593 = v61835122;
        v264254500 = v264254028;
        v44725871 = v44725398;
        v182639594 = v182639120;
        v194635609 = v194635134;
        bRfW$__fW$__fNumeric_floatToDigits$d24u94:;
        {   uint16_t v100276 = (((int32_t)0) <= ((int32_t)v194635609));
            if (0 == v100276) {
                uint32_t v135370992 = (-((int32_t)v194635609));
                {   wptr_t v100290;
                    uintmax_t v154420600;
                    uintmax_t v242479194;
                    uintmax_t v260952206;
                    uintmax_t v44000682;
                    gc_frame0(gc,4,v44725871,v61835593,v182639594,v264254500);
                    v100290 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v61835593,v135370992);
                    v44000682 = ((struct sCJhc_Type_Basic_Integer*)v100290)->a1;
                    wptr_t v100292 = eval(gc,v182639594);
                    v242479194 = ((struct sCJhc_Type_Basic_Integer*)v100292)->a1;
                    wptr_t v100294 = eval(gc,v44725871);
                    v154420600 = ((struct sCJhc_Type_Basic_Integer*)v100294)->a1;
                    uintmax_t v256943492 = (v242479194 + v154420600);
                    uintmax_t v62470116 = (v44000682 * v256943492);
                    wptr_t v100296 = eval(gc,v264254500);
                    v260952206 = ((struct sCJhc_Type_Basic_Integer*)v100296)->a1;
                    uint16_t v100298 = (((intmax_t)v62470116) <= ((intmax_t)v260952206));
                    if (0 == v100298) {
                        uint32_t v98167652 = (1 + v194635609);
                        v61835593 = v61835593;
                        v264254500 = v264254500;
                        v44725871 = v44725871;
                        v182639594 = v182639594;
                        v194635609 = v98167652;
                        goto bRfW$__fW$__fNumeric_floatToDigits$d24u94;
                    } else {
                        /* 1 */
                        assert(1 == v100298);
                        return v194635609;
                    }
                }
            } else {
                /* 1 */
                assert(1 == v100276);
                {   wptr_t v100282;
                    uintmax_t v105553378;
                    uintmax_t v137248438;
                    uintmax_t v153480248;
                    uintmax_t v209623814;
                    gc_frame0(gc,4,v44725871,v61835593,v182639594,v264254500);
                    wptr_t v100278 = eval(gc,v182639594);
                    v153480248 = ((struct sCJhc_Type_Basic_Integer*)v100278)->a1;
                    wptr_t v100280 = eval(gc,v44725871);
                    v137248438 = ((struct sCJhc_Type_Basic_Integer*)v100280)->a1;
                    uintmax_t v253468956 = (v153480248 + v137248438);
                    v100282 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v61835593,v194635609);
                    v209623814 = ((struct sCJhc_Type_Basic_Integer*)v100282)->a1;
                    wptr_t v100284 = eval(gc,v264254500);
                    v105553378 = ((struct sCJhc_Type_Basic_Integer*)v100284)->a1;
                    uintmax_t v61835120 = (v209623814 * v105553378);
                    uint16_t v100286 = (((intmax_t)v253468956) <= ((intmax_t)v61835120));
                    if (0 == v100286) {
                        uint32_t v44725404 = (1 + v194635609);
                        v61835593 = v61835593;
                        v264254500 = v264254500;
                        v44725871 = v44725871;
                        v182639594 = v182639594;
                        v194635609 = v44725404;
                        goto bRfW$__fW$__fNumeric_floatToDigits$d24u94;
                    } else {
                        /* 1 */
                        assert(1 == v100286);
                        return v194635609;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d25(gc_t gc,wptr_t v211219932,sptr_t v134427062,sptr_t v202526176,sptr_t v268164216,sptr_t v53399310,sptr_t v1728710173)
{
        sptr_t v211220077 = demote(v211219932);
        {   gc_frame0(gc,6,v53399310,v134427062,v202526176,v211219932,v211220077,v268164216);
            wptr_t v100030 = eval(gc,v1728710173);
            {   wptr_t v1197;
                wptr_t v1813;
                sptr_t v3182;
                sptr_t v596;
                uintmax_t v17805442;
                uintmax_t v192;
                uint32_t v234543524;
                uintmax_t v598;
                uintmax_t v600;
                uintmax_t v602;
                struct tup11 x108;
                gc_frame0(gc,1,v100030);
                wptr_t v100032 = eval(gc,v134427062);
                v3182 = ((struct sCJhc_Prim_Prim_$LcccR*)v100032)->a4;
                wptr_t v100034 = eval(gc,v3182);
                v234543524 = ((struct sCJhc_Type_Word_Int*)v100030)->a1;
                uint16_t v73127152 = (((int32_t)0) <= ((int32_t)v234543524));
                v17805442 = ((struct sCJhc_Type_Basic_Integer*)v100034)->a1;
                if (0 == v73127152) {
                    wptr_t v100052;
                    uintmax_t v108076;
                    uintmax_t v112431790;
                    uintmax_t v130564412;
                    uintmax_t v236397358;
                    uint32_t v187779984 = (-((int32_t)v234543524));
                    v100052 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v211219932,v187779984);
                    v236397358 = ((struct sCJhc_Type_Basic_Integer*)v100052)->a1;
                    wptr_t v100054 = eval(gc,v268164216);
                    v108076 = ((struct sCJhc_Type_Basic_Integer*)v100054)->a1;
                    uintmax_t v73043328 = (v108076 * v236397358);
                    uintmax_t v253808490 = (v17805442 * v236397358);
                    wptr_t v100056 = eval(gc,v53399310);
                    v112431790 = ((struct sCJhc_Type_Basic_Integer*)v100056)->a1;
                    uintmax_t v27092184 = (v112431790 * v236397358);
                    wptr_t v100058 = eval(gc,v202526176);
                    v130564412 = ((struct sCJhc_Type_Basic_Integer*)v100058)->a1;
                    x108.t0 = v211220077;
                    x108.t1 = v27092184;
                    x108.t2 = v130564412;
                    x108.t3 = v73043328;
                    x108.t4 = v253808490;
                } else {
                    wptr_t v100036;
                    uintmax_t v108744;
                    uintmax_t v120668476;
                    uintmax_t v154420606;
                    uintmax_t v158113096;
                    /* 1 */
                    assert(1 == v73127152);
                    v100036 = fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C(gc,v211219932,v234543524);
                    v108744 = ((struct sCJhc_Type_Basic_Integer*)v100036)->a1;
                    wptr_t v100038 = eval(gc,v202526176);
                    v120668476 = ((struct sCJhc_Type_Basic_Integer*)v100038)->a1;
                    uintmax_t v93822474 = (v120668476 * v108744);
                    wptr_t v100040 = eval(gc,v268164216);
                    v158113096 = ((struct sCJhc_Type_Basic_Integer*)v100040)->a1;
                    wptr_t v100042 = eval(gc,v53399310);
                    v154420606 = ((struct sCJhc_Type_Basic_Integer*)v100042)->a1;
                    x108.t0 = v211220077;
                    x108.t1 = v154420606;
                    x108.t2 = v93822474;
                    x108.t3 = v158113096;
                    x108.t4 = v17805442;
                }
                v596 = x108.t0;
                v598 = x108.t1;
                v600 = x108.t2;
                v602 = x108.t3;
                v192 = x108.t4;
                wptr_t v389 = promote(v596);
                v1197 = fW$__fW$__fNumeric_floatToDigits$d26(gc,v389,SET_RAW_TAG(CJhc_Prim_Prim_$BE),v598,v600,v602,v192);
                v1813 = fJhc_Basics_reverse(gc,v1197);
                return fW$__fW$__fNumeric_floatToDigits$d31(gc,v1813);
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d26(gc_t gc,wptr_t v67338508,wptr_t v117740416,uintmax_t v232701278,uintmax_t v256943490,uintmax_t v62470118,uintmax_t v260457472)
{
        wptr_t v117740726;
        wptr_t v67338817;
        uintmax_t v232701589;
        uintmax_t v256943802;
        uintmax_t v260457786;
        uintmax_t v62470431;
        v67338817 = v67338508;
        v117740726 = v117740416;
        v232701589 = v232701278;
        v256943802 = v256943490;
        v62470431 = v62470118;
        v260457786 = v260457472;
        bRfW$__fW$__fNumeric_floatToDigits$d26u56:;
        {   sptr_t v117741335 = demote(v117740726);
            {   gc_frame0(gc,2,v67338817,v117741335);
                wptr_t x57 = s_alloc(gc,cCJhc_Type_Basic_Integer);
                ((struct sCJhc_Type_Basic_Integer*)x57)->a1 = v256943802;
                wptr_t v357 = x57;
                sptr_t v44725400 = demote(v357);
                {   sptr_t v59150084;
                    sptr_t v67443748;
                    struct tup1 x59;
                    gc_frame0(gc,1,v44725400);
                    sptr_t x58 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d27);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d27*)x58)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d27);
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d27*)x58)->a1 = v67338817;
                    ((struct sFW$__fW$__fNumeric_floatToDigits$d27*)x58)->a2 = v232701589;
                    sptr_t v135991280 = MKLAZY(x58);
                    x59 = fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,SET_RAW_TAG(TJhc_Type_Basic_Integer),v135991280,v44725400);
                    v67443748 = x59.t0;
                    v59150084 = x59.t1;
                    {   uintmax_t v183644104;
                        uintmax_t v264254032;
                        gc_frame0(gc,1,v67443748);
                        wptr_t v100072 = eval(gc,v59150084);
                        v264254032 = ((struct sCJhc_Type_Basic_Integer*)v100072)->a1;
                        v183644104 = ((struct sCJhc_Type_Basic_Integer*)v67338817)->a1;
                        uintmax_t v72360250 = (v260457786 * v183644104);
                        uint16_t v138937716 = (((intmax_t)v264254032) < ((intmax_t)v72360250));
                        uintmax_t v206784658 = (v62470431 * v183644104);
                        uintmax_t v234543190 = (v264254032 + v206784658);
                        uint16_t v91126072 = (((intmax_t)v234543190) > ((intmax_t)v256943802));
                        if (0 == v138937716) {
                            if (0 == v91126072) {
                                wptr_t x60 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x60)->a1 = v67443748;
                                ((struct sCJhc_Prim_Prim_$x3a*)x60)->a2 = v117741335;
                                wptr_t v373 = x60;
                                v67338817 = v67338817;
                                v117740726 = v373;
                                v232701589 = v264254032;
                                v256943802 = v256943802;
                                v62470431 = v206784658;
                                v260457786 = v72360250;
                                goto bRfW$__fW$__fNumeric_floatToDigits$d26u56;
                            } else {
                                /* 1 */
                                assert(1 == v91126072);
                                sptr_t x61 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d28);
                                ((struct sFW$__fW$__fNumeric_floatToDigits$d28*)x61)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d28);
                                ((struct sFW$__fW$__fNumeric_floatToDigits$d28*)x61)->a1 = v67443748;
                                sptr_t v59213654 = MKLAZY(x61);
                                {   gc_frame0(gc,1,v59213654);
                                    wptr_t x62 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                    ((struct sCJhc_Prim_Prim_$x3a*)x62)->a1 = v59213654;
                                    ((struct sCJhc_Prim_Prim_$x3a*)x62)->a2 = v117741335;
                                    return x62;
                                }
                            }
                        } else {
                            sptr_t v1605;
                            sptr_t v319;
                            struct tup1 x63;
                            /* 1 */
                            assert(1 == v138937716);
                            if (0 == v91126072) {
                                x63.t0 = v67443748;
                                x63.t1 = v117741335;
                            } else {
                                /* 1 */
                                assert(1 == v91126072);
                                uintmax_t v190594774 = (2 * v264254032);
                                uint16_t v100076 = (((intmax_t)v190594774) < ((intmax_t)v256943802));
                                if (0 == v100076) {
                                    sptr_t x64 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d29);
                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d29*)x64)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d29);
                                    ((struct sFW$__fW$__fNumeric_floatToDigits$d29*)x64)->a1 = v67443748;
                                    sptr_t v96741324 = MKLAZY(x64);
                                    x63.t0 = v96741324;
                                    x63.t1 = v117741335;
                                } else {
                                    /* 1 */
                                    assert(1 == v100076);
                                    x63.t0 = v67443748;
                                    x63.t1 = v117741335;
                                }
                            }
                            v1605 = x63.t0;
                            v319 = x63.t1;
                            {   gc_frame0(gc,2,v319,v1605);
                                wptr_t x65 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                                ((struct sCJhc_Prim_Prim_$x3a*)x65)->a1 = v1605;
                                ((struct sCJhc_Prim_Prim_$x3a*)x65)->a2 = v319;
                                return x65;
                            }
                        }
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d27(gc_t gc,wptr_t v51476038,uintmax_t v154420602)
{
        uintmax_t v159664608;
        v159664608 = ((struct sCJhc_Type_Basic_Integer*)v51476038)->a1;
        uintmax_t v3497556 = (v154420602 * v159664608);
        wptr_t x18 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x18)->a1 = v3497556;
        return x18;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d28(gc_t gc,sptr_t v264446462)
{
        uintmax_t v63362408;
        wptr_t v100080 = eval(gc,v264446462);
        v63362408 = ((struct sCJhc_Type_Basic_Integer*)v100080)->a1;
        uintmax_t v29726858 = (1 + v63362408);
        wptr_t x17 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x17)->a1 = v29726858;
        return x17;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d29(gc_t gc,sptr_t v250404512)
{
        uintmax_t v90747886;
        wptr_t v100078 = eval(gc,v250404512);
        v90747886 = ((struct sCJhc_Type_Basic_Integer*)v100078)->a1;
        uintmax_t v207134660 = (1 + v90747886);
        wptr_t x16 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x16)->a1 = v207134660;
        return x16;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d3(gc_t gc,double v4342)
{
        saved_gc = gc;
        double v253015758 = ((double)ldexp((double)v4342,(int)53));
        uintmax_t v263821002 = ((intmax_t)v253015758);
        wptr_t x24 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x24)->a1 = v263821002;
        return x24;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d30(gc_t gc,sptr_t v1066)
{
        uintmax_t v135370990;
        wptr_t v100024 = eval(gc,v1066);
        v135370990 = ((struct sCJhc_Type_Basic_Integer*)v100024)->a1;
        uint32_t v29375120 = ((uint32_t)v135370990);
        wptr_t x12 = s_alloc(gc,cCJhc_Type_Word_Int);
        ((struct sCJhc_Type_Word_Int*)x12)->a1 = v29375120;
        return x12;
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d31(gc_t gc,wptr_t v2976460)
{
        sptr_t v2976663 = demote(v2976460);
        return fJhc_Basics_45__go(gc,v2976663);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d4(gc_t gc,sptr_t v1679951403)
{
        sptr_t v3234;
        wptr_t v100122 = eval(gc,v1679951403);
        v3234 = ((struct sCJhc_Prim_Prim_$LcR*)v100122)->a2;
        return eval(gc,v3234);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d5(gc_t gc,sptr_t v208364912,sptr_t v28059878)
{
        {   sptr_t v358;
            sptr_t v733;
            uint32_t v16184236;
            struct tup1 x73;
            gc_frame0(gc,2,v28059878,v208364912);
            wptr_t v100118 = eval(gc,v28059878);
            v16184236 = ((struct sCJhc_Type_Word_Int*)v100118)->a1;
            uint32_t v53416706 = (-1074 - v16184236);
            uint16_t v113353658 = (((int32_t)0) < ((int32_t)v53416706));
            sptr_t x72 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d6);
            ((struct sFW$__fW$__fNumeric_floatToDigits$d6*)x72)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d6);
            ((struct sFW$__fW$__fNumeric_floatToDigits$d6*)x72)->a1 = v208364912;
            sptr_t v90105168 = MKLAZY(x72);
            if (0 == v113353658) {
                x73.t0 = v90105168;
                x73.t1 = v28059878;
            } else {
                /* 1 */
                assert(1 == v113353658);
                uint32_t v13803848 = (v16184236 + v53416706);
                {   gc_frame0(gc,1,v90105168);
                    sptr_t x74 = s_alloc(gc,cFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C);
                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x74)->head = TO_FPTR(&E__fW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C);
                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x74)->a1 = PROMOTE(c9);
                    ((struct sFW$__fSpec$__Jhc_Numeric_20_fJhc_Numeric_$C*)x74)->a2 = v53416706;
                    sptr_t v212413206 = MKLAZY(x74);
                    {   gc_frame0(gc,1,v212413206);
                        sptr_t x75 = s_alloc(gc,cFW$__fW$__fNumeric_floatToDigits$d7);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d7*)x75)->head = TO_FPTR(&E__fW$__fW$__fNumeric_floatToDigits$d7);
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d7*)x75)->a1 = v212413206;
                        ((struct sFW$__fW$__fNumeric_floatToDigits$d7*)x75)->a2 = v90105168;
                        sptr_t v119589970 = MKLAZY(x75);
                        {   gc_frame0(gc,1,v119589970);
                            wptr_t x76 = s_alloc(gc,cCJhc_Type_Word_Int);
                            ((struct sCJhc_Type_Word_Int*)x76)->a1 = v13803848;
                            wptr_t v420 = x76;
                            sptr_t v233866754 = demote(v420);
                            x73.t0 = v119589970;
                            x73.t1 = v233866754;
                        }
                    }
                }
            }
            v733 = x73.t0;
            v358 = x73.t1;
            {   gc_frame0(gc,2,v358,v733);
                wptr_t x77 = s_alloc(gc,cCJhc_Prim_Prim_$LcR);
                ((struct sCJhc_Prim_Prim_$LcR*)x77)->a1 = v733;
                ((struct sCJhc_Prim_Prim_$LcR*)x77)->a2 = v358;
                return x77;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d6(gc_t gc,sptr_t v174020696)
{
        sptr_t v3236;
        wptr_t v100120 = eval(gc,v174020696);
        v3236 = ((struct sCJhc_Prim_Prim_$LcR*)v100120)->a1;
        return eval(gc,v3236);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d7(gc_t gc,sptr_t v240844478,sptr_t v1688602143)
{
        sptr_t v153819166;
        struct tup1 x55;
        x55 = fW$__fInstance$__iJhc_Class_Real_divMod_default(gc,SET_RAW_TAG(TJhc_Type_Basic_Integer),v1688602143,v240844478);
        v153819166 = x55.t0;
        return eval(gc,v153819166);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d8(gc_t gc,sptr_t v1702102573)
{
        sptr_t v3228;
        wptr_t v100116 = eval(gc,v1702102573);
        v3228 = ((struct sCJhc_Prim_Prim_$LcR*)v100116)->a2;
        return eval(gc,v3228);
}

static wptr_t A_STD A_MALLOC
fW$__fW$__fNumeric_floatToDigits$d9(gc_t gc,sptr_t v207549704)
{
        sptr_t v3222;
        wptr_t v100114 = eval(gc,v207549704);
        v3222 = ((struct sCJhc_Prim_Prim_$LcR*)v100114)->a1;
        return eval(gc,v3222);
}

static void A_STD
ftheMain(gc_t gc)
{
        sptr_t v10;
        wptr_t v100000;
        v100000 = fJhc_Basics_$pp(gc,SET_RAW_TAG($_hole),g844905495,(sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
        sptr_t v133921598 = demote(v100000);
        v10 = v133921598;
        fJhc_Monad_72__go__10:;
        {   wptr_t v100004 = eval(gc,v10);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100004) {
                SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v69432558;
                sptr_t v88379832;
                /* ("CJhc.Prim.Prim.:" ni69432558 ni88379832) */
                v69432558 = ((struct sCJhc_Prim_Prim_$x3a*)v100004)->a1;
                v88379832 = ((struct sCJhc_Prim_Prim_$x3a*)v100004)->a2;
                {   uint32_t v215884494;
                    gc_frame0(gc,1,v88379832);
                    wptr_t v100006 = eval(gc,v69432558);
                    v215884494 = ((uint32_t)RAW_GET_UF(v100006));
                    uint32_t v243292918 = v215884494;
                    saved_gc = gc;
                    (void)jhc_utf8_putchar((int)v243292918);
                    v10 = v88379832;
                    goto fJhc_Monad_72__go__10;
                }
            }
        }
        saved_gc = gc;
        return (void)jhc_utf8_putchar((int)10);
}

static wptr_t A_STD A_MALLOC
ftheMain$d10(gc_t gc,sptr_t v215350918)
{
        uint16_t v3052;
        wptr_t v100026 = eval(gc,v215350918);
        v3052 = ((uint16_t)RAW_GET_UF(v100026));
        if (0 == v3052) {
            sptr_t v10527816;
            sptr_t v137248436;
            struct tup1 x140;
            x140 = fW$__fW$__fNumeric_floatToDigits(gc,PROMOTE(c21),2.8957571600107794e-36);
            v10527816 = x140.t0;
            v137248436 = x140.t1;
            return fW$__fNumeric_67__doFmt(gc,2,v10527816,v137248436);
        } else {
            /* 1 */
            assert(1 == v3052);
            return PROMOTE(c22);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d11(gc_t gc)
{
        saved_gc = gc;
        uint32_t v100014 = ((uint32_t)signbit((double)2.8957571600107794e-36));
        if (0 == v100014) {
            return RAW_SET_UF(0);
        } else {
            return RAW_SET_UF(1);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d12(gc_t gc)
{
        saved_gc = gc;
        uint32_t v100008 = ((uint32_t)isnan((double)2.8957571600107794e-36));
        if (0 == v100008) {
            saved_gc = gc;
            uint32_t v100010 = ((uint32_t)isinf((double)2.8957571600107794e-36));
            if (0 == v100010) {
                sptr_t v673;
                if (0 == (0.0 == 2.8957571600107794e-36)) {
                    v673 = ((sptr_t)RAW_SET_UF(0));
                } else {
                    /* 1 */
                    assert(1 == (0.0 == 2.8957571600107794e-36));
                    v673 = g842021911;
                }
                return ftheMain$d10(gc,v673);
            } else {
                return PROMOTE(c30);
            }
        } else {
            return PROMOTE(c33);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc,sptr_t v59150088)
{
        uint32_t v264254030;
        uint32_t v44725406;
        wptr_t v100164 = eval(gc,v59150088);
        v264254030 = ((struct sCJhc_Type_Word_Int*)v100164)->a1;
        v44725406 = fW$__fPrelude_CType_intToDigit(gc,v264254030);
        return RAW_SET_UF(v44725406);
}

static wptr_t A_STD A_MALLOC
ftheMain$d3(gc_t gc,sptr_t v235511026)
{
        wptr_t v100162 = eval(gc,v235511026);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100162) {
            return v100162;
        } else {
            sptr_t v135170744;
            sptr_t v29821312;
            /* ("CJhc.Prim.Prim.:" ni135170744 ni29821312) */
            v135170744 = ((struct sCJhc_Prim_Prim_$x3a*)v100162)->a1;
            v29821312 = ((struct sCJhc_Prim_Prim_$x3a*)v100162)->a2;
            {   gc_frame0(gc,2,v29821312,v135170744);
                sptr_t x105 = s_alloc(gc,cFtheMain$d2);
                ((struct sFtheMain$d2*)x105)->head = TO_FPTR(&E__ftheMain$d2);
                ((struct sFtheMain$d2*)x105)->a1 = v135170744;
                sptr_t v52590392 = MKLAZY(x105);
                {   gc_frame0(gc,1,v52590392);
                    sptr_t x106 = s_alloc(gc,cFtheMain$d3);
                    ((struct sFtheMain$d3*)x106)->head = TO_FPTR(&E__ftheMain$d3);
                    ((struct sFtheMain$d3*)x106)->a1 = v29821312;
                    sptr_t v119514820 = MKLAZY(x106);
                    {   gc_frame0(gc,1,v119514820);
                        wptr_t x107 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x107)->a1 = v52590392;
                        ((struct sCJhc_Prim_Prim_$x3a*)x107)->a2 = v119514820;
                        return x107;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d4(gc_t gc,sptr_t v122527200)
{
        uint32_t v248470270;
        wptr_t v100346 = eval(gc,v122527200);
        v248470270 = ((struct sCJhc_Type_Word_Int*)v100346)->a1;
        uint32_t v59914986 = (v248470270 - 1);
        return fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int(gc,0,v59914986,SET_RAW_TAG(CJhc_Prim_Prim_$BE));
}

static wptr_t A_STD A_MALLOC
ftheMain$d5(gc_t gc,sptr_t v216085088)
{
        uint32_t v36469144;
        wptr_t v100344 = eval(gc,v216085088);
        v36469144 = ((struct sCJhc_Type_Word_Int*)v100344)->a1;
        uint32_t v169458480 = (v36469144 - 1);
        return fW$__fInstance$__iJhc_Show_showsPrec_Jhc_Type_Word_Int(gc,0,v169458480,SET_RAW_TAG(CJhc_Prim_Prim_$BE));
}

static wptr_t A_STD A_MALLOC
ftheMain$d6(gc_t gc,uint32_t v157166250,sptr_t v1629750813)
{
        wptr_t v100156;
        v100156 = fW$__fJhc_Basics_drop(gc,v157166250,v1629750813);
        if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100156) {
            return PROMOTE(c1);
        } else {
            sptr_t v14441426;
            sptr_t v170257032;
            /* ("CJhc.Prim.Prim.:" ni14441426 ni170257032) */
            v14441426 = ((struct sCJhc_Prim_Prim_$x3a*)v100156)->a1;
            v170257032 = ((struct sCJhc_Prim_Prim_$x3a*)v100156)->a2;
            {   gc_frame0(gc,2,v14441426,v170257032);
                wptr_t x11 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x11)->a1 = v14441426;
                ((struct sCJhc_Prim_Prim_$x3a*)x11)->a2 = v170257032;
                return x11;
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d7(gc_t gc,uint32_t v108955764)
{
        uint16_t v100016 = (((int32_t)0) >= ((int32_t)v108955764));
        if (0 == v100016) {
            uint32_t v194508210 = (v108955764 - 1);
            sptr_t x102 = s_alloc(gc,cFtheMain$d7);
            ((struct sFtheMain$d7*)x102)->head = TO_FPTR(&E__ftheMain$d7);
            ((struct sFtheMain$d7*)x102)->a1 = v194508210;
            sptr_t v80256468 = MKLAZY(x102);
            {   gc_frame0(gc,1,v80256468);
                wptr_t x103 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x103)->a1 = ((sptr_t)RAW_SET_UF('0'));
                ((struct sCJhc_Prim_Prim_$x3a*)x103)->a2 = v80256468;
                return x103;
            }
        } else {
            /* 1 */
            assert(1 == v100016);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d8(gc_t gc,uint32_t v114991274,sptr_t v167886982)
{
        {   wptr_t v100148;
            wptr_t v100152;
            gc_frame0(gc,1,v167886982);
            v100148 = ftheMain$d7(gc,v114991274);
            sptr_t v80660166 = demote(v100148);
            v100152 = fJhc_Basics_$pp(gc,SET_RAW_TAG($_hole),v80660166,v167886982);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100152) {
                return PROMOTE(c1);
            } else {
                sptr_t v246604782;
                sptr_t v263341212;
                /* ("CJhc.Prim.Prim.:" ni246604782 ni263341212) */
                v246604782 = ((struct sCJhc_Prim_Prim_$x3a*)v100152)->a1;
                v263341212 = ((struct sCJhc_Prim_Prim_$x3a*)v100152)->a2;
                {   gc_frame0(gc,2,v246604782,v263341212);
                    wptr_t x104 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x104)->a1 = v246604782;
                    ((struct sCJhc_Prim_Prim_$x3a*)x104)->a2 = v263341212;
                    return x104;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
ftheMain$d9(gc_t gc)
{
        sptr_t v260457468;
        sptr_t v62470114;
        struct tup1 x139;
        x139 = fW$__fW$__fNumeric_floatToDigits(gc,PROMOTE(c21),-2.8957571600107794e-36);
        v62470114 = x139.t0;
        v260457468 = x139.t1;
        return fW$__fNumeric_67__doFmt(gc,2,v62470114,v260457468);
}
