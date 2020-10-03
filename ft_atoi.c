/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:56:21 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/01 14:48:30 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	k;
	int			znak;

	k = 0;
	znak = 1;
	while (*str == '\n' || *str == '\v' || *str == '\t' ||
			*str == '\r' || *str == ' ' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			znak = -1;
		str++;
	}
	if (*str == 0)
		return (0);
	while (*str <= '9' && *str >= '0')
	{
		k = k * 10 + (*str - '0');
		str++;
	}
	return ((int)k * znak);
}
