/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:52:11 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 10:55:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void	PresidentialPardonForm::executeAction() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string	PresidentialPardonForm::GetTarget() const
{
	return (_target);
}

//constructeur

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", false, 25, 5)
{
	_target = "World";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", false, 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& b)
	: AForm("PresidentialPardonForm", false, 25, 5)
{
	_target = b._target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& b)
{
	if (this != &b)
		_target = b._target;
	return (*this);
}

//destructeur
PresidentialPardonForm::~PresidentialPardonForm()
{

}