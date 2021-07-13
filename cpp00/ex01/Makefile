NAME = kimapel

HEADERS = includes

SRCS = \
		srcs/main.cpp \
		srcs/Book.cpp \
		srcs/Contact.cpp

OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp	$(HEADERS)
	clang++ -Wall -Wextra -Werror -std=c++98 -Iincludes -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
