#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
	/*printf("mine: %s\n", ft_strnstr("Foo Bar Baz", "Bar", 6));
	printf("theirs: %s\n", strnstr("Foo Bar Baz", "Bar", 4));*/
	printf("%s\n", ft_substr("But do they know what to do?", 12, 16));
	return (0);
}
