#include "OSThreads.h"

static void *
forkOS_createThreadWrapper(void *entry)
{
/*
	Capability *cap;
	cap = rts_lock();
	rts_evalStableIO(&cap, (HsStablePtr) entry, NULL);
	rts_unlock(cap);
*/
	return NULL;
}

int
forkOS_createThread(void *entry)
{
	pthread_t tid;
	int result = pthread_create(&tid, NULL, forkOS_createThreadWrapper, (void*)entry);
	if (!result) {
		pthread_detach(tid);
	}
	return result;
}
