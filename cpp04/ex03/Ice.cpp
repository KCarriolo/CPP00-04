#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void): AMateria("ice"){
	std::cout << "Ice Default Constructor called" << std::endl;	
}

Ice::Ice(const Ice& obj): AMateria("ice"){
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = obj;
}

AMateria*	Ice::clone(void) const{
	return (new Ice(*this));	
}

AMateria*	Ice::operator=(const AMateria& obj){
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	return (obj.clone());
}

Ice::~Ice(void){
	std::cout << "Ice Destructor called" << std::endl;
}


void	Ice::use(ICharacter& target) const{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
