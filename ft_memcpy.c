/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:41:51 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:43:25 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (n != 0 || dest != src)
	{
		char	*d;
		char	*s;

		d = (char *)dest;
		s = (char *)src;
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	return ((void *)dest);
}
