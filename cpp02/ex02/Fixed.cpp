/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:13:11 by kefernan          #+#    #+#             */
/*   Updated: 2023/07/03 15:09:58 by kefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::fractBits = 8;

Fixed::Fixed(void): fixedValue(0){}

Fixed::Fixed(const Fixed& copy){
	*this = copy;
}

Fixed::Fixed(const int number): fixedValue(number << 8){}

Fixed::Fixed(const float numberF){
	this->fixedValue = roundf(numberF * (1 << this->fractBits));
	return ;
}

Fixed& Fixed::operator=(const Fixed& obj){
	if (this != &obj){
		this->fixedValue = obj.getRawBits();	
	}
	return (*this);
}

Fixed::~Fixed(void){}

int	Fixed::getRawBits(void) const{
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw){
	this->fixedValue = raw << fractBits;	
}

int	Fixed::toInt(void) const{
	return (this->fixedValue >> this->fractBits);
}

float	Fixed::toFloat(void) const{
	if (fixedValue < 0){
		return ((float)~this->fixedValue / (float)(1 << this->fractBits));
	}
	return ((float)this->getRawBits() / (float)(1 << this->fractBits));
}

std::ostream&	operator<<(std::ostream& out, const Fixed& in){
	out << in.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed& n) const{
	return (this->fixedValue > n.getRawBits());
}

bool	Fixed::operator<(const Fixed& n) const{
	return (this->fixedValue < n.getRawBits());
}

bool	Fixed::operator>=(const Fixed& n) const{
	return (this->fixedValue >= n.getRawBits());
}

bool	Fixed::operator<=(const Fixed& n) const{
	return (this->fixedValue <= n.getRawBits());
}

bool	Fixed::operator==(const Fixed& n) const{
	return (this->fixedValue == n.getRawBits());
}

bool	Fixed::operator!=(const Fixed& n) const{
	return (this->fixedValue != n.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& n){
	Fixed ret(*this);
	ret.setRawBits(ret.toFloat() + n.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& n){
	Fixed ret(*this);
	ret.setRawBits(ret.toFloat() - n.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(const Fixed& n){
	Fixed ret(*this);
	ret.setRawBits((ret.toFloat() * n.toFloat()));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& n){
	Fixed ret(*this);
	ret.setRawBits((ret.toFloat() / n.toFloat()));
	return (ret);
}

Fixed&	Fixed::operator++(void){
	this->fixedValue++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	ret = *this;
	this->fixedValue++;
	return (ret);
}

Fixed&	Fixed::operator--(void){
	this->fixedValue--;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	ret = *this;
	this->fixedValue--;
	return (ret);
}

Fixed&	Fixed::max(Fixed& x, Fixed& y){
	if (x > y)
		return (x);
	return (y);
}

const Fixed&	Fixed::max(const Fixed& x, const Fixed& y){
	if (x > y)
		return (x);
	return (y);
}

Fixed&	Fixed::min(Fixed& x, Fixed& y){
	if (x < y)
		return (x);
	return (y);
}

const Fixed&	Fixed::min(const Fixed& x, const Fixed& y){
	if (x < y)
		return (x);
	return (y);
}
