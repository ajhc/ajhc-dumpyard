#include <sys/time.h>
#include <unistd.h>
#include "jhc_rts_header.h"
#include "rts/conc.h"
#include "c_extern.h"

extern void timingDelayDecrement(void);

static uint32_t TimingDelay = 0;

uint32_t *
getTimingDelay()
{
        return &TimingDelay;
}

void *run_timingDelayDecrement(void *p)
{
	for (;;) {
#define MILLI_SEC(N)  ((N) * 1000)
		usleep(MILLI_SEC(100));
		timingDelayDecrement();
	}
	/* NOTREACHED */
	return NULL;
}

uint64_t
getTime()
{
	struct timeval time;
	gettimeofday(&time, NULL);

	return time.tv_sec;
}

int
main(int argc, char *argv[])
{
	int err;

        hs_init(&argc,&argv);
        if (jhc_setjmp(&jhc_uncaught)) {
                jhc_error("Uncaught Exception");
        } else {
		forkOS_createThread(&run_timingDelayDecrement, NULL, &err);
                _amain();
	}
        hs_exit();
        return 0;
}
