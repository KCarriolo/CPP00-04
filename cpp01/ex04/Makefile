SRCS	= main.cpp \

NAME	= snr

CPP		= c++ -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

$(NAME): $(SRCS)
		@$(CPP) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		@$(RM) $(NAME) $(NAME).dSYM *.replace

fclean: clean

re: fclean all

.PHONY: all clean fclean re
