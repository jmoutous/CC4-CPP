NAME = Poly

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

SOURCES	=	main.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			Brain.cpp		\
			Animal.cpp		\
			WrongCat.cpp	\
			WrongAnimal.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Cat.hpp			\
			Dog.hpp			\
			Brain.hpp		\
			Animal.hpp		\
			WrongCat.hpp	\
			WrongAnimal.hpp

#  ==============================  RULES  ===============================  #

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re

#  ==============================  COMPILATION  =============================  #

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)  -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
