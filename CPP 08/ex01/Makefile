NAME		=	span

RM			=	rm -rf
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC			=	main.cpp Span.cpp

OBJ			=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re