/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:42:57 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:45:31 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "GroundList.hpp"
# include "ICharacter.hpp"
# include <string>

class	Character: public ICharacter{
	public:
		Character();
		Character(std::string name);
		Character(Character& obj);
		virtual ~Character();
		std::string					name;
		AMateria*					inventory[4];
		virtual std::string const &	getName(void) const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		void						clearInventory(void);
		static GroundList*					floor;
};

#endif
