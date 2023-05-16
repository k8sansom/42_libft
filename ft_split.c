/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:29:15 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/12 16:29:25 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			i++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	arr = malloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!arr)
		return (0);
	while (s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				s++;
			arr[i++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdio.h>
int	main(void)
{
	char const	s[] = "How we doing over here?";
	char c = " ";

	printf("split: %s\n", ft_split(s, c));
	return (0);
}
