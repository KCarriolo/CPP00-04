#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain& obj){
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = obj;
}

Brain&	Brain::operator=(const Brain& obj){
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		*this = obj;
	}
	return (*this);
}

Brain::~Brain(void){
	std::cout << "Brain Destructor called" << std::endl;
}
