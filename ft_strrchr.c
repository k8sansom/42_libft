#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    if(c == 0)
        return (0);
    while (s[i] >= 0)
    {
       if (s[i] == c)
       {
        return ((char *)&s[i]);
       }
       i--;
       
    }
    return (0);
}