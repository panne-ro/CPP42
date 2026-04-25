/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:57 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/25 13:38:58 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(5);
	Fixed b(6);
	Fixed c(5);

	std::cout << "operator >" << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (6 > 5) << std::endl;

	std::cout << "operator <" << std::endl;
	std::cout << (b < a) << std::endl;
	std::cout << (6 < 5) << std::endl;

	std::cout << "operator >=" << std::endl;
	std::cout << (c >= a) << std::endl;
	std::cout << (5 >= 5) << std::endl;

	std::cout << "operator <=" << std::endl;
	std::cout << (c <= a) << std::endl;
	std::cout << (5 <= 5) << std::endl;

	std::cout << "operator ==" << std::endl;
	std::cout << (b == a) << std::endl;
	std::cout << (6 == 5) << std::endl;

	std::cout << "operator !=" << std::endl;
	std::cout << (b != a) << std::endl;
	std::cout << (6 != 5) << std::endl;

	std::cout << "operator +" << std::endl;
	std::cout << a + b << std::endl;

	std::cout << "operator -" << std::endl;
	std::cout << a - b << std::endl;

	std::cout << "operator *" << std::endl;
	std::cout << a * b << std::endl;

	std::cout << "operator /" << std::endl;
	std::cout << a / b << std::endl;

	std::cout << "operator ++n" << std::endl;
	std::cout << ++a << std::endl;

	std::cout << "operator --n" << std::endl;
	std::cout << --a << std::endl;

	std::cout << "operator n++" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "operator n--" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "min" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "max" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}