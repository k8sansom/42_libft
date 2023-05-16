/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:43:38 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:43:49 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digit_count(long n)
{
	size_t	i;

	if (n > 0)
		i = 0;
	else
		i = 1;
	while (n) 
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	convert_str(long n, char *str, size_t count)
{
	int		j;
	long 	temp;

	j = count;
	temp = n;
	while (temp != 0)
	{
		str[j] = '0' + (n % 10);
		temp /= 10;
		j--;
	}
}

char *ft_itoa(int n)
{
	size_t	size;
	char	*str;
	long	num;

	num = n;
	size = digit_count(num);
	if (num > 0)
		num = num;
	else
		num = -num;
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size - 1] = '\0';
	while (num > 0)
	{
		*(str + size--) = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
