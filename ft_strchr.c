#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if(c == 0)
        return (0);
    while (s[i] != '\0')
    {
       if (s[i] == c)
        return ((char *)&s[i]);
       i++;
       
    }
    return (0);
}