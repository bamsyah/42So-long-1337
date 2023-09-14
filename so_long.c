/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:44:53 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/14 15:31:10 by bamsyah          ###   ########.fr       */
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

void	my_mlx_pixel_put(t_mlx *window, int x, int y, int color)
{
	char	*dst;

	dst = window->addr + (y * window->line_length + x * (window->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
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
	window.img = mlx_new_image(window.mlx, 1920, 1080);
	window.addr = mlx_get_data_addr(window.img, &window.bits_per_pixel, &window.line_length, &window.endian);
	for (int i = 0; i < 100; i++)
	{
		for (int y = 0; y < 100; y++)
		{
			my_mlx_pixel_put(&window, i, y, 0x00FF6600);
		}
	}
	// mlx_put_image_to_window(window.mlx, window.mlx_window, window.img, 5, 0);
	mlx_loop(window.mlx);
}
