/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:49:23 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:49:40 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		} 

	} 
	else 
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}            
	}
    return (dest);
}
