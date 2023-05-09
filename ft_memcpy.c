#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n) 
{
    size_t  i;
    char *d;
    const char *s;
    
    d = dest;
    s = src;
    i = 0;
    while (i < n) 
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
