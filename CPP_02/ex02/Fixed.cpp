//add header


#include "Fixed.hpp"

// function
int     Fixed::getRawBits(void) const
{
	return _value;
}

void    Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)_value / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

//constuctor
Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const Fixed& f)
{
	_value = f.getRawBits();
}

Fixed::Fixed(int n)
{
	_value = n << _fractionalBits;
}

Fixed::Fixed(float n)
{
	_value = roundf(n * (1 << _fractionalBits));
}

//operator
Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		_value = f.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& n) const
{
	return (this->_value > n._value);
}

bool Fixed::operator<(const Fixed& n) const
{
	return (this->_value < n._value);
}

bool Fixed::operator>=(const Fixed& n) const
{
	return (this->_value >= n._value);
}

bool Fixed::operator<=(const Fixed& n) const
{
	return (this->_value <= n._value);
}

bool Fixed::operator==(const Fixed& n) const
{
	return (this->_value == n._value);
}

bool Fixed::operator!=(const Fixed& n) const
{
	return (this->_value != n._value);
}

//arithmetic operators

Fixed	Fixed::operator+(const Fixed& n) const
{
	Fixed result;

	result.setRawBits(this->_value + n._value);
	return (result);
}

Fixed	Fixed::operator-(const Fixed& n) const
{
	Fixed result;

	result.setRawBits(this->_value - n._value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& n) const
{
	Fixed result;

	long tmp = this->_value * n._value;
	result.setRawBits(tmp >> _fractionalBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed& n) const
{
	Fixed result;

	long tmp = (this->_value << _fractionalBits) / n._value;
	result.setRawBits(tmp);
	return (result);
}

//increment/decrement

Fixed	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_value--;
	return (tmp);
}

//max/min

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (b);
	return (a);
}

//destructor
Fixed::~Fixed()
{
}

//funcion not in Fixed
std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}
