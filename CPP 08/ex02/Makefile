NAME	=	mutantstack

CXX		=	c++
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

SRC		=	main.cpp 

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re