#include "Animal.hpp"

Animal::Animal(void): type("Unknow Animal"){
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(std::string name): type(name){
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal& obj){
	std::cout << "Animal Copy Constructor called" << std::endl;	
	*this = obj;
}

Animal&	Animal::operator=(const Animal& obj){
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		type = obj.type;
	}
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType(void){
	return (this->type);
}

void	Animal::makeSound(void){
	std::cout << "(Absolute Silence)" << std::endl;
}
