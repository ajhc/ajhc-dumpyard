#include "OSThreads.h"

jhc_threadid_t
forkOS_createThread(void *wrapper, void *entry, int *err)
{
	pthread_t tid;
        *err = pthread_create(&tid, NULL, wrapper, entry);
	if (*err) {
		pthread_detach(tid);
	}
	return tid;
}
