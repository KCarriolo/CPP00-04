#ifndef CAT_HPP
# define CAT_HPP
# include "Cat.hpp"
# include "Animal.hpp"

class	Cat: public Animal{
	public:
		Cat();
		Cat(Cat& obj);
		Cat&		operator=(const Cat& obj);
		~Cat();
		void		makeSound(void);
};

#endif
