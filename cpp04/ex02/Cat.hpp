/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:26 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:49:40 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Cat.hpp"
# include "Animal.hpp"

class	Cat: public Animal{
	public:
		Cat();
		Cat(const Cat& obj);
		Cat&		operator=(const Cat& obj);
		~Cat();
		void		makeSound(void) const;
	private:
		Brain*	_neuron;
};

#endif
