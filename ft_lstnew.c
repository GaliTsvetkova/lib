/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 16:33:07 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/06 14:08:38 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*s;

	if (!(s = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		s->content = NULL;
		s->content_size = 0;
	}
	else
	{
		if (!(s->content = malloc(sizeof(*(s->content)) * content_size)))
		{
			free(s);
			s = NULL;
		}
		if (ft_memcpy(s->content, content, content_size) == NULL)
		{
			free(s);
			s = NULL;
		}
		s->content_size = content_size;
	}
	s->next = NULL;
	return (s);
}
