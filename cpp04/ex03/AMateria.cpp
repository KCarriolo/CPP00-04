#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "AMateria Constructor called" << std::endl;	
}

AMateria::AMateria(AMateria& obj){
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = obj;
}

AMateria&	AMateria::operator=(const AMateria& obj){
	std::cout << "AMateria Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

AMateria::~AMateria(void){
	std::cout << "AMateria Destructor called" << std::endl;
}

void	AMateria::use(ICharacter& target){
	if (getType == "ice"){
		std::cout << "* shoots an ice bolt at " << this->getName << " *" << std::endl;
		return ;
	}
	else if (getType == "cure"){
		std::cout << "* heals " << this->getName << "'s wounds *" << std::endl;	
		return ;
	}
	return ;
}

std::string const &	AMateria::getType(void) const{
	return (this->type);
}
