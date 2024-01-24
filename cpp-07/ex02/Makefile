NAME = Array

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror -g3

SOURCES	=	main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	Array.hpp	\
			Array.tpp

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
