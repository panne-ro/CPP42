/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:56:50 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/08 15:25:55 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


void	ShrubberyCreationForm::executeAction() const
{
	std::cout << "ca marche" << std::endl;
}

//constructeur
ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", false, 145, 137)
{
	_target = "Manu";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
}

//destructeur
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}