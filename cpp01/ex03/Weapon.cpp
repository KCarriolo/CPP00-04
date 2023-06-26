/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:10:23 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:10:25 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): type("bare hands"){}

Weapon::Weapon(std::string name) : type(name){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type){
	this->type = type;	
	return ;
}

const std::string&	Weapon::getType(void){
	const std::string& ret = type;
	return (ret);
}
