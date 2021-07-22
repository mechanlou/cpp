NAME = materia

HEADERS = \
		ICharacter.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp \
		Character.hpp \
		AMateria.hpp \
		Cure.hpp \
		Ice.hpp

SRCS = \
		main.cpp \
		Character.cpp \
		MateriaSource.cpp \
		AMateria.cpp \
		Cure.cpp \
		Ice.cpp

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
