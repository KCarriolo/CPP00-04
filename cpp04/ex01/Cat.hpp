/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:35 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:19:36 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Cat.hpp"
# include "Animal.hpp"

class	Cat: public Animal{
	public:
		Cat();
		Cat(Cat& obj);
		Cat&		operator=(const Cat& obj);
		~Cat();
		virtual void		makeSound(void);
	private:
		Brain*	_neuron;
};

#endif
