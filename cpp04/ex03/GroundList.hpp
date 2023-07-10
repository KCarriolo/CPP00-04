#ifndef GROUNDLIST_HPP
# define GROUNDLIST_HPP
# include "AMateria.hpp"

class	GroundList{
	public:
		GroundList();			
		GroundList(GroundList& obj);
		GroundList(AMateria& ref);
		GroundList&	operator=(const GroundList& obj);
		~GroundList();			
		void		addBack(GroundList* lastNode);
		void		clearGroundList(void);	
	protected:
		AMateria*		ref;
		GroundList*		next;
};

#endif
