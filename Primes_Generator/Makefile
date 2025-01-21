NAME = prime_generator

SRC = src/main.c \
	  src/prime_generator.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)

all:	$(NAME)


clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re

