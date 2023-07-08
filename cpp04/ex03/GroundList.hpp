#ifndef GROUNDLIST_HPP
# define GROUNDLIST_HPP
# include "AMateria.hpp"

class	GroundList{
	public:
		GroundList();			
		GroundList(const GroundList& obj);
		GroundList(AMateria& ref);
		GroundList&	operator=(const GroundList& obj);
		~GroundList();			
		AMateria*		ref;
		GroundList*		next;
		void		addBack(GroundList* lastNode);
		void		clearGroundList(void);	
};

#endif
