CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp newZombie.cpp randomChump.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = brain

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ $@ 
clean:
	rm -f $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all fclean clean re

