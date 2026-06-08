/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:03:49 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/08 11:51:00 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Form	Paper("Paper", false, 165, 15);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "\n\n";
	}
	{
		try
		{
			Form	Paper("Paper", false, 15, 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "\n\n";
	}
	{
		Bureaucrat	Bob("Bob", 1);
		Form		Importante_Paper("Importanet_Paper", false, 25, 25);
		
		std::cout << Bob << Importante_Paper;
		Bob.signForm(Importante_Paper);
		std::cout << "\n\n";
	}
	{
		Bureaucrat	Bob("Bob", 150);
		Form		Importante_Paper("Importanet_Paper", false, 25, 25);
		
		std::cout << Bob << Importante_Paper;
		Bob.signForm(Importante_Paper);
		std::cout << "\n\n";
	}
	{
		Bureaucrat	Bob("Bob", 150);
		Form		Importante_Paper;
		
		std::cout << Bob << Importante_Paper;
		Bob.signForm(Importante_Paper);
	}
}