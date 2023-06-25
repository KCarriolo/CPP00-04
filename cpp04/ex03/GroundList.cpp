#include "GroundList.hpp"

GroundList::GroundList(void){
	std::cout << "GroundList Constructor called" << std::endl;
}

GroundList::GroundList(GroundList& obj){
	std::cout << "GroundList Copy Constructor called" << std::endl;
	*this = obj;
}

GroundList&	GroundList::operator=(const GroundList& obj){
	std::cout << "GroundList Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

GroundList::~GroundList(void){
	std::cout << "GroundList Destructor called" << std::endl;
}

void	GroundList::clearGroundList(void){
	
}
