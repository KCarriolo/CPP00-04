#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain{
	public:
		Brain();
		Brain(Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain();
	protected:
		std::string	ideas[100];
};

#endif
