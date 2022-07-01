#include <stdio.h>
#include <string.h>

#include "util_string.h"

int main()
{
	char *src = "hello, world";
	char *ptr = NULL;


	ptr = util_search(src, "world", strlen(src));

	printf ("ptr %s\n", ptr);

	return 0;
}
