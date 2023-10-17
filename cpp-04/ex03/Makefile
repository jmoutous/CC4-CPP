NAME = Materia

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -g3

SOURCES	=	main.cpp			\
			Ice.cpp				\
			Cure.cpp			\
			AMateria.cpp		\
			Character.cpp		\
			MateriaSource.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Ice.hpp				\
			Cure.hpp			\
			AMateria.hpp		\
			Character.hpp		\
			MateriaSource.hpp

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
