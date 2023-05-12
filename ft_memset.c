#include "libft.h"
void *ft_memset(void *b, int c, size_t len)
{
	if (!b)
		return (NULL);
	while (len > 0)
	{
		*(unsigned char*)b++ = (unsigned char)c;
		len--;
	}
    return (b); 
}
