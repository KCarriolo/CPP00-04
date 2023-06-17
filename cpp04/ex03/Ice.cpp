#include "Ice.hpp"

Ice::Ice(void){
	std::cout << "Ice Constructor called" << std::endl;	
}

Ice::Ice(Ice& obj){
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = obj;
}

Ice&	Ice::operator=(const Ice& obj){
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

Ice::~Ice(void){
	std::cout << "Ice Destructor called" << std::endl;
}

Ice*	Ice::clone(void){
	return (new Ice());	
}

void	Ice::use(ICharacter& target{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
