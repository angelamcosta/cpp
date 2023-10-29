NAME	=	brains

RM		=	rm -rf
CC		=	g++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	Makefile main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re