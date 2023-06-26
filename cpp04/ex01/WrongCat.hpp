/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:19:59 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:20:01 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal{
	public:
		WrongCat();				
		WrongCat(WrongCat& obj);				
		WrongCat&	operator=(const WrongCat& obj);
		virtual 	~WrongCat();
};

#endif
