/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_components.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:03:47 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/06 09:55:06 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	one_player(char *player)
{
	int	i;
	int	y;

	i = 0;
	while (player[i])
	{
		if (player[i] == 'P')
		{
			y = i;
			while (player[y])
			{
				if (player[y] == 'P')
					invalid_map();
				y++;
			}
		}
		i++;
	}
}

void	one_exit(char *player)
{
	int	i;
	int	y;

	i = 0;
	while (player[i])
	{
		if (player[i] == 'E')
		{
			y = i;
			while (player[y])
			{
				if (player[y] == 'E')
					invalid_map();
				y++;
			}
		}
		i++;
	}
}

void	collectible(char *player)
{
	int	i;
	int	exist;

	i = 0;
	exist = -1;
	while (player[i])
	{
		if (player[i] == 'C')
		{
			exist = 1;
		}
		i++;
	}
	if (exist == -1)
		invalid_map();
}
