#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "GroundList.hpp"

class	Character: public AMateria{
	public:
		Character(std::string name);
		Character(Character& obj);
		Character&					operator=(const Character& obj);
		~Character();
		std::string					name;
		AMateria*					inventory[4];
		virtual std::string const &	getName(void) const;
		virtual void				equip(AMateria* m) const;
		//virtual void				unequip(int idx) const;
		virtual void				use(int idx, ICharacter& target) const;
		void						clearInventory(void);
		//GroundList					floor;
	private:
};

#endif
