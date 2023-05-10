#include <stdlib.h>
#include "libft.h"
void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t val;
	
	val = count * size;
	ptr = malloc(val);
	if (!ptr)
        	return (NULL);
    
    else
	{
		char *p;
	
		p = (char *)ptr;
		while (val > 0)
		{
			*p++ = 0;
			val--;
		}
	}
	return (ptr);
}

