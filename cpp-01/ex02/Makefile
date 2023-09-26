NAME = brain

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

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

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@
