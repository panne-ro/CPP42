/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 14:22:40 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 14:39:19 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void 	swap(T a, T b){
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T		min(T a, T b){
	if (a >= b)
		return (b);
	return(a);
}

template <typename T>
T		max(T a, T b){
	if (a <= b)
		return (b);
	return (a);
}

#endif