/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:31:07 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/05 21:52:13 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    check_wall(**map)
{
    int i;
	int	j;
    
    i = 0;
	j = 0;
	while (map[j])
		j++;
    while (map[i])
    {
        if (check(map[0][i]))
        {
			ft_printf("Error\nInvalid map");
			exit (0);
        }
        if (check(map[j]))
		{
			ft_printf("Error\nInvalid map");
			exit(0);
		}
		i++;
    }
}

void    left_right(**map)
{
    int i;
	int	j;
    
    i = 0;
	j = 0;
	while (map[j])
		j++;
    while (map[i])
    {
        if (check(map[i][0]))
        {
			ft_printf("Error\nInvalid map");
			exit (0);
        }
        if (check(map[i][j]))
		{
			ft_printf("Error\nInvalid map");
			exit(0);
		}
		i++;
    }
}

int	check(char *map)
{
	int	i;
	while (map[i])
	{
		if (map != '1')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
