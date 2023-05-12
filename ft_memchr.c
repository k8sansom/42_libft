/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:48:51 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:48:57 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n != 0)
	{
		const unsigned char	*str;
		size_t	i;

		str = s;
		i = 0;
		while (n > 0)
		{
			if (*str == c)
				return ((void *)str);
			str++;
			n--;
		}
	}
	return (0);
}
