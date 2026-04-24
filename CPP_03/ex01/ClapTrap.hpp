

#include <iostream>
#include <string>
#include "../Color.h"

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
protected:
	std::string _name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

	public:
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	int		isAlive();
	int		haveEnergy();
	
	ClapTrap(std::string name);
	~ClapTrap();
};

#endif