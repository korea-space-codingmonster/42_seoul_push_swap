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
