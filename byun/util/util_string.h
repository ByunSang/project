#ifndef __UTIL_STRING_H
#define __UTIL_STRING_H

#include <stdio.h>

char *util_search(char *src, const char *pattern, int src_len);

int util_replace(char *src, int src_len, const char *from, const char *to);

#endif
