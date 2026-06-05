/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:47:21 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/05 10:49:20 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private:
		std::string	_name;
		int 		_grade;
		
	public:

		Bureaucrat(std::string str, int grade);
		
		std::string	GradeTooHighException();
		std::string	GradeTooLowException();
		std::string	GetName();
		int			GetGrade();
		void		IncreaseGrade(int i);
		void		DecreaseGrade(int i);
		
		~Bureaucrat();
};


