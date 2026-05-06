/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:04:10 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 17:45:20 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta  = new Animal();
	const Animal* rex = new Dog();
	const Animal* felix = new Cat();

	std::cout << std::endl << meta->getType() << " " << std::endl;
	std::cout << rex->getType() << " " << std::endl;
	std::cout << felix->getType() << " " << std::endl << std::endl;

	meta->makeSound();
	rex->makeSound();
	felix->makeSound();
	std::cout << std::endl;

	delete meta;
	delete rex;
	delete felix;
	
	std::cout << std::endl;
	
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* Wrongfelix = new WrongCat();
	
	std::cout << std::endl << WrongMeta->getType() << std::endl;
	std::cout << Wrongfelix->getType()<< std::endl << std::endl;
	
	WrongMeta->makeSound();
	Wrongfelix->makeSound();
	std::cout << std::endl;
	
	delete WrongMeta;
	delete Wrongfelix;

	return (0);
}dsvev