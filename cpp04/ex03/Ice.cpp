#include "Ice.hpp"

Ice::Ice(void): AMateria("ice"){
	std::cout << "Ice Default Constructor called" << std::endl;	
}

Ice::Ice(const Ice& obj): AMateria("ice"){
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = obj;
}

AMateria*	Ice::operator=(const AMateria& obj){
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		return (obj.clone());
	return (this);
}

Ice::~Ice(void){
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const{
	return (new Ice(*this));	
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
