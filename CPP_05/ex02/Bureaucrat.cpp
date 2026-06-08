/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:48:40 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/08 15:21:46 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

//excpetion
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

//constructor
Bureaucrat::Bureaucrat()
{
	_name = "Manu";
	_grade = 75;
}

Bureaucrat::Bureaucrat(std::string str, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_name = str;
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& b)
{
	_name = b._name;
	_grade = b._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	if (this != &b)
	{
		_name = b._name;
		_grade = b._grade;
	}
	return (*this);
}

//getter
std::string	Bureaucrat::GetName() const
{
	return (_name);
}

int			Bureaucrat::GetGrade() const
{
	return (_grade);
}


//setter
void		Bureaucrat::IncreaseGrade(int i)
{
	if (_grade - i >= 1)
		_grade -= i;
	else
		throw GradeTooHighException();
}

void		Bureaucrat::DecreaseGrade(int i)
{
	if (_grade + i <= 150)
		_grade += i;
	else
		throw GradeTooLowException();
}

void		Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.GetName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.GetName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(const AForm& form) const
{
	form.execute(*this);
}

//destructor
Bureaucrat::~Bureaucrat()
{
}

//overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& f)
{
	os << f.GetName() << ", bureaucrat grade " << f.GetGrade() << std::endl; 
	return (os);
}