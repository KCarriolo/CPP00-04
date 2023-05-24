/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:24:55 by kefernan          #+#    #+#             */
/*   Updated: 2023/05/24 17:01:42 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::~Zombie(void){
	std::cout << this->name + " has been absorved by Blackhole x.X" << std::endl;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce(void){
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
