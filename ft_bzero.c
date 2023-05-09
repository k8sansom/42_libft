#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	char *p;    /*Cast the void pointer to a char pointer*/
	size_t i;

	p = s;
	i = 0;
	while (i < n)
	{
		*(p + i) = 0;
		i++;
	}
}
