# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 16:59:54 by fsuomins          #+#    #+#              #
#    Updated: 2022/10/27 22:16:04 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		utils.c

INCLUDEH = .
OBJS = $(patsubst %.c, %.o, $(SRCS)) #trocando um certo padrão pór outro (.c por .o em todos os arquivos do SRCS)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS) 

#o "s" cria um indice para os arquivos, e agiliza o processo de likagem
$(OBJS) : $(SRCS) libft.h
	cc $(CFLAGS) -c $(SRCS) -I $(INCLUDEH) 

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
