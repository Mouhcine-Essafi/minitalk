# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: messafi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 04:42:59 by messafi           #+#    #+#              #
#    Updated: 2021/12/18 04:43:06 by messafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Werror -Wextra
NAME=libftprintf.a
SRC=ft_printf.c\
	ft_printstr.c\
	ft_putnbr.c\
	ft_putnbrhexupper.c\
	ft_putnbrhexlower.c\
	ft_putchar.c\
	ft_put.c\

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f libftprintf.a
re: fclean all
