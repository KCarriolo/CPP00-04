/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:15:51 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:15:52 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(){
	std::cout << "ScavTrap Constructor called" << std::endl;
	_Name = "Scavinho";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap& obj): ClapTrap(){
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj){
	if (this != &obj){
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._hitPoints;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (_hitPoints > 0){ 
		if (_energyPoints > 0){ 
			std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;   
			_energyPoints -= 1;
			return ;
		}   
		else{
			std::cout << "ScavTrap " << _Name << " has no energy!" << std::endl;
			return ;
		}   
	}   
	else{
		std::cout << "ScavTrap " << _Name << " is dead!" << std::endl;
		return ;
	}   
	return ;	
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << _Name << " is now in Gatekeeper mode" << std::endl;	
}
