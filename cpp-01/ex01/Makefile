NAME = zombie

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

SOURCES	=	main.cpp		\
			Zombie.cpp		\
			newZombie.cpp	\
			randomChump.cpp	\
			zombieHorde.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Zombie.hpp

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
