#include "Cure.hpp"

Cure::Cure(void){
	std::cout << "Cure Constructor called" << std::endl;	
}

Cure::Cure(Cure& obj){
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj){
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

Cure::~Cure(void){
	std::cout << "Cure Destructor called" << std::endl;
}

Cure*	Cure::clone(void){
	return (new Cure());	
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
