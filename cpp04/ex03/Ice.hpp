#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice: public AMateria{
	public:	
		Ice();	
		Ice(const Ice& obj);
		virtual		~Ice();
		AMateria*	operator=(const AMateria& obj);
		virtual AMateria*	clone() const;	
		virtual void		use(ICharacter& target) const;
};

#endif
