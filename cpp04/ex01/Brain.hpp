/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:29 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:41:26 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain{
	public:
		Brain();
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain();
	protected:
		std::string	ideas[100];
};

#endif
