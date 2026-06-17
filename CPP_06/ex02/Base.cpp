/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:54:26 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 11:24:34 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//method

Base::~Base()
{

}

//funcion

Base* generate(void)
{
	int choice = rand() % 3;
	switch (choice)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The object pointed by p is: \"A\"" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "The object pointed by p is: \"B\"" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "The object pointed by p is: \"C\"" << std::endl;
}

void identify(Base& p)
{
	try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "The object referenced by p is: \"A\"" << std::endl;
        return;
    }
    catch (...) {}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "The object referenced by p is: \"B\"" << std::endl;
        return;
    }
    catch (...) {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "The object referenced by p is: \"C\"" << std::endl;
        return;
    }
    catch (...) {}
}