// add header

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	int                 _value;
	static const int    _fractionalBits = 8;

	public:
	int     getRawBits(void) const;
	void    setRawBits(int const raw);

	Fixed();
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	~Fixed();
};
#endif