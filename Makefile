# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 17:38:36 by bamsyah           #+#    #+#              #
#    Updated: 2023/09/06 04:51:31 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf/function.c ft_printf/ft_printf.c  \
	utils/ft_calloc.c utils/ft_split.c utils/ft_strdup2.c utils/invalid_map.c \
	utils/ft_strjoin2.c utils/ft_strlcat.c utils/ft_strlcpy.c utils/ft_strlen2.c \
	get_next_line/get_next_line_utils.c get_next_line/get_next_line.c so_long.c \
	check_map/checking_map.c check_map/check_wall.c check_map/checking_components.c \

OBJ = $(SRC:.c=.o)

NAME: $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
