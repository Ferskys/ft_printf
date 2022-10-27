# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 16:59:54 by fsuomins          #+#    #+#              #
#    Updated: 2022/10/27 20:31:29 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		utils.c

SRCS = $(addprefix sources/,$(FILES))

OBJS = $(SRCS:.c=.o)

INCLUDES = -I includes

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

AR = ar -rc

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
