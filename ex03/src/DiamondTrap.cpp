#include "../includes/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
	: ClapTrap("Nameless_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), name("Nameless")
{
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& n)
	: ClapTrap(n + "_clap_name", 100, 50, 30), ScavTrap(n), FragTrap(n), name(n)
{
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "DiamondTrap " << name << " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap " << name << " copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name << ", and my ClapTrap name is " << _name << std::endl;
}
