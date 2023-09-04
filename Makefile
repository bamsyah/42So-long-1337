# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 17:38:36 by bamsyah           #+#    #+#              #
#    Updated: 2023/09/04 07:07:15 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = clang
CFLAGS = -Wall -Wextra -Werror

SRC = so_long.c ft_split.c ft_strjoin.c \
	ft_printf/function.c ft_printf/ft_printf.c \
	get_next_line/get_next_line_utils.c get_next_line/get_next_line.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re:
	fclean all