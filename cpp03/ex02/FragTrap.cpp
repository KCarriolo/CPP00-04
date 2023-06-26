/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:15:34 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:15:36 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(){
	std::cout << "FragTrap Constructor called" << std::endl;
	_Name = "Fraguito";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap Constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap& obj): ClapTrap(){
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj){
	if (this != &obj){
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._hitPoints;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (_hitPoints > 0){
		if (_energyPoints > 0){
			std::cout << "FragTrap " << _Name << " sended high fives to everybody!" << std::endl;	
			_energyPoints -= 1;
			return ;
		}
		else{
			std::cout << "FragTrap " << _Name << " has no energy!" << std::endl;
			return ;
		}
	}
	std::cout << _Name << " is dead!" << std::endl;
	return ;
}
