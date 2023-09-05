/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:43 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/05 21:53:24 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*map(int fd)
{
	char	*read_line;
	char	*split;

	while (1)
	{
		read_line = get_next_line(fd);
		{
			split = ft_strjoin2(split, read_line);
			free(read_line);
		}
		check_newline(split);
		one_player(split);
		one_exit(split);
		collectible(split); // Check !!!!!!!
	}
	return (split);
}

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	t_map	check;

	if (ac != 2)
		ft_printf("Error of reading Map\n");
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		ft_printf("Error fd\nInvalid map");
	check_name(av[1]);
	line = map(fd);
	check.map = ft_split(line, '\n');
	check_components(check.map);
	check_rectangular(check.map);
	check_wall(check.map);
	left_right(check.map);
}
