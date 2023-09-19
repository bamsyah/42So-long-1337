/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:20:29 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/19 14:36:16 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	str = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!str)
		return (0);
	i = -1;
	k = 0;
	while (++i < word_count(s, c))
	{
		str[i] = ft_calloc(word_len(&s[k], c) + 1, sizeof(char));
		while (s[k] == c)
			k++;
		j = 0;
		while (s[k] && s[k] != c)
			str[i][j++] = s[k++];
	}
	return (str);
}
