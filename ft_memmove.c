#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	if (n != 0)
	{
		char *d;
		char *s;
		
		d = (char *)dest;
		s = (char *)src;
		if (d > s && (d - s < (int)n)) 
		{
			d += n - 1;
			s += n - 1;
			while (n > 0)
			{
				*d-- = *s--;
				n--;
			} 

		} 
		else 
		{
			while (n > 0)
			{
				*d++ = *s++;
				n--;
			}            
		}
	}
    return (dest);
}
