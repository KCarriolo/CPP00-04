/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:20:50 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 15:51:06 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal{
	public:
		WrongCat();				
		WrongCat(const WrongCat& obj);				
		WrongCat&	operator=(const WrongCat& obj);
		virtual 	~WrongCat();
};

#endif
