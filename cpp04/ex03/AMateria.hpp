/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:42:45 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:44:33 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"
# include <string>

class	ICharacter;

class	AMateria{
	protected:
		std::string			type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual AMateria*			operator=(const AMateria& obj) = 0;
		virtual				~AMateria();

		std::string const & getType() const; //Return the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) const = 0;
};

#endif
