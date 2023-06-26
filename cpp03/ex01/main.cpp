/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:14:04 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:14:05 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
		ClapTrap a(trap);
		ClapTrap b("Trap");
		b = a;

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
	{
		std::cout << std::endl;
		ScavTrap	a("Vitin");	
		ScavTrap	b;
		b = a;
	}
	{
		std::cout << std::endl;
		ScavTrap	trap("Vitin");
		trap.takeDamage(10);
		trap.attack("Mesa");
		trap.guardGate();
		trap.takeDamage(90);
	}
}
