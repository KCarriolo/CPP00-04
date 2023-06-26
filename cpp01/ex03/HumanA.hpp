/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:10:42 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:10:44 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(std::string name, Weapon& weaponType);
		~HumanA(void);
		void	attack(void);	
	private:
		std::string	name;
		Weapon&		weapon;
};
#endif
