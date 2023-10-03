NAME = ClapTrap

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

SOURCES	=	main.cpp		\
			ClapTrap.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	ClapTrap.hpp

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
