

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include "../Color.h"

class ClapTrap
{
private:
	std::string _name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

	int		isAlive();
	int		haveEnergy();
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap(std::string name);
	~ClapTrap();
};

#endif