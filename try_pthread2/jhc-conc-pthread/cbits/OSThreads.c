#include "OSThreads.h"

int
forkOS_createThread(void *entry)
{
	pthread_t tid;
	int result = pthread_create(&tid, NULL, entry, NULL);
	if (!result) {
		pthread_detach(tid);
	}
	return result;
}
