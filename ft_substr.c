#include "libft.h"
#include "stdlib.h"
char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	size_t	i;
	char	*dest;

	sub_len = ft_strlen(s + start) + 1;
	i = 0;
	if (sub_len < len)
		len = sub_len;
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (0);
	while (i < (len - 1))
	{
		dest[i] = s[start + i];
		i++;
		
	}
	dest[i] = '\0';
	return (dest);
}