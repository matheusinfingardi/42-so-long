# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 13:35:13 by minfinga          #+#    #+#              #
#    Updated: 2024/07/31 13:59:45 by minfinga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
CC = gcc
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -Isrc -Iinclude

VPATH = src
SRCS = ft_printf.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putpoint.c
OBJS = $(addprefix obj/, $(SRCS:.c=.o))


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all:	$(NAME)

obj:
	mkdir -p obj

obj/%.o:	%.c | obj
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	$(RM) obj

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.SILENT:

.PHONY: all clean fclean re 
	


