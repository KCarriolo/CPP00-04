/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:13:21 by kefernan          #+#    #+#             */
/*   Updated: 2023/06/26 14:13:22 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
{
	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "--------------------" << std::endl;
}
{
	Fixed a(1000);

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a * b = " << (a / b) << std::endl;
	std::cout << "--------------------" << std::endl;
}
{
	Fixed a(10);

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << a << " < " << b << " = " << (a < b) << std::endl;
	std::cout << a << " > " << b << " = " << (a > b) << std::endl;
	std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
	std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
	std::cout << a << " == " << b << " = " << (a == b) << std::endl;
	std::cout << a << " != " << b << " = " << (a != b) << std::endl;
	std::cout << "--------------------" << std::endl;
}
}
