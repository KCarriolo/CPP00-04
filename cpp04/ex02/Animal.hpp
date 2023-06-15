#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class	Animal{
	public:
		Animal();
		Animal(std::string name);
		Animal(Animal& obj);
		Animal&				operator=(const Animal& obj);
		virtual				~Animal();
		std::string			getType(void);
		virtual void		makeSound(void) const = 0;
	protected:
		std::string			type;
};

#endif
