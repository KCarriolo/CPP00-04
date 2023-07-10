#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include <iostream>

class	MateriaSource: public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& obj);
		virtual				~MateriaSource();
		AMateria*			bookMaterias[4];
		void				learnMateria(AMateria* skill);
		virtual AMateria*	createMateria(std::string const & type);
	private:
		int					_lastLearned;
};

#endif
