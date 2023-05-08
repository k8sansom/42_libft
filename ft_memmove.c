#include "libft.h"
void *memmove(void *dst, const void *src, size_t len)
{
	char* d = dest;
	const char* s = src;
	if (d > s) 
	{
        	while (n--) 
            		d[n] = s[n];
	} 
	else 
	{
        	while (n--)
            		*d++ = *s++;
        }
    return dest;
}
