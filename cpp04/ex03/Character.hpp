#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class	Character: public AMateria{
	public:
		Character(std::string name);
		Character(Character& obj);
		Character&	operator=(const Character& obj);
		~Character();
		std::string		name;
		Amateria*		inventory[4];
		std::string const &	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	private:
};

#endif
