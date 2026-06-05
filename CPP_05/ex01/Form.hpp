/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:36:30 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 16:15:43 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const char	*_name;
		bool		_isSigned;
		const int	_gradetosign;
		const int	_gradetoexecute;
		
	public:
		void	beSigned(const Bureaucrat& b);
		
		std::string	GetName() const;
		bool		GetSigned() const;
		int			GetGradetoSign() const;
		int			GetGradetoExecute() const;
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		Form();
		Form(const char *name, bool isSigned, int gradetosign, int gradetoexecute);
		Form(Form& f);
		Form& operator=(const Form& f);

		~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif