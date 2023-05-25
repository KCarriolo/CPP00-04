#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>

class	HumanA{
	private:
		std::string	name;
		std::string	weapon;
	public:
		HumanA(std::string name, Weapon::weapon);
		~HumanA(void);
		void	attack(void);	
};
#endif
