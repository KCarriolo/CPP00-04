SRCS	=	main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp \
			GroundList.cpp \
			Character.cpp \
			MateriaSource.cpp \

LIBS	=	AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			GroundList.hpp \
			Ice.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp \

NAME	= FFXLII

CPP		= c++ -g -std=c++98 -Wall -Wextra -Werror

RM		= rm -rf

$(NAME): $(SRCS) $(LIBS)
	@$(CPP) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(NAME) $(NAME).dSYM

fclean: clean

re: fclean all

.PHONY: all clean fclean re
