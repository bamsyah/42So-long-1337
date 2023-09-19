/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:44:53 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/19 13:34:19 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*map(int fd, t_map *map)
{
	char	*read_line;
	char	*split;

	split = NULL;
	while (1)
	{
		read_line = get_next_line(fd);
		if (!read_line)
			break ;
		split = ft_strjoin2(split, read_line);
		free(read_line);
	}
	check_newline(split);
	one_player(split);
	one_exit(split);
	collectible(split, map);
	return (split);
}

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	t_map	check;
	t_mlx	window;

	if (ac != 2)
		invalid_map();
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		invalid_map();
	check_name(av[1]);
	line = map(fd, &check);
	check.map = ft_split(line, '\n');
	check.map_e = ft_split(line, '\n');
	check_all(&check);
	map_dimension(&check);
	path_config(&check);
	ft_window(&window, &check);
	mlx_loop(window.mlx);
}
