#ifndef _OS_THREADS_H
#define _OS_THREADS_H

#define _JHC_CONC_NONE    0
#define _JHC_CONC_PTHREAD 1
#define _JHC_CONC_CUSTOM  2

#ifndef _JHC_CONC
#define _JHC_CONC _JHC_CONC_PTHREAD
#endif

#if _JHC_CONC == _JHC_CONC_NONE
typedef int jhc_threadid_t;
typedef int jhc_mutex_t;
#define jhc_mutex_init(MP)	(*(MP) = 0)
#define jhc_mutex_lock(M)	do { } while (/* CONSTCOND */ 0)
#define jhc_mutex_unlock(M)	do { } while (/* CONSTCOND */ 0)

#elif _JHC_CONC == _JHC_CONC_PTHREAD
#include <pthread.h>
typedef pthread_t jhc_threadid_t;
typedef pthread_mutex_t jhc_mutex_t;
#define jhc_mutex_init(MP)	(void) pthread_mutex_init((MP), NULL)
#define jhc_mutex_lock(M)	pthread_mutex_lock((M))
#define jhc_mutex_unlock(M)	pthread_mutex_unlock((M))

#elif _JHC_CONC == _JHC_CONC_CUSTOM
/* You should impl "jhc_threadid_t" and "jhc_mutex_t". */
void jhc_mutex_init(jhc_mutex_t *mutexp)
void jhc_mutex_lock(jhc_mutex_t mutex)
void jhc_mutex_unlock(jhc_mutex_t mutex)

#else
#error "You should choose _JHC_CONC."

#endif /* _JHC_CONC == ??? */

/* Common functions */
jhc_threadid_t forkOS_createThread(void *(*wrapper) (void *), void *entry, int *err);

#endif /* _OS_THREADS_H */
