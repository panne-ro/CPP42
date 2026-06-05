/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:48:40 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 10:49:10 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string str, int grade)
{
	if (grade < 1)
		GradeTooHighException();
	if (grade > 150)
		GradeTooLowException();
	_name = str;
	_grade = grade;
}

std::string Bureaucrat::GradeTooHighException()
{
	throw std::runtime_error("Grade too high");
}

std::string Bureaucrat::GradeTooLowException()
{
	throw std::runtime_error("Grade too low");
}

std::string	Bureaucrat::GetName()
{
	return (_name);
}

int			Bureaucrat::GetGrade()
{
	return (_grade);
}

void		Bureaucrat::IncreaseGrade(int i)
{
	if (_grade - i >= 1)
		_grade -= i;
	else
		GradeTooHighException();
}

void		Bureaucrat::DecreaseGrade(int i)
{
	if (_grade + i <= 150)
		_grade += i;
	else
		GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}