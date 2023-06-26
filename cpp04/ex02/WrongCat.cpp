/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:47 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:20:48 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& obj): WrongAnimal("WrongCat"){
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	this->type = obj.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj){
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		*this = obj;
	}
	return (*this);
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat Destructor called" << std::endl;
}
