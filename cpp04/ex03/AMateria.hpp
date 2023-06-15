#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class	AMateria{
	protected:


	public:
		AMateria(std::string const & type);

		std::string const & getType() const; //Return the materia type
};
