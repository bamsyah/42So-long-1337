/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badreddinemsyah <badreddinemsyah@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:19:30 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/06 00:58:45 by badreddinem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_name(char *map)
{
	int	i;

	i = ft_strlen2(map);
	if ((map[i - 1] != 'r') || (map[i - 2] != 'e') 
		|| (map[i - 3] != 'b') || (map[i - 4] != '.'))
	{
		ft_printf("Error\ninvalid map name");
		exit (0);
	}
}

void	check_newline(char *split)
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
}

void	check_components(char **components)
{
	int	i;
	int	j;

	i = 0;
	while (components[i])
	{
		j = 0;
		while (components[i][j])
		{
			if ((components[i][j] != '1') && (components[i][j] != 'E') && (components[i][j] != 'P') 
			&& (components[i][j] != 'C') && (components[i][j] != '0'))
			{
				ft_printf("Error\nInvalid map");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	check_rectangular(char **map)
{
	int	len;
	int	i;
	int	j;
	
	len = ft_strlen2(map[0]);
	i = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (len != map[i][j])
			{
				ft_printf("Error\nInvalid map");
				exit (0);
			}
			j++;
		}
		i++;
	}
}