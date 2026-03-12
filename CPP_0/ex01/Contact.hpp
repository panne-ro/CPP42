/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:23:43 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 17:17:47 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:

		int 	index;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
		
		int		IsEmpty(std::string str);
		int		IsAllDigit(std::string str);
		void	AskField(const std::string label, std::string& field);
		void	AskPhoneNumber();
		void	Add(int i);

		Contact(void);
		~Contact(void);
};

