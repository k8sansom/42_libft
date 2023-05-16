/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:36:13 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:36:16 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	i;
	unsigned int	s;
	unsigned int	e;

	i = 0;
	s = 0;
	if (s1 == 0 || set == 0)
		return (0);
	if (s1[s] == '\0')
		return ("");
	e = ft_strlen(s1) - 1;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	while (e > s && ft_strchr(set, s1[e]))
		e--;
	dest = ((char *)malloc(sizeof(char) * (e - s + 2)));
	if (!dest)
		return (0);
	while (s <= e)
	{
		dest[i++] = s1[s++];
	}
	dest[i] = '\0';
	return (dest);
}
