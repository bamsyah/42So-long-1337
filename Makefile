# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 17:38:36 by bamsyah           #+#    #+#              #
#    Updated: 2023/09/14 00:57:47 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = clang
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

SRC = ft_printf/function.c ft_printf/ft_printf.c  \
	utils/ft_calloc.c utils/ft_split.c utils/ft_strdup2.c utils/invalid_map.c utils/ft_bzero.c \
	utils/ft_strjoin2.c utils/ft_strlcat.c utils/ft_strlcpy.c utils/ft_strlen2.c \
	get_next_line/get_next_line_utils.c get_next_line/get_next_line.c so_long.c \
	check_map/checking_map.c check_map/check_wall.c check_map/checking_components.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
