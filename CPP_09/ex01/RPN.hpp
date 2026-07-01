/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:40:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/01 14:47:37 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
	std::stack<int>		stack;
	long				result;
	
	public:
	RPN();
	RPN(RPN& r);
	RPN& operator=(RPN& r);
	
	bool	Resolve(std::string PME);
	void	DoCalcul(char op);
	long	GetResult();
	
	~RPN();
};

#endif