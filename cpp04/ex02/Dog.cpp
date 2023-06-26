/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:28 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:50:32 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog Constructor called" << std::endl;
	_neuron = new Brain();
}

Dog::Dog(const Dog& obj): Animal("Dog"){
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = obj;
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
	delete _neuron;
}

void	Dog::makeSound(void) const{
	std::cout << "Grrr Au au!" << std::endl;
}
