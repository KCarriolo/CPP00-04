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
		virtual void		makeSound(void);
	private:
		Brain*	_neuron;
};

#endif
