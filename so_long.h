/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:44:24 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/20 01:49:41 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
// ----------------------Libraries----------------------
# include <mlx.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>
// ----------------------Libraries----------------------

// -----------------------Struct------------------------
typedef struct map
{
	char	**map;
	char	**map_c;
	char	**map_e;
	int		height;
	int		width;
	int		player_x;
	int		player_y;
	int		exit;
	int		collectible;
	int		collectible_c;
}t_map;

typedef struct mlx
{
	void	*mlx;
	void	*mlx_window;
	void	*exit;
	void	*coin;
	void	*play;
	void	*wall;
	void	*back;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}t_mlx;

// -----------------------Struct------------------------

// -------------------Printf Function-------------------
int		ft_putchar_len(char c);
int		ft_printf(const char *str, ...);
int		ft_putstr_len(char *str);
void	ft_putnbr_len(int nbr, int *len);
void	ft_putunbr_len(unsigned int nbr, int *len);
void	ft_putbase(unsigned long i, char *s, int *len);
// -------------------Printf Function-------------------

// -------------------Get Next Line---------------------
char	*ft_getrest(char *rest, char *line);
int		ft_strlen(char *str);
char	*ft_strdup(char *rest);
char	*ft_strjoin(char *buffer, char *rest);
int		ft_strchr(char *buffer);
char	*read_file(int fd, char *rest);
char	*get_next_line(int fd);
char	*ft_getline(char *rest);

# define BUFFER_SIZE 1
// -------------------Get Next Line---------------------

// ------------------Utils Function---------------------
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup2(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen2(const char *s);
char	*ft_strjoin2(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *s, size_t n);
void	invalid_map(void);
void	player_pos(t_map *map);
// ------------------Utils Function---------------------

// -----------------Window Function---------------------
void	add_image(t_mlx *add);
void	put_image(t_map *map, t_mlx *window);
void	draw_map(t_mlx *add, t_map *map);
void	ft_window(t_mlx *window, t_map *check);
void	check_all(t_map *check);
void	map_dimension(t_map *map_d);
void	line_25(t_map *map, t_mlx *window, int i, int j);
// -----------------Window Function---------------------

// --------------------Check map------------------------
void	check_name(char *map);
void	check_newline(char *split);
void	check_components(char **wall);
void	one_player(char *player);
void	one_exit(char *player);
void	collectible(char *player, t_map *map);
void	check_rectangular(char **map);
void	check_wall(char **map);
void	left_right(char **map);
void	player_position(char **map);
void	path_config(t_map *path);
void	flood_e(t_map *map, int x, int y);
void	flood_c(t_map *map, int x, int y);
// --------------------Check map------------------------

// ----------------------Move---------------------------
void	left_move(t_map *map, t_mlx *mlx);
// ----------------------Move---------------------------
#endif