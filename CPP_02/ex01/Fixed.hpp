/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:16 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/25 13:38:17 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif