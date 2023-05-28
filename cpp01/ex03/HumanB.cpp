#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL){}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void	HumanB::attack(void){
	if (!this->weapon){
		std::cout << name << " is unnarmed and attacks with his bare hands" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;	
}
