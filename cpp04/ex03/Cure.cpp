#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){
	std::cout << "Cure Default Constructor called" << std::endl;	
}

Cure::Cure(Cure& obj) AMateria("cure"){
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj){
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		this = obj.clone();
	return (*this);
}

Cure::~Cure(void){
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const{
	return (new Cure(*this));	
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
