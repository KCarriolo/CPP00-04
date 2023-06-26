/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:15:26 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:37:14 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _Name("Clapinho"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _Name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj){
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj){
	if (this != &obj){
		this->_hitPoints = obj._hitPoints;	
		this->_energyPoints = obj._energyPoints;	
		this->_attackDamage = obj._attackDamage;	
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_hitPoints > 0){
		if (_energyPoints > 0){
			std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;	
			_energyPoints -= 1;
			return ;
		}
		else{
			std::cout << "ClapTrap " << _Name << " has no energy!" << std::endl;
			return ;
		}
	}
	else{
		std::cout << "ClapTrap " << _Name << " is dead!" << std::endl;
		return ;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints > 0){
		if ((int)amount >= _hitPoints){
			std::cout << _Name << " received " << amount << " damage and died!" << std::endl;
			_hitPoints = 0;
			return ;
		}
		else{
			std::cout << _Name << " received " << amount << " damage!" << std::endl;
			_hitPoints -= amount;
			return ;
		}
	}
	std::cout << _Name << " is already dead!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints > 0){
		if (_energyPoints > 0){
			if (_hitPoints != 10){
				std::cout << _Name << " healed for " << amount << " points!" << std::endl;	
				_hitPoints += amount;
				return ;
			}
			std::cout << _Name << " is alread full of HP!" << std::endl;
			return ;
		}
		else{
			std::cout << _Name << " has no energy!" << std::endl;
			return ;
		}
	}
	std::cout << _Name << " is dead!" << std::endl;	
	return ;
}
