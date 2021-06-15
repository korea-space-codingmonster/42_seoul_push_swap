# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 18:28:26 by napark            #+#    #+#              #
#    Updated: 2021/06/16 01:47:03 by napark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

src_dir = src

SRC = $(wildcard $(src_dir)/*.c)

CC = gcc

CFLAGS += -I./include
LDFLAGS = -Wall -Wextra -Wshadow -I./include
OBJ = $(SRC:.c=.o)


all: $(NAME)
$(NAME) : $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all



