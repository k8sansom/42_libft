#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] || little[j] == '\0')
		{
			if (little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}