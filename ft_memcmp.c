/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:34:12 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:35:53 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n != 0)
	{
		char *str1;
		char *str2;
		size_t  i;

		str1 = s1;
		str2 = s2;
		i = 0;
		while (n > 0)
		{
			if (*str1 != *str2)
				return (*str1 - *str2);
			str1++;
			str2++;
			n--;
		}
	}
	return (0);
}
