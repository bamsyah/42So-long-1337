/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:43 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/04 05:53:29 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "./ft_printf/ft_printf.h"
#include "./get_next_line/get_next_line.h"

int main (int ac, char **av)
{
    char    *line;
    char    *maps;
    int     fd;

    fd = open(av[1], O_RDONLY);
    while (line = get_next_line(fd))
    {
        ft_printf("%s", line);
        maps = strjoin(maps, line);
    }
    return (0);
}