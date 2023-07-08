#include "GroundList.hpp"

GroundList::GroundList(void){
	std::cout << "GroundList Constructor called" << std::endl;
}

GroundList::GroundList(const GroundList& obj){
	std::cout << "GroundList Copy Constructor called" << std::endl;
	*this = obj;
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
	GroundList*	aux;

	aux = this;
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
