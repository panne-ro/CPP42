/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:06:56 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:20:50 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int		Data::GetID()
{
	return(ID);
}

int		Data::GetValue()
{
	return(Value);
}

Data::Data()
{
	ID = 5;
	Value = 10;
}

Data::Data(Data& b)
{
	ID = b.ID;
	Value = b.Value;
}

Data& Data::operator=(const Data& b)
{
	if (this != &b)
	{
		ID = b.ID;
		Value = b.Value;
	}
	return (*this);
}

Data::~Data()
{

}