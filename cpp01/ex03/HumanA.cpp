#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon::weapon){
	this->name = name;
	this->weapon = weapon.type;	
}

HumanA::~HumanA(){}

void	attack(void){
	std::cout << name << " attacks with their" << weapon << std::endl;
}
