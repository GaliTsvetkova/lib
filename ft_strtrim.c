/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:40:24 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/04 19:37:22 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ifwhite(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	n;
	size_t	k;
	size_t	len;
	size_t	i;

	n = 0;
	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (ft_ifwhite(s[n]) == 1)
		n++;
	while (ft_ifwhite(s[--len]) == 1)
		k++;
	if ((len + k + 1) == k)
		len = n + 1;
	if (!(str = (char *)malloc(sizeof(char) * (len - n + 2))))
		return (NULL);
	while (n < (len + 1))
		str[i++] = s[n++];
	str[i] = '\0';
	return (str);
}
