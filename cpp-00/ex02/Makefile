NAME = account

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

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
	$(CC) $(CFLAGS) $(OBJECTS)  -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
