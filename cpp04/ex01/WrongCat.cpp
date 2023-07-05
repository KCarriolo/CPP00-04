/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:56 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/05 16:03:45 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal("WrongCat"){
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj){
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		this->type = obj.type;
	}
	return (*this);
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound(void){
	std::cout << "Meow..?" << std::endl;
}
