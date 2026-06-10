/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 10:52:04 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/10 10:53:56 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "AForm.hpp"
#include <cstdlib>

class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;

	public:
	
		void		executeAction() const;
		std::string	GetTarget() const;
		
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(PresidentialPardonForm& b);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& b);

		~PresidentialPardonForm();
};

#endif