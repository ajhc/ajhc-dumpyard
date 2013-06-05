#include "OSThreads.h"

jhc_threadid_t
forkOS_createThread(void *entry, int *err)
{
	pthread_t tid;
        *err = pthread_create(&tid, NULL, entry, NULL);
	if (*err) {
		pthread_detach(tid);
	}
	return tid;
}
