/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:11:20 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 14:51:29 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//constructeur

template <typename T>
MutantStack<T>::MutantStack(){
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> &M){
	*this = M;
}

//operateur

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> &M){
	if (this != &M)
		this->c = M.c;
	return (*this);
}

//methode

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin(){
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end(){
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin(){
	return (this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend(){
	return (this->c.rend());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin() const{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend() const{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crbegin() const{
	return (this->c.rbegin());
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crend() const{
	return (this->c.rend());
}

//destructeur

template <typename T>
MutantStack<T>::~MutantStack(){
}