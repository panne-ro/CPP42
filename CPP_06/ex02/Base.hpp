/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:47:56 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 11:23:50 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public :
		virtual ~Base();
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif