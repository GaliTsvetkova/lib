/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:07:22 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/01 15:25:31 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	lens;
	unsigned int	lend;
	unsigned int	i;

	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lens);
	while (src[i] != '\0' && lend + i < size - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	if (size <= lend)
		return (lens + size);
	else
		return (lend + lens);
}
