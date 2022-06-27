# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: messafi <messafi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 17:49:39 by messafi           #+#    #+#              #
#    Updated: 2022/06/21 18:04:43 by messafi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SNAME = server
CNAME = client
SSRCS = server_u.c server.c
CSRCS = client_u.c client.c
LIBFTPRINTF = ft_printf/libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(SNAME) $(CNAME) $(LIBFTPRINTF)

$(SNAME) : 
	make -C ft_printf
	$(CC) $(CFLAGS) $(SSRCS) $(LIBFTPRINTF) -o $@

$(CNAME) :
	$(CC) $(CFLAGS) $(CSRCS) -o $@

clean : 
	make clean -C ft_printf

fclean : clean
	make fclean -C ft_printf
	rm -rf $(SNAME) $(CNAME) 

re : fclean all
