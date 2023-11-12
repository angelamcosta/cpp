NAME	=	harlFilter

RM		=	rm -rf
CXX		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	main.cpp Harl.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re