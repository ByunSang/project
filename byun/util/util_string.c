#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *util_search(char *src, const char *pattern, int src_len)
{
	int idx = 0, pattern_len = 0;

	pattern_len = strlen(pattern);

	if (pattern_len == 0 || pattern_len > src_len) return NULL;

	for (idx = 0; idx <= (src_len-pattern_len); idx++){
		if ((src[0] == pattern[0]) && (strncmp(src, pattern, pattern_len) == 0)) 
			return (char *)src;
	
		src++;
	}

	return NULL;
}

static char *__util_replace(char *src, const char *from, const char *to, int *is_replaced)
{
	int idx = 0, count = 0, from_len = 0, to_len = 0, src_len = 0;
	char *result = NULL, *ptr = NULL;

	from_len = strlen(from);
	to_len = strlen(to);
	src_len = strlen(src);
	
	if (from_len == 0) 
		return src;

	for (idx = 0; src[idx] != '\0';)
	{
		if (memcmp(&src[idx], from, from_len) == 0)
		{
			count++;
			idx += from_len;
			if (idx > src_len) 
				return src;
		}
		else
			idx++;
	}

	result = (char *)malloc(idx + 1 + (count * (to_len - from_len)) );

	if (result == NULL) 
		return NULL;

	if (count)
		*is_replaced = 1;

	ptr = result;

	while(*src)
	{
		if (memcmp(src, from, from_len) == 0)
		{
			memcpy(ptr, to, to_len);
			ptr += to_len;
			src += from_len;
		}
		else 
			*ptr++ = *src++;
	}

	*ptr = '\0';

	return result;
}

int util_replace(char *src, int src_len, const char *from, const char *to)
{
	int is_replaced = 0;
	char *result = NULL;

	result = __util_replace(src, from, to, &is_replaced);

	if (result)
	{
		if (result == src)
			return is_replaced;
		else {
			strncpy(src, result, src_len);
			free(result);
			result = NULL;
			return is_replaced;
		}
	}

	return is_replaced;
}

