NAME	=	megaphone

RM		=	rm -rf
CC		=	g++
FLAGS	=	-std=c++98

SRC		=	megaphone.cpp

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