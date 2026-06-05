/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:47:21 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 16:16:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string	_name;
		int 		_grade;
		
	public:
	
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string str, int grade);
		Bureaucrat(Bureaucrat& b);
		Bureaucrat& operator=(const Bureaucrat& b);
		
		std::string	GetName() const;
		int			GetGrade() const;
		void		IncreaseGrade(int i);
		void		DecreaseGrade(int i);
		void		signForm(Form& form);
		
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& f);

#endif