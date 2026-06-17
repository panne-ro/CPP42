/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:00:42 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:24:55 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

class Data
{
	public :
		int GetID();
		int	GetValue();

		Data();
		Data(Data& b);
		Data& operator=(const Data& b);
		~Data();
		
	private :
		int	ID;
		int Value;
		std::string Name;
};

class Serializer
{
	public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private :
		Serializer();
		Serializer(Serializer& b);
		Serializer& operator=(const Serializer& b);
		~Serializer();
};

#endif