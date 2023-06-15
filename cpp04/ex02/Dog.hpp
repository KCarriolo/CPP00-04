#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog: public Animal{
	public:
		Dog();
		Dog(Dog& obj);
		Dog&		operator=(const Dog& obj);
		~Dog();
		void		makeSound(void) const;	
		//void		setType(std::string typeInput);
		//std::string	getType();
	private:
		Brain*	_neuron;
};

#endif
