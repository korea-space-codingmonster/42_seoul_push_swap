# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: napark <napark@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 18:28:26 by napark            #+#    #+#              #
#    Updated: 2021/06/15 18:46:31 by napark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PUSH_SWAP

SRC = $(wildcard $(src)/*.c)

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



