NAME =		easyfind

CXX	 =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =		$(wildcard *.cpp)

OBJS =		$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)


fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re clean fclean all