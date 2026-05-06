/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:04 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 15:32:04 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
	std::string	type;
	
	public:
	std::string		getType() const;
	void 			setType(std::string type);
	virtual void	makeSound() const;

	Animal();
	Animal(Animal& a);
	Animal& operator=(const Animal& a);
	virtual ~Animal();
};

#endif