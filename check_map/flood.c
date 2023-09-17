/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:36:56 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/17 12:11:09 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	flood_e(t_map *map, int x, int y)
{
	if (x < 0 || x >= map->width || y < 0 || y >= map->height)
		return ;
	if (map->map_e[x][y] == '1')
		return ;
	if (map->map_e[x][y] == 'E')
		map->exit++;
	map->map_e[x][y] = '1';
	flood_e(map, x, y - 1);
	flood_e(map, x, y + 1);
	flood_e(map, x - 1, y);
	flood_e(map, x + 1, y);
}

void	path_config(t_map *path)
{
	path->exit = 0;
	player_pos(path);
	flood_e(path, path->player_x, path->player_y);
	if (path->exit != 1)
		invalid_map();
}