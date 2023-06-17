#include "Character.hpp"

Character::Character(std::string name): name(name){
	std::cout << "Character Constructor called" << std::endl;			
	for (int i = 0, i < 4;i++)
		this->inventory[i] = {0};
}

Character::Character(Character& obj){
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = obj;
}

Character&	Character::operator=(const Character& obj){
	std::cout << "Character Copy Assignment Operator called" << std::endl;	
	if (this != &obj)
		*this = obj;
	return (*this);
}

~Character::~Character(void){
	std::cout << "Character Destructor called" << std::endl;
}

std::string const &	getName(void) const{
	return (this->name);	
}

void	equip(AMateria* m){
	int i = -1;
	while (++i < 4)
	{
		if (this->inventory[i] == NULL){
			this->inventory[i] = m;
			break ;
		}
	}
}

/*void	unequip(int idx){
	if (this->inventory[idx] != NULL)
}*/
