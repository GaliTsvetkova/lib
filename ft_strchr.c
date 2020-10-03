/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:25:49 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/01 15:40:12 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		k;

	i = ft_strlen(s) + 1;
	k = 0;
	while (k < i)
	{
		if (s[k] == (unsigned char)c)
			return ((char *)s + k);
		k++;
	}
	return (NULL);
}
