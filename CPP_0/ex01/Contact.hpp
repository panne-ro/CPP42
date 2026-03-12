/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:23:43 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 13:50:52 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:

		int 	index;
		std::string FirstName;
		std::string LastName;
		std::string Nickame;
		std::string PhoneNumber;
		std::string DarkestSecret;
		
		Contact(void);
		~Contact(void);
};

