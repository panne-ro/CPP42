/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:14:50 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 16:39:09 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void	iter(T* array, const size_t size, F fonct)
{
	for (size_t i = 0; i < size; i++)
		fonct(array[i]);
}

template <typename T>
void	Print(const T& a){
	std::cout << a << std::endl;
}

#endif