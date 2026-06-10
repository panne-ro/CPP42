/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:23:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 14:40:55 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm* Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == form[i])
		{
			return ((this->*ptr[i])(target));
		}
	}
	throw CantCreateForm();
}

//create Form

AForm* Intern::CreateShrubbery(std::string target)
{
	std::cout << "ShrubberyCreationForm was create by an Intern" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::CreateRobotomy(std::string target)
{
	std::cout << "RobotomyRequestForm was create by an Intern" << std::endl;
	return (new RobotomyRequestForm(target));
}
AForm* Intern::CreatePresidential(std::string target)
{
	std::cout << "PresidentialPardonForm was create by an Intern" << std::endl;
	return (new PresidentialPardonForm(target));
}

//exception

const char* Intern::CantCreateForm::what() const throw()
{
	return ("Form doesn't exist");
}

Intern::Intern()
{
	form[0] = "ShrubberyCreationForm";
	form[1] = "RobotomyRequestForm";
	form[2] = "PresidentialPardonForm";
	
	ptr[0] = &Intern::CreateShrubbery;
	ptr[1] = &Intern::CreateRobotomy;
	ptr[2] = &Intern::CreatePresidential;
}