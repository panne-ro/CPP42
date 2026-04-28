/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:19:09 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:19:10 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public :
	void attack(const std::string &target);
	void highFivesGuys(const std::string &target);

	FragTrap::FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap& f);
	FragTrap& operator=(const FragTrap& f);
	~FragTrap();
};

#endif