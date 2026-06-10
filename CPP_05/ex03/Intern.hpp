/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 13:23:30 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 14:33:46 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	private:
		std::string		form[3];
		AForm*			(Intern::*ptr[3])(std::string);
		
	public:
		AForm* makeForm(std::string name, std::string target);
		AForm* CreateShrubbery(std::string target);
		AForm* CreateRobotomy(std::string target);
		AForm* CreatePresidential(std::string target);
		
		class	CantCreateForm : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		Intern();
};

#endif