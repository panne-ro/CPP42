
#include "FragTrap.hpp"

void FragTrap::attack(const std::string &target)
{
	if (!haveEnergy())
	{
		std::cout << "FragTrap " << _name << " has no energy to attack!" << std::endl;
		return ;
	}
	_EnergyPoints -= 1;
	std::cout << CYAN << "FragTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! " << _EnergyPoints << " energy points remains" << std::endl;
}

void FragTrap::highFivesGuys(const std::string &target)
{
	std::cout << CYAN << "FragTrap " << _name << " do a positive high-fives request at " << target << std::endl;
}

FragTrap::FragTrap(std::string name)
	:ClapTrap(name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << WHITE << "FragTrap " << _name << " is construct" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << WHITE << "FragTrap " << _name << " is destruct" << std::endl;
}