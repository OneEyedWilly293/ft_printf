# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgueon <jgueon@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/10 12:35:46 by jgueon            #+#    #+#              #
#    Updated: 2025/05/12 18:48:34 by jgueon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES := ft_printf.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putnbr_unsigned.c \
			ft_puthex.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_process_format.c \

OBJECTS := $(SOURCES:%.c=%.o)

HEADERS := ft_printf.h
NAME := libftprintf.a
CFLAGS := -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
		ar -rcs $(NAME) $(OBJECTS)

%.o : %.c %(HEADERS)
		cc -c $< -o $@ $(CFLAGS)

all : $(NAME)

re: fclean all

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re fclean clean
.SECONDARY: $(NAME) $(OBJECTS)