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

	~Fixed();

};

inline std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

#endif