NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES	=	main.cpp		\
			PhoneBook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

HEADERS = PhoneBook.hpp

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

# $(OBJECTS)%.o: $(SOURCES)%.cpp $(HEADERS)
$(OBJECTS)%.o: $(SOURCES) $(HEADERS)
	c++ $(CFLAGS) -c $< -o $@
