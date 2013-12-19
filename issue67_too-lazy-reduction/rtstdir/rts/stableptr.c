#include "sys/queue.h"
#include "jhc_rts_header.h"
#include "rts/stableptr.h"
#include "rts/conc.h"

struct StablePtr_list root_StablePtrs = LIST_HEAD_INITIALIZER();

wptr_t c_newStablePtr(sptr_t c) {
    struct StablePtr* sp = malloc(sizeof(struct StablePtr));
    sp->contents = c;

    jhc_rts_lock();
    LIST_INSERT_HEAD(&root_StablePtrs, sp, link);
    jhc_rts_unlock();

    assert(GET_PTYPE(sp) == 0);
    return (wptr_t)TO_SPTR(P_VALUE,(wptr_t)sp);
}

void c_freeStablePtr(wptr_t wp) {
    struct StablePtr *sp = FROM_SPTR((HsPtr)wp);

    jhc_rts_lock();
    LIST_REMOVE(sp, link);
    jhc_rts_unlock();

    free(sp);
}

sptr_t c_derefStablePtr(wptr_t wp) {
    struct StablePtr *sp = FROM_SPTR((HsPtr)wp);
    return sp->contents;
}

void hs_free_stable_ptr(HsStablePtr sp) {
        c_freeStablePtr((HsStablePtr)sp);
}
void hs_free_fun_ptr(HsFunPtr fp) {}

/*
wptr_t c_castPtrToStablePtr(void *)
void * c_castStablePtrToPtr(wptr_t)
*/
