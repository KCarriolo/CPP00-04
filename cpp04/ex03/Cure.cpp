/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:00 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:02 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void): AMateria("cure"){
	std::cout << "Cure Default Constructor called" << std::endl;	
}

Cure::Cure(const Cure& obj): AMateria("cure"){
	std::cout << "Cure Copy Constructor called" << std::endl;
	this->type = obj.type;
}

AMateria*	Cure::operator=(const AMateria& obj){
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		return (obj.clone());
	return (this);
}

Cure::~Cure(void){
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const{
	return (new Cure(*this));	
}

void	Cure::use(ICharacter& target) const{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
