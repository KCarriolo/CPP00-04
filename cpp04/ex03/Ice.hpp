#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice: public AMateria{
	public:	
		Ice();	
		Ice(const Ice& obj);
		AMateria*		operator=(const AMateria& obj);
		virtual		~Ice();
		virtual AMateria*	clone() const;	
		void		use(ICharacter& target);
};

#endif
