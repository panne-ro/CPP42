//add header

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (isAlive() == 0 || haveEnergy() == 0)
		return;
	_EnergyPoints--;
	std::cout << CYAN << "ClapTrap " << _name << " attacks " << target << ", ";
	std::cout << CYAN << "causing " << _AttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0)
	{
		std::cout << MAGENTA << _name << " can't take damage cause he is dead" << std::endl;
		return ;
	}
	_HitPoints -= amount;
	std::cout << RED << _name << " take " << amount << " damages !" << std::endl;
	isAlive();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlive() == 0 || haveEnergy() == 0)
		return;
	if (haveEnergy() == 0)
		return ;
	_EnergyPoints--;
	_HitPoints += amount;
	std::cout << GREEN << _name << " repairs itself of " << amount << " health points !" << std::endl;
}

int	ClapTrap::isAlive()
{
	if (_HitPoints <= 0)
	{
		std::cout << MAGENTA << _name << " is dead" << std::endl;
		return (0);
	}
	else
		return (1);
}

int	ClapTrap::haveEnergy()
{
	if (_EnergyPoints <= 0)
	{
		std::cout << YELLOW << _name << " have not enough energy" << std::endl;
		return (0);
	}
	else
		return (1);
}

ClapTrap::ClapTrap(std::string name)
{
	_EnergyPoints = 10;
	_HitPoints = 10;
	_AttackDamage = 0;
	_name = name;
	std::cout << WHITE << "ClapTrap " << _name << " is construct" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << WHITE << "ClapTrap " << _name << " is destruct" << std::endl;
}