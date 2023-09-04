# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 17:38:36 by bamsyah           #+#    #+#              #
#    Updated: 2023/09/04 07:53:37 by bamsyah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = clang
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf/function.c ft_printf/ft_printf.c  \
	utils/ft_calloc.c utils/ft_split.c utils/ft_strdup2.c \
	utils/ft_strjoin2.c utils/ft_strlcat.c utils/ft_strlcpy.c utils/ft_strlen2.c \
	get_next_line/get_next_line_utils.c get_next_line/get_next_line.c so_long.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re:
	fclean all
