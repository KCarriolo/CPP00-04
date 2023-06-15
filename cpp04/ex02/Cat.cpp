#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Cat Constructor called" << std::endl;
	_neuron = new Brain();
}

Cat::Cat(Cat& obj): Animal("Cat"){
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->type = obj.type;
	this->_neuron = _neuron;
}

Cat&	Cat::operator=(const Cat& obj){
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		*this = obj;
	}
	return (*this);
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
	delete _neuron;
}

void	Cat::makeSound(void) const{
	std::cout << "Maw Aw! Prrr Prrr..." << std::endl;
	return ;
}
