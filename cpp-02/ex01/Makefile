NAME = fixed

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp	\
			Fixed.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Fixed.hpp

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
