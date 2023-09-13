/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:44:53 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/13 21:37:39 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*map(int fd)
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
	collectible(split);
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
	line = map(fd);
	check.map = ft_split(line, '\n');
	check_components(check.map);
	check_rectangular(check.map);
	check_wall(check.map);
	left_right(check.map);
	player_position(check.map);
	window.mlx = mlx_init();
	window.mlx_window = mlx_new_window(window.mlx, 800, 500, "so_long");
	mlx_loop(window.mlx);
}
