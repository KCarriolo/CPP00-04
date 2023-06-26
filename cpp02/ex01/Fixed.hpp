/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:12:52 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:12:53 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed{
	public:
		Fixed(void);	
		Fixed(const int number);
		Fixed(const float numberF);
		~Fixed(void);	
		Fixed(const Fixed& copy);	
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					fixedValue;
		static const int	fractBits;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& in);

#endif
