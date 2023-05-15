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
	size_t	i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)(str + i));
			i++;
	}
	return (NULL);
}
