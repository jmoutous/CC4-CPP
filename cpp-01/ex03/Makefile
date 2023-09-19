NAME = battle

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Weapon.hpp	\
			HumanA.hpp	\
			HumanB.hpp

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
	c++ $(OBJECTS) $(CFLAGS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(CFLAGS) -c $< -o $@
