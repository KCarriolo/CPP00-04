/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:13:44 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:13:45 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
