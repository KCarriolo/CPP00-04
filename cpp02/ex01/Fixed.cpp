#include "Fixed.hpp"

Fixed::Fixed(void): fixedValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	this->fixedValue = copy.getRawBits();
}

Fixed::Fixed(const int number): fixedValue(number){
	std::cout << "Init integer constructor called" << std::endl; 
}

Fixed::Fixed(const float numberF){
	std::cout << "Init float constructor called" << std::endl;
	int n = 2;
	int	r = n;
	for(int i = 0; i < (fractBits - 1); i++)
		r *= n; 
	fixedValue = roundf(numberF * n);
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
	std::cout << "getRawBits member function called" << std::endl;	
	return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw){
	this->fixedValue = raw;	
}
