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
		Fixed&				operator=(const Fixed& obj);
		bool				operator>(const Fixed& n) const;
		bool				operator<(const Fixed& n) const;
		bool				operator>=(const Fixed& n) const;
		bool				operator<=(const Fixed& n) const;
		bool				operator==(const Fixed& n) const;
		bool				operator!=(const Fixed& n) const;
		Fixed				operator+(const Fixed& n);
		Fixed				operator-(const Fixed& n);
		Fixed				operator*(const Fixed& n);
		Fixed				operator/(const Fixed& n);
		Fixed&				operator++(void);
		Fixed				operator++(int);
		Fixed&				operator--(void);
		Fixed				operator--(int);
		static Fixed&		max(Fixed& x, Fixed& y);
		static Fixed&		min(Fixed& x, Fixed& y);
		static const Fixed&	max(const Fixed& x, const Fixed& y);
		static const Fixed&	min(const Fixed& x, const Fixed& y);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
	private:
		int					fixedValue;
		static const int	fractBits;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& in);

#endif
