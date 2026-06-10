/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:53:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 10:36:42 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	
	public:
		void		executeAction() const;
		
		std::string	GetTarget() const;
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm& b);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& b);

		~ShrubberyCreationForm();

};

#endif