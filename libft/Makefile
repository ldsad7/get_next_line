# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 23:46:39 by tsimonis          #+#    #+#              #
#    Updated: 2019/01/04 21:15:46 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
GCC = gcc -Wall -Werror -Wextra
SRCS = *.c
OBJS = *.o
INCS = ./includes

all: $(NAME)

$(NAME): $(SRCS)
	$(GCC) -c $(SRCS) -I$(INCS)
	ar rc $(NAME) $(OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
