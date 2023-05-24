/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:25:11 by kefernan          #+#    #+#             */
/*   Updated: 2023/05/24 17:39:48 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1){
		int	z = 5;	
		Zombie* horde = zombieHorde(z, "Cadete");
		for (int i = 0; i < z; i++)
			horde[i].announce();
		delete [] horde;
		return (0);
	}
	else if (argc == 3){
		int	i = 0;
		while (argv[1][i]){
			if (!isdigit(argv[1][i++])){
				std::cout << "First argument must be a digit!" << std::endl;	
				return (1);
			}
		}
		i = 0;
		std::string	arg(argv[2]);
		while (argv[2][i]){
			if (!isalpha(argv[2][i++])){
				std::cout << "The name of the zombies must contain only alphabetical characters!" << std::endl;			
				return (1);
			}
		}
		if (arg.length() == 0){
			std::cout << "The name of the zombies can't be a empty string!" << std::endl;
			return (1);
		}
		int	z = atoi(argv[1]);
		Zombie* horde = zombieHorde(z, argv[2]);
		for (i = 0; i < z; i++)
			horde[i].announce();	
		delete [] horde;
		return (0);
	}
	std::cout << "Usage(1): ./horde" << std::endl;
	std::cout << "Usage(2): ./horde <number of zombies> <name of zombies>" << std::endl;
	return (1);
}
