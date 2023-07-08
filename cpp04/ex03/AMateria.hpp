#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"
//# include "GroundList.hpp"
# include <string>

class	ICharacter;

class	AMateria{
	protected:
		std::string			type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria& obj);
		virtual AMateria*			operator=(const AMateria& obj) = 0;
		virtual				~AMateria();

		std::string const & getType() const; //Return the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) const = 0;
};

#endif
