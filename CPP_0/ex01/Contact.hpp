/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:23:43 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/28 18:41:43 by panne-ro         ###   ########.fr       */
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
		int	AskField(const std::string label, std::string& field);
		int	AskPhoneNumber();
		void	Add(int i);

		Contact(void);
		~Contact(void);
};

