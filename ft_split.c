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

static int	ft_count_splits(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static void	ft_free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free (arr);
}

static char	**ft_actual(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			arr[i++] = ft_substr(s - j, 0, j);
			if (arr[i - 1] == 0)
			{
				ft_free_arr(arr);
				return (0);
			}
		}
		else
			++s;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = malloc(sizeof(char *) * (ft_count_splits(s, c) + 1));
	if (!arr || !s)
		return (0);
	ft_actual(arr, s, c);
	return (arr);
}

/*#include <stdio.h>

void print_split(char **split) 
{
    if (split == NULL) {
        printf("Split array is NULL\n");
        return;
    }

    char **temp = split;
    while (*temp != NULL) {
        printf("%s\n", *temp);
        temp++;
    }
}

int main() 
{
    char const *str = "";
    char delimiter = ',';

    // Split the string
    char **split = ft_split(str, delimiter);

    // Print the split array
    printf("Split Array:\n");
    print_split(split);
	free(split);
    return 0;
}*/
