/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 19:39:01 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/05 16:32:02 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*make_itoa(long long nb, char *arr, int len)
{
	if (nb < 0)
	{
		arr[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		arr[len - 1] = '0';
	arr[len] = '\0';
	while (len > 0 && nb > 0)
	{
		arr[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (arr);
}

char		*ft_itoa(int n)
{
	char		*arr;
	int			len;
	long long	nb;

	nb = n;
	len = count_len((int)nb);
	if (!(arr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (!(arr = make_itoa(nb, arr, len)))
		return (NULL);
	return (arr);
}
