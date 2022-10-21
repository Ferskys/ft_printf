# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 16:59:54 by fsuomins          #+#    #+#              #
#    Updated: 2022/10/21 23:48:27 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I.
SRCS = ft_printf.c utils.c libft/*.c
OBJ = *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: clean fclean all re