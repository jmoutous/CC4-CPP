NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp		\
			Zombie.cpp		\
			newZombie.cpp	\
			randomChump.cpp	\
			zombieHorde.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Zombie.hpp

#  ==============================  RULES  ===============================  #

all:  
	$(MAKE) $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re

#  ==============================  COMPILATION  =============================  #

$(NAME): $(OBJECTS)
	c++ $(CFLAGS) $(OBJECTS)  -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(CFLAGS) -c $< -o $@
