/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:18:17 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 14:06:30 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook 
{	
	public:
	
		Contact	Contacts[8];
		
		void Add(int i);
		
		PhoneBook(void);
		~PhoneBook(void);

};