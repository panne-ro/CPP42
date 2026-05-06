/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:08:43 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 17:43:14 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
	std::string type;

	public:
	std::string	getType() const;
	void		setType(std::string t);
	void		makeSound() const;
	
	WrongAnimal();
	WrongAnimal(WrongAnimal& a);
	WrongAnimal& operator=(const WrongAnimal& a);
	~WrongAnimal();
};

#endif