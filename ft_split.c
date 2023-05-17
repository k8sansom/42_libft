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

static char	*ft_dup_splits(const char *str, int start, int finish)
{
	char	*split;
	int		i;

	i = 0;
	split = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		split[i++] = str[start++];
	split[i] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**arr;

	i = 0;
	j = 0;
	index = -1;
	arr = malloc(sizeof(char *) * (ft_count_splits(s, c) + 1));
	if (!arr || !s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) \
			&& index >= 0 && index < (int)i)
		{
			arr[j++] = ft_dup_splits(s, index, i);
			index = -1;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}

/*#include <stdio.h>

void free_split(char **split) {
    if (split == NULL) {
        return;
    }

    char **temp = split;
    while (*temp != NULL) {
        free(*temp);
        temp++;
    }
    free(split);
}

void print_split(char **split) {
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

int main() {
    char const *str = "Hello ";
    char delimiter = ' ';

    // Split the string
    char **split = ft_split(str, delimiter);

    // Print the split array
    printf("Split Array:\n");
    print_split(split);

    // Free the memory allocated for the split array
    free_split(split);

    return 0;
}*/
