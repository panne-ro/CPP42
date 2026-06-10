/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:36:30 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/08 14:57:41 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const char	*_name;
		bool		_isSigned;
		const int	_gradetosign;
		const int	_gradetoexecute;
		
	public:
		void	beSigned(const Bureaucrat& b);
		
		std::string		GetName() const;
		bool			GetSigned() const;
		int				GetGradetoSign() const;
		int				GetGradetoExecute() const;
		void			execute(Bureaucrat const & executor) const;
		virtual void	executeAction() const = 0;
		
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
		class NotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		AForm();
		AForm(const char *name, bool isSigned, int gradetosign, int gradetoexecute);
		AForm(AForm& f);
		AForm& operator=(const AForm& f);

		virtual ~AForm();
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif