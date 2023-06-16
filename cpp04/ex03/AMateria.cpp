#include "AMateria.hpp"

AMateria::AMateria(std::string const & type){
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

/*std::string const &	AMateria::getType(void) const{
	std::string const	temp;

	temp = 
}*/
