CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = moar_brainz

%.o:%.cpp
	$(CC) $(CFLAGS)	-c $< -o $@

all: $(NAME)
$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re