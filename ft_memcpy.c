#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n) 
{
    if (n != 0 || dest != src)
    {
        char *d;
        char *s;

        d = (char *)dest;
        s = (char *)src;
        while (n > 0)
        {
            *d++ = *s++;
            n--;
        }
    }
    return (dest);
}
