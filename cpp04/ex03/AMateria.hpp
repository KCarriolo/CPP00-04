#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class	AMateria: public ICharacter{
	protected:

	public:
		AMateria(std::string const & type);
		AMateria(AMateria& obj);
		AMateria&			operator=(const AMateria& obj);
		~AMateria();

		std::string			type;
		std::string const & getType() const; //Return the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
