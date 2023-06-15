#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal{
	public:
		WrongCat();				
		WrongCat(WrongCat& obj);				
		WrongCat&	operator=(const WrongCat& obj);
		virtual 	~WrongCat();
};

#endif
