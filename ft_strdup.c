#include "libft.h"
#include "stdlib.h"
char *ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen(s) + 1;
	i = 0;
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (0);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}