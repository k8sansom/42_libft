#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	if (n != 0)
	{
		const unsigned char	*str;
		size_t	i;

		str = s;
		i = 0;
		while (n > 0)
		{
			if (*str == c)
				return ((void *)str);
			str++;
			n--;
		}
	}
	return (0);
}
