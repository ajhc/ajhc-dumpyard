#include <stdio.h>
#include "tmp/HsFFI.h"
extern int fib(int);

int main(int argc, char *argv[])
{
	int i;

	hs_init(&argc, &argv);
	for (i = 0; i < 30; i++) {
		printf("%d\n", fib(i));
	}
	hs_exit();
	return 0;
}
