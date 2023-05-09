#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	
	d = dest;
	s = src;
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
    return (dest);
}
