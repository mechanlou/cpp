NAME = scavtrap

SRCS = \
		main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp	
	clang++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
