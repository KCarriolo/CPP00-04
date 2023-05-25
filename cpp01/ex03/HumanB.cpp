#include "HumanB.hpp"

HumanB(std::string name){
	this->name = name;
}

~HumanB(void){}

void	setWeapon(Weapon::weapon){
	this->weapon = weapon;
}

void	attack(void){
	std::cout << name << " attacks with their" << weapon << std::endl;	
}
