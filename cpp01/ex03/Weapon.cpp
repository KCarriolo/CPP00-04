#include "Weapon.hpp"

Weapon::Weapon(void): type("bare hands"){}

Weapon::Weapon(std::string name) : type(name){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type){
	this->type = type;	
	return ;
}

const std::string&	Weapon::getType(void){
	const std::string& ret = type;
	return (ret);
}
