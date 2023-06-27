/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:25:06 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/27 13:51:12 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class	Zombie{	
	public:
		Zombie(void);
		~Zombie(void);
		void		announce(void);		
		void		setName(std::string name);
	private:
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
