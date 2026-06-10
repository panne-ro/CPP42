/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:00:12 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 11:05:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{	
		Bureaucrat Bob("Bob", 1);
		ShrubberyCreationForm	sform;
		RobotomyRequestForm		rform;
		PresidentialPardonForm	pform;
		
		Bob.executeForm(sform);
		Bob.signForm(sform);
		Bob.executeForm(sform);
		std::cout << "\n";
		Bob.signForm(rform);
		Bob.executeForm(rform);
		std::cout << "\n\n";
		Bob.signForm(pform);
		Bob.executeForm(pform);
		std::cout << "\n\n\n";
	}
	{
		Bureaucrat Bobby("Bobby", 145);
		ShrubberyCreationForm	sform("Univers");
		RobotomyRequestForm		rform;
		PresidentialPardonForm	pform;
		
		Bobby.signForm(sform);
		Bobby.executeForm(sform);
		std::cout << "\n";
		Bobby.signForm(rform);
		Bobby.executeForm(rform);
		std::cout << "\n";
		Bobby.signForm(pform);
		Bobby.executeForm(pform);
		std::cout << "\n\n\n";
	}
	{
		Bureaucrat Bobbu("Bobbu", 40);
		ShrubberyCreationForm	sform("42");
		RobotomyRequestForm		rform("you");
		PresidentialPardonForm	pform;
		
		Bobbu.signForm(sform);
		Bobbu.executeForm(sform);
		std::cout << "\n";
		Bobbu.signForm(rform);
		Bobbu.executeForm(rform);
		std::cout << "\n";
		Bobbu.signForm(pform);
		Bobbu.executeForm(pform);
	}
}