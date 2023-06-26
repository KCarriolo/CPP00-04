/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:20 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:20:21 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain{
	public:
		Brain();
		Brain(Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain();
	protected:
		std::string	ideas[100];
};

#endif
