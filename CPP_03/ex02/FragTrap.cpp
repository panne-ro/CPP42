
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

FragTrap::FragTrap()
{
	_EnergyPoints = 100;
	_HitPoints = 100;
	_AttackDamage = 30;
	_name = "FragTrap";
	std::cout << WHITE << "FragTrap is construct" << std::endl;
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

FragTrap::FragTrap(FragTrap& f)
{
	std::cout << WHITE << "Copy FragTrap " << _name << " is construct" << std::endl;
	_name = f._name;
	_HitPoints = f._HitPoints;
	_EnergyPoints = f._EnergyPoints;
	_AttackDamage = f._AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& f)
{
	std::cout << WHITE << "Copy Assignement FragTrap " << _name << " is construct" << std::endl;
	if (this != &f)
	{
		_name = f._name;
		_HitPoints = f._HitPoints;
		_EnergyPoints = f._EnergyPoints;
		_AttackDamage = f._AttackDamage;
	}
	return *this; 
}

FragTrap::~FragTrap()
{
	std::cout << WHITE << "FragTrap " << _name << " is destruct" << std::endl;
}