/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:50:06 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/16 03:09:46 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	add_image(t_mlx *add)
{
	int x = 0;
	int y = 0;
	add->back = mlx_xpm_file_to_image(add->mlx, "xpm/back.xpm", &x, &y);
	add->play = mlx_xpm_file_to_image(add->mlx, "xpm/play.xpm", &x, &y);
	add->wall = mlx_xpm_file_to_image(add->mlx, "xpm/wall.xpm", &x, &y);
	add->exit = mlx_xpm_file_to_image(add->mlx, "xpm/exit.xpm", &x, &y);
	add->coin = mlx_xpm_file_to_image(add->mlx, "xpm/coin.xpm", &x, &y);
}

void	put_image(t_map *map, t_mlx *window)
{
	int	i;
	int	j;

	i = 0;
	player_pos(map, window);
	while (map->map[i])
	{
		j = 0;
		while (map->map[i][j])
		{
			if (map->map[i][j] == '0')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->back, j * 10, i * 10);
			else if (map->map[i][j] == '1')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->wall, j * 10, i * 10);
			else if (map->map[i][j] == 'P')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->play, j * 10, i * 10);
			else if (map->map[i][j] == 'E')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->exit, j * 10, i * 10);
			else if (map->map[i][j] == 'C')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->coin, j * 10, i * 10);
			j++;
		}
		i++;
	}
}

void	draw_map(t_mlx *add, t_map *map)
{
	add_image(add);
	put_image(map, add);
}