/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:06:26 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 14:20:23 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon 		&_weapon;
		std::string	_name;

	public:
		void	attack();

		HumanA(std::string startType, Weapon &weapon);
		~HumanA();
};
