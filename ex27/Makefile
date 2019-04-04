# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 11:36:59 by vrossi            #+#    #+#              #
#    Updated: 2019/04/04 16:21:13 by vrossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
FLAGS = -Wall -Wextra -Werror
FILES = ft_display_file.c ft_putchar.c ft_putstr.c
OBJ = ft_display_file.o ft_putchar.o ft_putstr.o
HEADER = lib.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(FILES) -I $(HEADER)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
