/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:25:38 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/03 19:30:22 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*src1;
	unsigned int	i;

	i = 0;
	src1 = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!src1)
		return (NULL);
	while (src[i] != '\0')
	{
		src1[i] = src[i];
		i++;
	}
	src1[i] = '\0';
	return (src1);
}
