/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:42:52 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:45:25 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "GroundList.hpp"

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
	for (int i = 0;i < 4;i++){
		if (obj.inventory[i] != NULL)
			this->inventory[i] = obj.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->name = obj.name;
}

Character::~Character(void){
	std::cout << "Character Destructor called" << std::endl;

	this->clearInventory();
	if (this->floor != NULL)
		this->floor->clearGroundList();
	this->floor = NULL;
}

std::string const &	Character::getName(void) const{
	return (this->name);	
}

void	Character::equip(AMateria* m){
	int i = -1;
	if (m == NULL)
		return ;
	while (++i < 4)
	{
		if (this->inventory[i] == NULL){
			this->inventory[i] = m;
			break ;
		}
	}
	if (i == 4)
		delete m;
	return ;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::cout << "Values in the inventory between 0 - 3 only!" << std::endl;
		return ;
	}
	if (this->floor == NULL)
		this->floor = new GroundList(*this->inventory[idx]);
	else{
		this->floor->addBack(new GroundList (*this->inventory[idx]));
	}
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
	std::cout << this->getName();
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
