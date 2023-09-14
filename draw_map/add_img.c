/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:50:06 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/14 15:41:13 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	add_image(t_mlx *add)
{
	add->back = mlx_xpm_file_to_image(add->mlx, "xpm/back.xpm", add->width, add->height);
	add->play = mlx_xpm_file_to_image(add->mlx, "xpm/play.xpm", add->width, add->height);
	add->wall = mlx_xpm_file_to_image(add->mlx, "xpm/wall.xpm", add->width, add->height);
	add->exit = mlx_xpm_file_to_image(add->mlx, "xpm/exit.xpm", add->width, add->height);
	add->coin = mlx_xpm_file_to_image(add->mlx, "xpm/coin.xpm", add->width, add->height);
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
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->back, window->height_p, window->width_p);
			else if (map->map[i][j] == '1')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->wall, window->height_p, window->width_p);
			else if (map->map[i][j] == 'P')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->play, window->height_p, window->width_p);
			else if (map->map[i][j] == 'E')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->exit, window->height_p, window->width_p);
			else if (map->map[i][j] == 'C')
				mlx_put_image_to_window(window->mlx, window->mlx_window, window->coin, window->height_p, window->width_p);
			j++;
		}
		i++;
	}
}