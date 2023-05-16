/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:31:05 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:31:37 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s || start >= ft_strlen(s))
	{
		dest = (char *)malloc(sizeof(char));
		if (!dest)
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (s[i] && i < len && s[i + start])
	{
		dest[j] = s[i + start];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
