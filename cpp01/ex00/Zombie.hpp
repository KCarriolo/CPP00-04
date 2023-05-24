/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <kefernan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:58:53 by kefernan          #+#    #+#             */
/*   Updated: 2023/05/24 16:58:56 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);	
	private:
		std::string	name;
};	

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
