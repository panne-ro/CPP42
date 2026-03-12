/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:18:17 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 17:16:45 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook 
{	
	public:
	
		Contact	Contacts[8];
		
		void	AddContact();

		PhoneBook(void);
		~PhoneBook(void);

};