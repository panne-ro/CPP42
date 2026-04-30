/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:04 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/30 16:01:02 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIAML_HPP

#include <iostream>

class Animal
{
	protected:
	std::string	type;
	std::string sound;
	
	public:
	std::string	getType();
	void 		setType(std::string type);
	void		makeSound();

	Animal();
	Animal(Animal& a);
	Animal& operator=(const Animal& a);
	~Animal();
};

#endif