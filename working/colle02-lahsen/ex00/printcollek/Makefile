# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlecalve <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 11:43:38 by tlecalve          #+#    #+#              #
#    Updated: 2015/12/08 20:23:45 by acresap          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC =  ft_printcollek.c main.c ft_putstr.c ft_putchar.c \
		ft_putresult00.c ft_putresult01.c ft_putresult02.c ft_putresult03.c \
		ft_putresult30.c ft_putresult33.c ft_colle-2.c

OBJS =  ft_printcollek.o main.o ft_putstr.o ft_putchar.o \
		ft_putresult00.o ft_putresult01.o ft_putresult02.o ft_putresult03.o \
		ft_putresult30.o ft_putresult33.o ft_colle-2.o

all: $(NAME)

$(NAME): $(OBJS) $(SRC)
	gcc -o $(NAME) -Wall -Werror -Wextra $(SRC)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
