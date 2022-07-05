#include <stdio.h>
#include <string.h>

#define sncatprintf(b, n, fmt, args...) snprintf(&(b[strlen(b)]), n-strlen(b), fmt, ## args)
