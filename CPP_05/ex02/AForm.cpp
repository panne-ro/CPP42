/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:36:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 16:25:24 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

//mumbers functions

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.GetGrade() <= _gradetosign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

//getter

std::string	AForm::GetName() const
{
	return (_name);
}

bool	AForm::GetSigned() const
{
	return (_isSigned);
}

int	AForm::GetGradetoSign() const
{
	return (_gradetosign);
}

int	AForm::GetGradetoExecute() const
{
	return (_gradetoexecute);
}

//methodes

void	AForm::execute(const Bureaucrat& executor) const
{
	try
	{
		if (GetSigned() == false)
			throw NotSigned();
		if (executor.GetGrade() > _gradetoexecute)
			throw GradeTooLowException();
		executeAction();
	}
	catch(const std::exception& e)
	{
		std::cout << GetName() << " can't be execute cause: " << e.what() << '\n';
	}
	
}

void	AForm::executeAction() const
{	
}

//exception

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::NotSigned::what() const throw()
{
	return ("Not Signed");
}

//constructeur

AForm::AForm()
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

AForm::AForm(const char *name, bool isSigned, int gradetosign, int gradetoexecute)
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

AForm::AForm(AForm& f)
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

AForm& AForm::operator=(const AForm& f)
{
	if (this != &f)
	{
		_name = f._name;
		_isSigned = f._isSigned;
	}
	return (*this);
}

//destructeur

AForm::~AForm()
{

}

//overload

std::ostream& operator<<(std::ostream& os, const AForm& f)
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