#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>

class	HumanB{
	private:
		std::string	name;
		std::string	weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon::weapon);
		void	attack(void);
};
#endif
