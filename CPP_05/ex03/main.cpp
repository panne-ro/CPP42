/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:00:12 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 14:57:42 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Bureaucrat	Bob("Bob", 1);
		AForm*		Form;
		Intern		Someone;
		
		try
		{
			Form = Someone.makeForm("ManuForm", "World");
			Bob.signForm(*Form);
			Bob.executeForm(*Form);
			delete Form;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "\n";
	}
	{
		Bureaucrat	Bobby("Bobby", 1);
		AForm*		sForm;
		AForm*		rForm;
		AForm*		pForm;
		Intern		Someone;
		
		
		try
		{
			sForm = Someone.makeForm("ShrubberyCreationForm", "Forest");
			Bobby.signForm(*sForm);
			Bobby.executeForm(*sForm);
			std::cout << "\n";
			rForm = Someone.makeForm("RobotomyRequestForm", "Forest");
			Bobby.signForm(*rForm);
			Bobby.executeForm(*rForm);
			std::cout << "\n";
			pForm = Someone.makeForm("PresidentialPardonForm", "Forest");
			Bobby.signForm(*pForm);
			Bobby.executeForm(*pForm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete sForm;
		delete rForm;
		delete pForm;
	}
}