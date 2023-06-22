/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksansom <ksansom@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:21:05 by ksansom           #+#    #+#             */
/*   Updated: 2023/05/24 14:23:04 by ksansom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*first;
	void	*t;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		t = f(lst->content);
		first = ft_lstnew(t);
		if (!(first))
		{
			ft_lstclear(&new_lst, del);
			free(t);
			return (0);
		}
		ft_lstadd_back(&new_lst, first);
		lst = lst->next;
	}
	return (new_lst);
}
