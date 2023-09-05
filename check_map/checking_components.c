/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_components.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:03:47 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/05 21:30:54 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	one_player(char *player)
{
    int i;
    int j;
    
    i = 0;
    while (player[i])
    {
        if (player[i] == 'P')
        {
            y = i;
            while (player[y])
            {
                if (player[y] == 'P')
                {
                    ft_printf("Error\n2 Player");
                    exit (0);
                }
                y++;
            }  
        }
        i++;
    }
}

void	one_exit(char *player)
{
    int i;
    int j;
    
    i = 0;
    while (player[i])
    {
        if (player[i] == 'E')
        {
            y = i;
            while (player[y])
            {
                if (player[y] == 'E')
                {
                    ft_printf("Error\n2 exit");
                    exit (0);
                }
                y++;
            }  
        }
        i++;
    }
}

int	collectible(char *player)
{
    int i;
    int j;
    
    i = 0;
    while (player[i])
    {
        if (player[i] == 'C')
        {
            y = i;
            while (player[y])
            {
                if (player[y] == 'C')
                {
                    return (1);
                }
                y++;
            }  
        }
        i++;
    }
	ft_printf("Error\n2 exit");
    exit (0);
}