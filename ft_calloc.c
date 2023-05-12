/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:30:24 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:54:27 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
        	return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}

