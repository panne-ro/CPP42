/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:27:54 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 10:51:01 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
	private:
		std::string _target;

	public:
	
		void		executeAction() const;
		std::string	GetTarget() const;
		
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(RobotomyRequestForm& b);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& b);

		~RobotomyRequestForm();
};

#endif