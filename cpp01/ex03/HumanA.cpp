/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:04:34 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:08:13 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponType): name(name), weapon(weaponType){}

HumanA::~HumanA(void){}

void	HumanA::attack(void){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	return ;
}
