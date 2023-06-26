/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:16:12 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:39:21 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Unknow Animal"){
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(std::string name): type(name){
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& obj){
	std::cout << "Animal Copy Constructor called" << std::endl;	
	*this = obj;
}

Animal&	Animal::operator=(const Animal& obj){
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		type = obj.type;
	}
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType(void){
	return (this->type);
}

void	Animal::makeSound(void){
	std::cout << "(Absolute Silence)" << std::endl;
}
