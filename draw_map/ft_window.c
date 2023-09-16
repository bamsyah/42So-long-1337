/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 03:13:32 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/16 03:38:34 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_window(t_mlx *window, t_map *check)
{
	window->mlx = mlx_init();
	window->mlx_window = mlx_new_window(window->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "so_long");
	window->img = mlx_new_image(window->mlx, 1920, 1080);
	window->addr = mlx_get_data_addr(window->img, &window->bits_per_pixel, &window->line_length, &window->endian);
	draw_map(window, check);
}