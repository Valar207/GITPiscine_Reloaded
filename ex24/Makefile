# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vrossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 09:55:57 by vrossi            #+#    #+#              #
#    Updated: 2019/04/03 15:39:23 by vrossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
FLAGS = -Wall -Wextra -Werror
FILES = $(SRC)ft_putchar.c \
		$(SRC)ft_putstr.c \
		$(SRC)ft_strcmp.c \
		$(SRC)ft_strlen.c \
		$(SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes/

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILES) -I $(HEADERS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
