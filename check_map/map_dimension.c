/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_dimension.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <hamaarou@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 04:01:53 by bamsyah           #+#    #+#             */
/*   Updated: 2023/11/16 01:08:24 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	map_dimension(t_map *map_d)
{
	int	i;

	i = 0;
	i = ft_strlen2(map_d->map[0]);
	map_d->width = i;
	i = 0;
	while (map_d->map[i])
		i++;
	map_d->height = i;
}
