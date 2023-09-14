NAME = account

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	tests.cpp		\
			Account.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Account.hpp

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
