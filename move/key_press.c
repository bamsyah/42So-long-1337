/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 02:49:38 by bamsyah           #+#    #+#             */
/*   Updated: 2023/11/16 04:15:48 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_press(int key, t_mlx *mlx)
{
	if (key == KEY_EXIT)
	{
		mlx_destroy_window(mlx->mlx, mlx->mlx_window);
		exit(0);
	}
	if (key == KEY_W)
		move_up(mlx);
	else if (key == KEY_S)
		move_down(mlx);
	else if (key == KEY_A)
		move_left(mlx);
	else if (key == KEY_D)
		move_right(mlx);
	ft_printf("Player x pos: %d\n", mlx->map.player_x);
	ft_printf("Player y pos: %d\n", mlx->map.player_y);
	ft_printf("Collectibles left: %d\n", mlx->map.collectible);
	return (0);
}
