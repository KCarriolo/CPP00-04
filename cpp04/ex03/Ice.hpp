#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice: public AMateria{
	public:	
		Ice();	
		Ice(Ice& obj);
		Ice&		operator=(const Ice& obj);
		~Ice();
		Ice*		clone();	
		void		use(ICharacter& target);
};

#endif