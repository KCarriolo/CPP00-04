/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:40 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:20:42 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal"){
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): type(name){
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj){
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;	
	*this = obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj){
	std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		type = obj.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void){
	return (this->type);
}

void	WrongAnimal::makeSound(void){
	std::cout << "REEEEEEEEEEEEE" << std::endl;
}
