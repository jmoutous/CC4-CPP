NAME = ClapTrap

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

SOURCES	=	main.cpp		\
			ClapTrap.cpp	\
			ScavTrap.cpp	\
			FragTrap.cpp	\
			DiamondTrap.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	ClapTrap.hpp	\
			ScavTrap.hpp	\
			FragTrap.hpp	\
			DiamondTrap.hpp

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
