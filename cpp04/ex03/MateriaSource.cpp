/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:38 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:45:58 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (int i = 0;i < 4;i++)
		this->bookMaterias[i] = NULL;
	this->_lastLearned = -1;
}

MateriaSource::MateriaSource(const MateriaSource& obj){
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (int i = 0;i < 4;i++){
		if (obj.bookMaterias[i] != NULL)
			this->bookMaterias[i] = obj.bookMaterias[i]->clone();
		else
			this->bookMaterias[i] = NULL;
	}
	this->_lastLearned = obj._lastLearned;
}

MateriaSource::~MateriaSource(void){
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0;i < 4;i++){
		if (this->bookMaterias[i] != NULL){
			delete (this->bookMaterias[i]);			
		}
	}
}

void	MateriaSource::learnMateria(AMateria* skill){
	unsigned int i = 0;
	while (i < 4 && this->bookMaterias[i] != NULL)
		i++;
	if (i == 4){
		delete (this->bookMaterias[this->_lastLearned]);
		this->bookMaterias[_lastLearned] = skill;
	}
	else
		this->bookMaterias[i] = skill;
	this->_lastLearned++;
	if (this->_lastLearned == 4)
		this->_lastLearned = 0;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	int	i = -1;
	while (++i < 4)
	{
		if (this->bookMaterias[i] != NULL && this->bookMaterias[i]->getType() == type)
			return (this->bookMaterias[i]->clone());
	}
	return (0);
}
