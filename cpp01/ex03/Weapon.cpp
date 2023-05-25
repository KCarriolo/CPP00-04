#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type){
	this->type = type;	
	return ;
}

const std::string&	getType(void){
	const std::string& ret = this->type;
	return (ret);
}
