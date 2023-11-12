NAME	=	megaphone

RM		=	rm -rf
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	megaphone.cpp

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