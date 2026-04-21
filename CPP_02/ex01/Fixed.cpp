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
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = f.getRawBits();
}

Fixed::Fixed(int n)
{
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits;
}

Fixed::Fixed(float n)
{
	std::cout << "Float constructor called" << std::endl;
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

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}