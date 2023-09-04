/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:28 by bamsyah           #+#    #+#             */
/*   Updated: 2023/09/04 07:45:51 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

typedef struct so_long
{
	char	**map;
	int		coines;
	int		x_player;
	int		y_player;
	int		x_exit;
	int		y_exit;
	int		map_width;
	int		map_height;
}t_test;

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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
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
// ------------------Utils Function---------------------

#endif