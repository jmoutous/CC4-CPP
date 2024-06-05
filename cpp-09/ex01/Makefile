NAME = RPN

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

SOURCES	=	main.cpp			\
			RPN.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS =	RPN.hpp

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
