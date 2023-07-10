/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:42:35 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:44:23 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): type(""){
	std::cout << "AMateria Default Constructor called" << std::endl;	
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "AMateria Constructor called" << std::endl;	
}

AMateria::~AMateria(void){
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &	AMateria::getType(void) const{
	return (this->type);
}
