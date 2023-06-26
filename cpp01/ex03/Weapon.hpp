/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:10:29 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:10:31 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class	Weapon{
	private:
		std::string	type;
	public:
		Weapon(void);
		Weapon(std::string name);
		~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
};
#endif
