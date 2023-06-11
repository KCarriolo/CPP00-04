#include "Fixed.hpp"

Fixed::Fixed(void): fixedValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int number): fixedValue(number << 8){
	std::cout << "Int constructor called" << std::endl; 
}

Fixed::Fixed(const float numberF){
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = roundf(numberF * (1 << this->fractBits));
	return ;
}

Fixed& Fixed::operator=(const Fixed& obj){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj){
		this->fixedValue = obj.getRawBits();	
	}
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw){
	this->fixedValue = raw;	
}

int	Fixed::toInt(void) const{
	return (this->fixedValue >> this->fractBits);
}

float	Fixed::toFloat(void) const{
	if (fixedValue < 0){
		return ((float)~this->fixedValue / (float)(1 << this->fractBits));
	}
	return ((float)this->fixedValue / (float)(1 << this->fractBits));
}

std::ostream&	operator<<(std::ostream& out, const Fixed& in){
	out << in.toFloat();
	return (out);
}

const int	Fixed::fractBits = 8;
