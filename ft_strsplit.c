/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljacquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 18:40:46 by ljacquet          #+#    #+#             */
/*   Updated: 2019/10/04 19:38:30 by ljacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		w_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != '\0' && s[i] != c)
		words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

static int		w_len(char const *s, char c)
{
	int	l;

	l = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

static char		**ft_free(char **arr)
{
	size_t	i;

	i = 0;
	if (!arr)
		return (NULL);
	while (arr[i])
	{
		ft_strdel(&arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if (!s || !(arr = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1))))
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(arr[i] = ft_strnew((w_len(s, c)))))
				ft_free(arr);
			while (*s != c && *s != '\0')
				arr[i][j++] = (char)*s++;
			arr[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	arr[i] = NULL;
	return (arr);
}
