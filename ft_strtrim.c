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

char    *ft_strtrim(char const *s1, char const *set)
{
    char            *r;
    unsigned int    i;
    unsigned int    s;
    unsigned int    e;
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
    r = ((char *)malloc(sizeof(char) * (e - s + 2)));
    if (r == 0)
        return (0);
    while (s <= e)
    {
        r[i++] = s1[s++];
    }
    r[i] = '\0';
    return (r);
}
