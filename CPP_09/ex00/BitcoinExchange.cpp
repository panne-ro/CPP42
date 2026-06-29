/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 10:17:52 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/29 12:56:44 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream database(DB_FILE);
	std::string line;
	std::getline(database, line);
	while (std::getline(database, line))
	{
		std::stringstream ss(line);
		std::string date, rate;
		std::getline(ss, date, ',');
		std::getline(ss, rate, ',');
		_RefMap[date] = std::atof(rate.c_str());
	}
}

void	BitcoinExchange::ReadDB(char *input) 
{
	std::ifstream DB(input);
	std::string line;
	std::getline(DB, line);
	while (std::getline(DB, line))
	{
		std::stringstream ss(line);
		std::string date, rate;
		std::getline(ss, date, '|');
		std::getline(ss, rate, '|');
		date = date.substr(0, date.find_last_not_of(" ") + 1);
		if (!rate.empty() && rate.find_first_not_of(" ") != std::string::npos)
			rate = rate.substr(rate.find_first_not_of(" "));
		else
			rate = "";
		ProcessLine(date, rate);
	}
}

int		BitcoinExchange::GoodDate(std::string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		return 1;
	}
	if (DateExist(date) == 1)
		return (1);
	return (0);
}

int BitcoinExchange::DateExist(std::string date)
{
	int m = std::atoi(date.substr(5, 2).c_str());
	int d = std::atoi(date.substr(8, 2).c_str());

	if (m < 1 || m > 12 || d < 1 || d > 31)
		return 1;
	return 0;
}

int	BitcoinExchange::ParseLine(std::string date, std::string rate)
{
	if (GoodDate(date) == 1 || rate.empty())
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return 1;
	}
	if (std::atof(rate.c_str()) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return 1;
	}
	if (std::atof(rate.c_str()) < 0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return 1; 
	}
	return (0);	
}

void BitcoinExchange::ProcessLine(std::string date, std::string rate)
{
	if (ParseLine(date, rate) == 1)
		return;
	std::map<std::string, float>::iterator it = _RefMap.lower_bound(date);
	if (it == _RefMap.end() || it->first != date)
	{
		if (it == _RefMap.begin())
		{
			std::cerr << "Error: date before the oldest in database" << std::endl;
			return;
		}
		--it;
	}
	std::cout << date << " => " << std::atof(rate.c_str()) << " = " << std::atof(rate.c_str()) * it->second << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
}