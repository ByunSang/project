#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "util_string.h"
#include "util.h"
int main()
{
	char *src = "hello, world";
	char *ptr = NULL;

	EXECUTION_TIMER_INIT;
	EXECUTION_TIMER_START;
	
	sleep(1);

	ptr = util_search(src, "world", strlen(src));

	printf ("ptr %s %5.2lf\n ", ptr, EXECUTION_TIMER_CALC);

	return 0;
}
