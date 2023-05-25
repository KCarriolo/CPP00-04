SRCS	= main.cpp \

NAME	= hi

CC		= c++ -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

$(NAME): $(SRCS)
		@$(CC) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME) $(NAME).dSYM

fclean: clean

re: fclean all

.PHONY: all clean fclean re
