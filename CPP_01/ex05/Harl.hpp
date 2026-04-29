/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:30:11 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/29 16:18:13 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>

class Harl
{
private:
	std::string	levels[4];
	void		(Harl::*ptr[4])();

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:
	void complain(std::string level);

	Harl();
	~Harl();
};
 #endif