/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:16:15 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:16:16 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

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
