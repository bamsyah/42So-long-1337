/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:19:30 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/04 10:30:30 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_name(char *map)
{
	int	i;

	i = ft_strlen2(map);
	if (map[i - 1] != 'r')
	{
		ft_printf("Error\ninvalid map name");
		exit (0);
	}
	if (map[i - 2] != 'e')
	{
		ft_printf("Error\ninvalid map name");
		exit(0);
	}
	if (map[i - 3] != 'b')
	{
		ft_printf("Error\ninvalid map name");
		exit(0);
	}
	if (map[i - 4] != '.')
	{
		ft_printf("Error\ninvalid map name");
		exit(0);
	}
}

char	check_newline(char *split)
{
	int	i;

	i = 0;
	if (split[i] == '\n')
	{
		ft_printf("Error\n there is a new line");
		exit (0);
	}
	while (split[i])
	{
		if (split[i] == '\n' && split[i + 1] == '\n')
		{
			ft_printf("Error\n there is a new line");
			exit (0);
		}
		i++;
	}
	return (0);
}