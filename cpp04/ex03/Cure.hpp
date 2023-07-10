/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:43:04 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/10 12:43:05 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class	Cure: public AMateria{
	public:	
		Cure();	
		Cure(const Cure& obj);
		virtual	~Cure();
		AMateria*	operator=(const AMateria& obj);
		virtual AMateria*	clone() const;	
		virtual void	use(ICharacter& target) const;
};

#endif
