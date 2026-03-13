/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:18:17 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/13 13:29:44 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{	
	public:
	
		Contact	Contacts[8];
		
		void	AddContact();
		void	Search();
	
		PhoneBook(void);
		~PhoneBook(void);

};