/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:05:37 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 18:05:40 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (!b)
		return (NULL);
	while (len > 0)
	{
		*(unsigned char*)b++ = (unsigned char)c;
		len--;
	}
    return (b); 
}
