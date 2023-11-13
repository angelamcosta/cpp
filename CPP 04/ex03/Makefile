NAME	=	materia

RM		=	rm -rf
CXX		=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -O0

SRC		=	AMateria.cpp main.cpp Ice.cpp Character.cpp MateriaSource.cpp Cure.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re