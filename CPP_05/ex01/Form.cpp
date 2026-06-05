/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:36:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 16:25:24 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

//mumbers functions

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.GetGrade() <= _gradetosign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

//getter

std::string	Form::GetName() const
{
	return (_name);
}

bool	Form::GetSigned() const
{
	return (_isSigned);
}

int	Form::GetGradetoSign() const
{
	return (_gradetosign);
}

int	Form::GetGradetoExecute() const
{
	return (_gradetoexecute);
}

//exception

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

//constructeur

Form::Form()
	: _gradetosign(150), _gradetoexecute(150)
{
	_name = "Not_Importante_Paper";
	_isSigned = false;
	if (_gradetosign > 150)
		throw GradeTooLowException();
	else if (_gradetosign < 1)
		throw GradeTooHighException();
	if (_gradetoexecute > 150)
		throw GradeTooLowException();
	else if (_gradetoexecute < 1)
		throw GradeTooHighException();
}

Form::Form(const char *name, bool isSigned, int gradetosign, int gradetoexecute)
	: _gradetosign(gradetosign), _gradetoexecute(gradetoexecute)
{
	_name = name;
	_isSigned = isSigned;
	if (_gradetosign > 150)
		throw GradeTooLowException();
	else if (_gradetosign < 1)
		throw GradeTooHighException();
	if (_gradetoexecute > 150)
		throw GradeTooLowException();
	else if (_gradetoexecute < 1)
		throw GradeTooHighException();
}

Form::Form(Form& f)
	:_gradetosign(f.GetGradetoSign()), _gradetoexecute(f.GetGradetoExecute())
{
	_name = f._name;
	_isSigned = f._isSigned;
	if (_gradetosign > 150)
		throw GradeTooLowException();
	else if (_gradetosign < 1)
		throw GradeTooHighException();
	if (_gradetoexecute > 150)
		throw GradeTooLowException();
	else if (_gradetoexecute < 1)
		throw GradeTooHighException();
}

Form& Form::operator=(const Form& f)
{
	if (this != &f)
	{
		_name = f._name;
		_isSigned = f._isSigned;
	}
	return (*this);
}

//destructeur

Form::~Form()
{

}

//overload

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	std::string signe;

	if (f.GetSigned() == 0)
		signe = "false";
	else
		signe = "true";
	os << f.GetName() << " is signed: " << signe << "\n"
		<< "For signe and/or execute it the grade are: " << f.GetGradetoSign() << ", " << f.GetGradetoExecute() << std::endl;
	return os;
}