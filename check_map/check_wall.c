/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:44:42 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/17 10:42:21 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	player_position(char **map)
{
	int	position;
	int	i;
	int	p;
	int	y;

	i = -1;
	p = 0;
	y = 0;
	while (map[++i])
	{
		position = -1;
		while (map[i][++position])
		{
			if (map[i][position] == 'P')
			{
				y = i;
				p = position;
			}
		}
	}
	if ((map[y][p - 1] == '1') && (map[y][p + 1] == '1')
	&& (map[y - 1][p] == '1') && (map[y + 1][p] == '1'))
		invalid_map();
}

void	check_wall(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[j])
		j++;
	while (map[0][i] && map[j - 1][i])
	{
		if ((map[0][i] != '1') || (map[j - 1][i] != '1'))
			invalid_map();
		i++;
	}
}

void	left_right(char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[0][j])
		j++;
	while (map[i])
	{
		if ((map[i][0] != '1') || (map[i][j - 1] != '1'))
			invalid_map();
		i++;
	}
}
