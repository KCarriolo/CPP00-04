/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:16:18 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/05 15:59:38 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& obj): Animal("Cat"){
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = obj;
}

Cat&	Cat::operator=(const Cat& obj){
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		this->type = obj.type;
	}
	return (*this);
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void){
	std::cout << "Maw Aw! Prrr Prrr..." << std::endl;
	return ;
}
