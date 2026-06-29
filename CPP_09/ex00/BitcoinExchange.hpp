/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:42:04 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/24 13:53:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <iostream>
#include <map>

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange& B);
	
	BitcoinExchange& operator=(BitcoinExchange& B);

	
	~BitcoinExchange();
	
	private:
	
	std::string	_Date;
	float		_Value;
};

#endif