NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	megaphone.cpp

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
	c++ $(OBJECTS) $(CFLAGS) -o $(NAME)

$(OBJECTS)%.o: $(SOURCES)%.cpp
	c++ $(CFLAGS) -c $< -o $@
