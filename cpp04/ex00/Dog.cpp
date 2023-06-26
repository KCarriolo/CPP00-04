/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:16:24 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:16:25 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog& obj): Animal("Dog"){
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->type = obj.type;
}

Dog&	Dog::operator=(const Dog& obj){
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		*this = obj;
	}
	return (*this);
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void){
	std::cout << "Grrr Au au!" << std::endl;
}
