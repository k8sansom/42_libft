#include "libft.h"
#include "stdlib.h"
char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char *dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (0);
	while (i < (len - 1) && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}