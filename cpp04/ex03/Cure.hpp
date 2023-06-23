#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class	Cure: public AMateria{
	public:	
		Cure();	
		Cure(Cure& obj);
		Cure&	operator=(const Cure& obj);
		~Cure();
		Cure*	clone();	
		void	use(ICharacter& target);
};

#endif
