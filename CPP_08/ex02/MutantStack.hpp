/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:58:02 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 15:08:57 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack();
	MutantStack<T>(MutantStack<T>& M);
	MutantStack<T>& operator=(MutantStack<T> &M);
	
	typedef typename std::stack<T>::container_type::iterator		iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator		begin();
	iterator		end();
	reverse_iterator rbegin();
	reverse_iterator rend();
	
	const_iterator	cbegin() const;
	const_iterator	cend() const;
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;
	

	
	~MutantStack<T>();
};

#include "MutantStack.tpp"

#endif