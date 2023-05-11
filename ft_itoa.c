#include "libft.h"
#include <stdlib.h>
char *ft_itoa(int n)
{
	int		len;
	int		temp;
	char	*str;

	len = 1;
	temp = n / 10;
	while (temp > 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}