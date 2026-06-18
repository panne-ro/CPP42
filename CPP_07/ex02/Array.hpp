/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 09:53:22 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/18 10:50:26 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(Array& a);
		~Array();

		Array&	operator=(Array& a);
		T&		operator[](unsigned int n);
		T&		operator[](unsigned int n) const;
		
		unsigned int	size() const;
	private:
		T*		_data;
		size_t	_size;
};

#include "Array.tpp"

#endif