#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	trim;

	str = ft_strdup(s1);
	trim = ft_strncmp(s1, set, ft_strlen(s1));
}