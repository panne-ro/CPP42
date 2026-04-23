// add header

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int                 _value;
	static const int    _fractionalBits = 8;

	public:
	int     getRawBits(void) const;
	void    setRawBits(int const raw);
	float 	toFloat( void ) const;
	int		toInt(void) const;

	Fixed();
	Fixed(const Fixed& f);
	Fixed(int n);
	Fixed(float n);

	Fixed& operator=(const Fixed& f);
	bool operator>(const Fixed& n) const;
	bool operator<(const Fixed& n) const;
	bool operator>=(const Fixed& n) const;
	bool operator<=(const Fixed& n) const;
	bool operator!=(const Fixed& n) const;
	bool operator==(const Fixed& n) const;

	Fixed	operator+(const Fixed& n) const;
	Fixed	operator-(const Fixed& n) const;
	Fixed	operator*(const Fixed& n) const;
	Fixed	operator/(const Fixed& n) const;

	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed&	min(Fixed& a, Fixed& b); 
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b); 
	static const Fixed&	max(const Fixed& a, const Fixed& b);

	~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif