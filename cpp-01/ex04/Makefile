NAME = sed

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	sed.hpp

#  ==============================  RULES  ===============================  #

all:  
	$(MAKE) $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)
	rm -rf *.replace

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re

#  ==============================  COMPILATION  =============================  #

$(NAME): $(OBJECTS)
	c++ $(OBJECTS) $(CFLAGS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(CFLAGS) -c $< -o $@
