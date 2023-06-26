/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:41 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:51:37 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog: public Animal{
	public:
		Dog();
		Dog(const Dog& obj);
		Dog&		operator=(const Dog& obj);
		~Dog();
		void		makeSound(void);	
	private:
		Brain*	_neuron;
};

#endif
