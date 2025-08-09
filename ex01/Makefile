NAME = phonebook
COMP = g++
FLAGS = -std=c++17 -Wall -Werror -Wextra

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
