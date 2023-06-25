#include "Character.hpp"

Character::Character(std::string name): name(name){
	std::cout << "Character Constructor called" << std::endl;			
	for (int i = 0, i < 4;i++)
		this->inventory[i] = {0};
}

Character::Character(Character& obj){
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = obj;
	this->clearInventory();
}

Character&	Character::operator=(const Character& obj){
	std::cout << "Character Copy Assignment Operator called" << std::endl;	
	if (this != &obj)
		*this = obj;
	this->clearInventory();
	return (*this);
}

~Character::~Character(void){
	std::cout << "Character Destructor called" << std::endl;
	this->clearInventory();
	//this->floor.clearGroundList();
}

std::string const &	Character::getName(void) const{
	return (this->name);	
}

void	Character::equip(AMateria* m) const{
	int i = -1;
	while (++i < 4)
	{
		if (this->inventory[i] == NULL){
			this->inventory[i] = m;
			break ;
		}
	}
	return ;
}
/*
void	Character::unequip(int idx) const{
	if (idx < 0 || idx > 3){
		std::cout << "Values in the inventory between 0 - 3 only!" << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL){
		this->floor.ref = this->inventory[idx];
		this->inventory[idx] = {0};
	}
	return ;
}
*/
void	Character::use(int idx, ICharacter& target) const{
	if (idx < 0 || idx > 3){
		std::cout << "Materia's must be inside slots between 0 - 3!" << std::endl;
		return ;
	}
	if (inventory[idx] == NULL){
		return ;
	}
	this->inventory[idx]->use(target);
	return ;
}

void	Character::clearInventory(void){
	int i = -1;
	while(++i < 4)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	return ;
}
