/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:17 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:20:18 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain& obj){
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = obj;
}

Brain&	Brain::operator=(const Brain& obj){
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &obj){
		*this = obj;
	}
	return (*this);
}

Brain::~Brain(void){
	std::cout << "Brain Destructor called" << std::endl;
}
