#ifndef _OS_THREADS_H
#define _OS_THREADS_H

#include <pthread.h>

typedef pthread_t jhc_threadid_t;
typedef pthread_mutex_t jhc_mutex_t;

#define jhc_mutex_init(M)	(void) pthread_mutex_init((M), NULL)
#define jhc_mutex_lock(M)	pthread_mutex_lock((M))
#define jhc_mutex_unlock(M)	pthread_mutex_unlock((M))

pthread_t forkOS_createThread(void *entry, int *err);

#endif /* _OS_THREADS_H */
