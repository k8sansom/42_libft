#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(void)
{
    printf("mine: %d\n", ft_atoi(" 		-12345678"));
	printf("lib: %d\n", atoi(" 		-12345678"));
	/*char src[] = "Help me!";
    char dest[] = "Please???";
    char dest1[] = "Hello??";
    printf("%s", (char *)ft_memcpy(dest, src, 3));
    printf("\n%s", (char *)memcpy(dest, src, 3));
    printf("\n%s", (char *)ft_memcpy(dest1, src, 7));
    printf("\n%s", (char *)memcpy(dest1, src, 7));*/

	//char *str = "Foo Bar baz";
	//char *str1 = "Foo Bar Baz";
	//unsigned char c = 'B';
    //printf("%s", (char *)ft_memcpy(str1, str, 3));
    //printf("\n%s", (char *)memcpy(str1, str, 3));
    //printf("\n%s", (char *)ft_memcpy(str1, str, 7));
    //printf("\n%s", (char *)memcpy(str1, str, 7));
	//printf("mine: %d\n", ft_memcmp(str, str1, 20));
	//printf("lib: %d\n", memcmp(str, str1, 20));
	//char *mine = ft_memchr(str, c, 2);
	//char *lib = memchr(str1, c, 2);
	//printf("mine: %s\n", mine);
	//printf("lib: %s\n", lib);
	/*printf("mine: %s\n", ft_strnstr("Foo Bar Baz", "Bar", 6));
	printf("theirs: %s\n", strnstr("Foo Bar Baz", "Bar", 4));*/
	//printf("%s\n", ft_substr("But do they know what to do?", 12, 16));
	return (0);
}
