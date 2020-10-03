/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 14:08:56 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/06 14:24:19 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*blst;

	blst = *alst;
	if (!(alst) || !(*alst))
		return ;
	while (blst)
	{
		del(blst->content, blst->content_size);
		free(blst);
		blst = blst->next;
	}
	*alst = NULL;
}
