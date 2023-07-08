#include "Character.hpp"

GroundList*	Character::floor = NULL;

Character::Character(void): name("Unknow"){
	std::cout << "Character Default Constructor called" << std::endl;			
	for (int i = 0; i < 4;i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name): name(name){
	std::cout << "Character Constructor called" << std::endl;			
	for (int i = 0; i < 4;i++)
		this->inventory[i] = NULL;
}

Character::Character(Character& obj){
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = obj;
	this->clearInventory();
}

Character&	Character::operator=(const Character& obj){
	std::cout << "Character Copy Assignment Operator called" << std::endl;	
	if (this != &obj){
		for (int i = 0;i < 4;i++)
			this->inventory[i] = obj.inventory[i];
	}
	this->clearInventory();
	return (*this);
}

Character::~Character(void){
	std::cout << "Character Destructor called" << std::endl;
	this->clearInventory();
	if (this->floor != NULL)
		this->floor->clearGroundList();
}

std::string const &	Character::getName(void) const{
	return (this->name);	
}

void	Character::equip(AMateria* m){
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

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::cout << "Values in the inventory between 0 - 3 only!" << std::endl;
		return ;
	}
	if (this->floor == NULL)
		this->floor = new GroundList(*this->inventory[idx]);
	else
		this->floor->addBack(new GroundList (*this->inventory[idx]));
	/*if (this->inventory[idx] != NULL){
		//getLastNode();
		this->floor->ref = this->inventory[idx];*/
		this->inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target){
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
			delete (this->inventory[i]);
	}
	return ;
}
