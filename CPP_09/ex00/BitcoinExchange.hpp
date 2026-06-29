/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 13:42:04 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/29 12:22:55 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
#define BITCOIN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <map>

#define DB_FILE "./data.csv"

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange& B);
	
	BitcoinExchange& operator=(BitcoinExchange& B);

	void	ReadDB(char *DB);
	int		GoodDate(std::string date);
	int		DateExist(std::string date);
	int		ParseLine(std::string date, std::string rate);
	void	ProcessLine(std::string date, std::string rate);
	
	~BitcoinExchange();
	
	private:
	
	std::map<std::string, float>	_RefMap;
};

#endif