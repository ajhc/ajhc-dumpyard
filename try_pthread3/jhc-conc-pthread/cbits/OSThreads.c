#include "OSThreads.h"

extern void *forkOS_createThreadWrapper(void *);

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
