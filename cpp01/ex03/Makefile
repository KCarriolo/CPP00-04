SRCS =	HumanA.cpp \
		HumanB.cpp \
		main.cpp \
		Weapon.cpp \

NAME = violence 

CPP = c++ -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

$(NAME): $(SRCS)
		@$(CPP) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME) $(NAME).dSYM

fclean: clean

re: clean all 

.PHONY: all clean fclean re
