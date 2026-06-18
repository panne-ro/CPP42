/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 09:54:26 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/18 10:57:40 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	_size = 0;
	_data = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n): _data(new T[n]), _size(n){
	for (unsigned int i = 0; i < n; i++)
		_data[i] = T();
}

template <typename T>
Array<T>::Array(Array& a): _data(new T[a._size]), _size(a._size){
	for (unsigned int i = 0; i < _size; i++)
		_data[i] = a._data[i];
}

template <typename T>
Array<T>::~Array(){
	delete[] _data;
}

template <typename T>
Array<T>& Array<T>::operator=(Array& a){
	if (this != &a)
	{
		delete[] _data;
		_size = a._size;
		_data = new T[a._size];
		for (unsigned int i = 0; i < _size; i++)
			_data[i] = a._data[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int n){
	if (n >= _size)
		throw std::exception();
	return (_data[n]);
}

template <typename T>
T&	Array<T>::operator[](unsigned int n) const{
	if (n >= _size)
		throw std::exception();
	return (_data[n]);
}

template <typename T>
unsigned int	Array<T>::size() const{
	return (_size);
}