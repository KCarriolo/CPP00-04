#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie* zumba = newZombie("Zumba");
	zumba->announce();
	randomChump("Zumbo");
	delete zumba;
	return (0);
}
