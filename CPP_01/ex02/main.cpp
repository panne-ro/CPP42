/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 12:38:02 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/20 15:23:01 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS A BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The Memory Adress Of The String : " << &str << std::endl;
	std::cout << "The Memory Adress Held By stringPTR 	: " << &stringPTR << std::endl;
	std::cout << "The Memory Adress Held By stringREF 	: " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Value Of The String           : " << str << std::endl;
	std::cout << "Value Pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value Pointed by stringREF : " << stringREF << std::endl;
}