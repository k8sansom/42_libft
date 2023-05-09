#include "libft.h"
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	s_dest;
	size_t	s_src;

	i = 0;
	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	if (size < s_dest)
		s_src += size;
	else
		s_src += s_dest;
	while (src[i] != '\0' && (s_dest < (size - 1)) && size != 0)
	{
		dest[s_dest] = src[i];
		s_dest++;
		i++;
	}
	dest[s_dest] = '\0';
	return (s_src);
}