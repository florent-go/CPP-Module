NAME	= Weapon

SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS	= $(SRCS:.cpp=.o)

CXX = clang++

CXXFLAGS	+= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re