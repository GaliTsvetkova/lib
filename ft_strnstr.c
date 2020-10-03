/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:03:15 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/01 11:50:35 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	hlen;

	nlen = ft_strlen(needle);
	hlen = ft_strlen(haystack);
	if (*needle == 0)
		return ((char *)haystack);
	if (*haystack == 0)
		return (NULL);
	while (nlen <= len && hlen > 0)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, nlen) == 0)
				return ((char *)(haystack));
		}
		haystack++;
		len--;
		hlen--;
	}
	return (0);
}
