/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 03:22:39 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/16 05:06:14 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_all(t_map *check)
{
	check_components(check->map);
	check_rectangular(check->map);
	check_wall(check->map);
	left_right(check->map);
	player_position(check->map);
}
