#ifndef GROUNDLIST_HPP
# define GROUNDLIST_HPP
# include "Character.hpp"

class	GroundList: public Character{
	public:
		GroundList();			
		GroundList(GroundList& obj);
		GroundList&	operator=(const GroundList& obj);
		~GroundList();			
		void*		ref;
		void		clearGroundList(void);	
		GroundList	*next;
};

#endif
