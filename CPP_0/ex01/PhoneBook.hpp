/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:18:17 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/28 12:22:46 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{	
	public:
	
		Contact	Contacts[8];
		int		NumberOfContacts;
		
		int 	ConvertInInt(std::string str);
		void	PrintIndex(int x);
		void	AddContact();
		void	Search();
	
		PhoneBook(void);
		~PhoneBook(void);

};