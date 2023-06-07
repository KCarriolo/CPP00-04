#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

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
		static const int	fractBits = 8;
};

void	operator<<(Fixed& obj);

#endif
