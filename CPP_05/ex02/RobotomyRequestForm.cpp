/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:28:03 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 10:51:33 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::executeAction() const
{
	srand(time(0));
	
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized !" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}

std::string	RobotomyRequestForm::GetTarget() const
{
	return (_target);
}

//constructeur

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", false, 72, 45)
{
	_target = "World";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", false, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& b)
	: AForm("RobotomyRequestForm", false, 72, 45)
{
	_target = b._target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& b)
{
	if (this != &b)
		_target = b._target;
	return (*this);
}

//destructeur
RobotomyRequestForm::~RobotomyRequestForm()
{

}