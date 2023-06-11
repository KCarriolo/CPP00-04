#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& obj);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& obj);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	private:
		std::string	_Name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
