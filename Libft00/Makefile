# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 11:08:25 by myagiz            #+#    #+#              #
#    Updated: 2022/10/16 14:53:31 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
