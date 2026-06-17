/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:01:10 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 11:24:45 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	
	for (int i = 0; i < 10; ++i)
    {
        Base* p = generate();

        std::cout << "identify(Base*)" << std::endl;
        identify(p);

        std::cout << "identify(Base&)" << std::endl;
        identify(*p);
		
		std::cout << std::endl;
        delete p;
    }
}