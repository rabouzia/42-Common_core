SRC =		megaphone.cpp 			\


NAME =		Megaphone

CFLAGS =	-g3 -std=c++98 -Wall -Wextra -Werror -I./inc

CC =		c++

OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus