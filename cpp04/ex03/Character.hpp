#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class	Character: public AMateria{
	public:
		Character(std::string name);
		Character(Character& obj);
		Character&					operator=(const Character& obj);
		~Character();
		std::string					name;
		Amateria*					inventory[4];
		virtual std::string const &	getName(void) const;
		virtual void				equip(AMateria* m) const;
		virtual void				unequip(int idx) const;
		virtual void				use(int idx, ICharacter& target) const;
	private:
};

#endif
