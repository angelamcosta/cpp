NAME	=	easyfind

CXX		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf

SRC		=	main.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $@

clean	:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $@

re:			fclean all

.PHONY:		all clean fclean re