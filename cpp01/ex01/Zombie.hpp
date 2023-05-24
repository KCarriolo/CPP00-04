/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:25:06 by kefernan          #+#    #+#             */
/*   Updated: 2023/05/24 17:02:46 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

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
