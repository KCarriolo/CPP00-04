/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:24 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:19:25 by kefernan         ###   ########.fr       */
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
		Animal(Animal& obj);
		Animal&				operator=(const Animal& obj);
		virtual				~Animal();
		std::string			getType(void);
		virtual void		makeSound(void);
	protected:
		std::string			type;
};

#endif
