#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie{	
	public:
		Zombie::Zombie(std::string name);
		Zombie::~Zombie(void);
		void	announce();		
}

Zombie* zombieHorde(int N, std::string name);

#endif
