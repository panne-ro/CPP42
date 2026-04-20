/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:30:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/20 14:12:50 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Debug messages contain contextual information" << std::endl;
}

void Harl::info( void )
{
	std::cout << "These messages contain extensive information" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning messages indicate a potential issue in the system" << std::endl;
}

void Harl::error( void )
{
	std::cout << "These messages indicate that an unrecoverable error has occurred" << std::endl;
}

void Harl::complain(std::string level)
{
	size_t i = 0;

	while (i < levels->size() && levels[i] != level)
		i++;
	if (levels[i] != level)
		return ;
	(this->*ptr[i])();
}

Harl::Harl()
{
	levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
	
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
}

Harl::~Harl()
{
}