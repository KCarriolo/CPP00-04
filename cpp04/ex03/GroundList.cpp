/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GroundList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:08 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:09 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GroundList.hpp"

GroundList::GroundList(void){
	std::cout << "GroundList Constructor called" << std::endl;
	this->ref = NULL;
	this->next = NULL;
}

GroundList::GroundList(GroundList& obj){
	std::cout << "GroundList Copy Constructor called" << std::endl;
	if (obj.ref == NULL)
		this->ref = NULL;
	else
		this->ref = obj.ref->clone();
}

GroundList::GroundList(AMateria &ref){
	this->ref = &ref;
}

GroundList&	GroundList::operator=(const GroundList& obj){
	std::cout << "GroundList Copy Assignment Operator called" << std::endl;
	if (this->ref == NULL)
		delete (this->ref);
	this->ref = obj.ref->clone();
	return (*this);
}

GroundList::~GroundList(void){
	std::cout << "GroundList Destructor called" << std::endl;
	if (this->ref != NULL)
		delete (ref);
}

void	GroundList::addBack(GroundList* lastNode){
	GroundList*	aux = this;

	while (aux->next)
		aux = aux->next;
	aux->next = lastNode;
	return ;
}

void	GroundList::clearGroundList(void){
	GroundList*	aux;	
	GroundList*	node;	

	node = this;
	while (node != NULL)
	{
		aux = node;
		node = node->next;
		delete (aux);
	}
	return ;
}
