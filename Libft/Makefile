NAME = libft.a

SRCS = $(shell find . -name "*.c")

CFLAGS = -Wall -Werror -Wextra -c -I.

CMPL = gcc $(CFLAGS)

OBJ = ${SRCS:.c=.o}

all: $(NAME)

$(NAME):
		@$(CMPL) $(SRCS)
		@ar rcs $(NAME) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
