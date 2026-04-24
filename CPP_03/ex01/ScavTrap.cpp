
#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
	if (!haveEnergy())
	{
		std::cout << "ScavTrap " << _name << " has no energy to attack!" << std::endl;
		return ;
	}
	_EnergyPoints -= 1;
	std::cout << CYAN << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! " << _EnergyPoints << " energy points remains" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << CYAN << _name << " is now in gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:ClapTrap(name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << WHITE << "ScavTrap " << _name << " is construct" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << WHITE << "ScavTrap " << _name << " is destruct" << std::endl;
}