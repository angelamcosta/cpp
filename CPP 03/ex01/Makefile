NAME	=	scavTrap

RM		=	rm -rf
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98 -O0

SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re