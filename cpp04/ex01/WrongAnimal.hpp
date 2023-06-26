/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:53 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:19:54 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal& obj);
		WrongAnimal&	operator=(const WrongAnimal& obj);
		virtual			~WrongAnimal();
		std::string		getType(void);
		virtual void	makeSound(void);
	protected:
		std::string	type;
};

#endif
