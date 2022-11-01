# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 23:18:38 by fsuomins          #+#    #+#              #
#    Updated: 2022/10/31 23:43:09 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ./ft_printf.c

INCLUDES = .
OBJS = $(patsubst %.c, %.o, $(SRCS))
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS) ./ft_printf.h
	cc $(CFLAGS) -c $(SRCS) -I $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re