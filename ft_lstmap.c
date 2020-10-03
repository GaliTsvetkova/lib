/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 14:40:49 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/06 17:43:48 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*list;
	t_list	*m;
	t_list	*list1;

	if (!lst || !f)
		return (NULL);
	m = f(lst);
	if (!(list = ft_lstnew(m->content, m->content_size)))
		return (NULL);
	first = list;
	lst = lst->next;
	while (lst)
	{
		m = f(lst);
		if (!(list1 = ft_lstnew(m->content, m->content_size)))
			return (NULL);
		list->next = list1;
		list = list->next;
		lst = lst->next;
	}
	list->next = NULL;
	return (first);
}
