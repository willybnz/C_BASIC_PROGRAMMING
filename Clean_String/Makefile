NAME = clean_string

SRC = src/clean_string.c \
      src/main.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

