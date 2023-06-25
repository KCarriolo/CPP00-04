#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	std::cout << "MateriaSource Constructor called" << std::endl;
	for (int i = 0;i < 4;i++)
		this->bookMaterias[i] = {0};
}

MateriaSource::MateriaSource(MateriaSource& obj){
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = obj;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj){
	std::cout << "MateriaSource Copy Assignment Operator called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

MateriaSource::~MateriaSource(void){
	std::cout << "MateriaSource Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* skill){
	int	i = -1;
	while (++i < 4)
	{
		if (this->bookMaterias[i] == NULL){
			this->bookMaterias[i] = skill;
			return ;
		}
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	if (type != "ice" || type != "cure")
		return (0);
	int	i = -1;
	while (++i < 4)
	{
		if (this->bookMaterias[i]->getType() == type)
			return (this->bookMaterias[i]->clone());
	}
	return (NULL);
}
