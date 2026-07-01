/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:44:18 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/01 15:10:33 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//constructeurs

RPN::RPN()
{
}

RPN::RPN(RPN& r)
{
	this->result = r.result;
	this->stack = r.stack;
}

RPN& RPN::operator=(RPN& r)
{
	if (this != &r)
	{
		this->result = r.result;
		this->stack = r.stack;
	}
	return (*this);
}

//Methodes

bool	RPN::Resolve(std::string PME)
{
	size_t lenght = PME.length();
	for (size_t i = 0; i < lenght; i++)
	{
		if (PME[i] == ' ')
			continue;
		else if (isdigit(PME[i]) && isdigit(PME[i+1]))
		{
			std::cout << "Error: Bad input: " << PME[i] << PME[i+1] << std::endl;
			return (false);
		}
		else if	(PME[i] == '-' && isdigit(PME[i+1]))
		{
			int j = (PME[i+1] - '0') * -1;
			stack.push(j);
			i++;
		}
		else if (isdigit(PME[i]))
			stack.push(PME[i] - '0');
		else if (PME[i] == '+' || PME[i] == '-' || PME[i] == '*' || PME[i] == '/')
		{
			try
			{
				DoCalcul(PME[i]);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return (false);
			}
		}
		else
		{
			std::cout << "Error: Bad input: " << PME[i] << std::endl;
			return (false);
		}
	}
	result = stack.top();
	stack.pop();
	if (!stack.empty())
	{
		std::cout << "Error: Missing or misplace operator" << std::endl;
		return (false);
	}
	return (true);
}

void	RPN::DoCalcul(char op)
{
	if (stack.empty())
		throw std::runtime_error("Error: Too much opperator");
	int j = stack.top();
	stack.pop();
	
	if (stack.empty())
		throw std::runtime_error("Error: Too much opperator");
	int i = stack.top();
	stack.pop();
	
	switch(op)
	{
		case '+':
			stack.push(i + j);
			return;
		case '-':
			stack.push(i - j);
			return;
		case '*':
			stack.push(i * j);
			return;
		case '/':
			stack.push(i / j);
			return;
	}
}

long	RPN::GetResult()
{
	return (result);
}

//destructeur

RPN::~RPN()
{
}