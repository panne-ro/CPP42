/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:48 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:49 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	void	attack(const std::string& target);
	void	guardGate();

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap& s);
	ScavTrap& operator=(const ScavTrap& s);
	~ScavTrap();
};

#endif