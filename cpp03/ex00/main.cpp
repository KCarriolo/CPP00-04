#include "ClapTrap.hpp"

int	main(void)
{
	{
		std::cout << std::endl;
		ClapTrap trap("Vitin");

		trap.attack("Mesa");
	}
	{
		std::cout << std::endl;
		ClapTrap trap("Vitin");

		trap.takeDamage(9);
	}
	{
		std::cout << std::endl;
		ClapTrap trap("Vitin");

		trap.beRepaired(2);
		trap.takeDamage(8);
		trap.beRepaired(2);
	}
	{
		std::cout << std::endl;
		ClapTrap trap("Vitin");	

		for (int i = 0; i < 11; i++){
			trap.attack("Mesa");	
		}
	}
	{
		std::cout << std::endl;
		ClapTrap trap("Vitin");

		trap.takeDamage(10);
		trap.beRepaired(5);
		trap.attack("Mesa");
	}
}
