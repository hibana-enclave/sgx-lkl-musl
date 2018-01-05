#include <pthread.h>
#include "libc.h"

static int __pthread_equal(pthread_t a, pthread_t b)
{
	return a==b;
}

weak_alias(__pthread_equal, pthread_equal);
