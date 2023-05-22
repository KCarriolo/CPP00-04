SRCS	= PhoneBook.cpp \
		  Contact.cpp \
		  main.cpp \

NAME	= phonebook 

CC		= c++ -std=c++98 -Wall -Wextra -Werror

RM		= rm -rf

$(NAME): $(SRCS)
		@$(CC) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
