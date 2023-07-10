/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:18 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:19 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice: public AMateria{
	public:	
		Ice();	
		Ice(const Ice& obj);
		virtual		~Ice();
		AMateria*	operator=(const AMateria& obj);
		virtual AMateria*	clone() const;	
		virtual void		use(ICharacter& target) const;
};

#endif
