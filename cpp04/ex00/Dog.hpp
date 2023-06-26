/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:16:27 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:16:28 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog: public Animal{
	public:
		Dog();
		Dog(Dog& obj);
		Dog&		operator=(const Dog& obj);
		~Dog();
		void		makeSound(void);	
};

#endif
