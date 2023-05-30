NAME	=	phonebook

RM		=	rm -rf
CC		=	g++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp PhoneBook.hpp PhoneBook.cpp Contact.hpp Contact.cpp

all:		$(NAME)

$(NAME):
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:
			@$(MAKE) fclean
			@$(MAKE)