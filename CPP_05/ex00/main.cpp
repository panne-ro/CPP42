/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:03:49 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 12:22:40 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat Bob("Bob", 151);
			std::cout << Bob;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "\n\n\n";
	}
	{
		try
		{
			Bureaucrat John("John", 75);
			std::cout << John;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "\n\n\n";
	}
	{
		Bureaucrat Bob2("Bob2", 149);
		std::cout << Bob2;
		try
		{
			std::cout << "Decrease the grade of " << Bob2.GetName() << std::endl; 
			Bob2.DecreaseGrade(2);
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "\n\n\n";
	}
	{
		Bureaucrat John2("John2", 1);
		std::cout << John2;
		try
		{
			std::cout << "Increase the grade of " << John2.GetName() << std::endl; 
			John2.IncreaseGrade(2);
			std::cout << "New grade of "<< John2.GetName() << " is " << John2.GetGrade() << std::endl; 
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << "\n\n\n";
	}
	{
		Bureaucrat John3("John3", 75);
		std::cout << John3;
		try
		{
			std::cout << "Increase the grade of " << John3.GetName() << std::endl; 
			John3.IncreaseGrade(16);
			std::cout << "New grade of "<< John3.GetName() << " is " << John3.GetGrade() << std::endl; 
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}