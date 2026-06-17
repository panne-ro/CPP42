/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:09:44 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:26:10 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

Serializer::Serializer()
{
}

Serializer::Serializer(Serializer& b)
{
	if (this != &b)
		return;	
}

Serializer& Serializer::operator=(const Serializer& b)
{
	if (this != &b)
	{
		return (*this);
	}
	return (*this);
}