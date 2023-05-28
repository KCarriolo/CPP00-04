#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponType): name(name), weapon(weaponType){}

HumanA::~HumanA(void){}

void	HumanA::attack(void){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	return ;
}
