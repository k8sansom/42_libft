#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	size_t	nb;
	char	c;

	if (n < 0)
	{
		write(fd, '-', 1);
		nb = -n;
	}
	else
		nb = n;
	while (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		nb %= 10;
	}
	c = nb + '0';
	write(fd, &c, 1);
}