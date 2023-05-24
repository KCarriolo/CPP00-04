SRCS	= main.cpp \
		  Zombie.cpp \
		  zombieHorde.cpp \

NAME	= horde

CPP		= c++ -g -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

$(NAME): $(SRCS)
		@$(CPP) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME) $(NAME).dSYM

fclean: clean 

re: fclean all

.PHONY: all clean fclean re
