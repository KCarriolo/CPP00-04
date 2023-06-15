#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal& obj);
		WrongAnimal&	operator=(const WrongAnimal& obj);
		virtual			~WrongAnimal();
		std::string		getType(void);
		virtual void	makeSound(void);
	protected:
		std::string	type;
};

#endif
