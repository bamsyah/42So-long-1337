/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_components.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badreddinemsyah <badreddinemsyah@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:03:47 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/06 00:58:45 by badreddinem      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	one_player(char *player)
{
    int i;
    int y;
    
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
    int y;
    
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

void	collectible(char *player)
{
    int i;
    int exist;
    
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
    {
        ft_printf("Error\nyou need more collectible");
        exit (0);
    }
}