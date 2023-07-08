#include "AMateria.hpp"

AMateria::AMateria(void): type(""){
	std::cout << "AMateria Default Constructor called" << std::endl;	
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "AMateria Constructor called" << std::endl;	
}

AMateria::AMateria(AMateria& obj){
	std::cout << "AMateria Copy Constructor called" << std::endl;
	this->type = obj.type;
}

/*AMateria&	AMateria::operator=(const AMateria& obj){
	std::cout << "AMateria Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}*/

AMateria::~AMateria(void){
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &	AMateria::getType(void) const{
	return (this->type);
}
