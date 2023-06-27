/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:11:56 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/27 15:02:24 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <cctype>
# include <string>

class	Harl{
	public:
		Harl(void);
		~Harl(void);
		void		complain(std::string level);
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		std::string	lst_ref[4];
		void		(Harl::*f[4])(void);		
};

#endif
