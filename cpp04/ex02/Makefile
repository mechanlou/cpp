NAME = animo

HEADERS = \
		Animal.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp \
		Dog.hpp \
		Brain.hpp \
		Cat.hpp

SRCS = \
		main.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		Animal.cpp \
		Brain.cpp \
		WrongAnimal.cpp

OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	clang++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS)
	clang++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
