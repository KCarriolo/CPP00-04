SRCS	=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \

NAME	= scavtrap

CPP		= c++ -std=c++98 -Wall -Wextra -Werror

RM		= rm -rf

$(NAME): $(SRCS)
		@$(CPP) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME) $(NAME).dSYM

fclean: clean

re: fclean all

.PHONY: all clean fclean re
