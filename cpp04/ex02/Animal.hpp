/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:14 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:49:05 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class	Animal{
	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal& obj);
		Animal&				operator=(const Animal& obj);
		virtual				~Animal();
		std::string			getType(void);
		virtual void		makeSound(void) const = 0;
	protected:
		std::string			type;
};

#endif
