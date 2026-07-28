#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "----- Construction chaining: ClapTrap then ScavTrap -----" << std::endl;
	ScavTrap scav("Vinnie");

	std::cout << "\n----- Construction chaining: ClapTrap then FragTrap -----" << std::endl;
	FragTrap frag("Bender");

	std::cout << "\n----- ScavTrap specific behavior -----" << std::endl;
	scav.attack("a rookie");
	scav.guardGate();

	std::cout << "\n----- FragTrap specific behavior -----" << std::endl;
	frag.attack("a rookie");
	frag.highFivesGuys();

	std::cout << "\n----- Copy constructor / assignment -----" << std::endl;
	FragTrap fragCopy(frag);
	FragTrap fragAssigned;
	fragAssigned = frag;

	std::cout << "\n----- Destruction chaining (reverse order) -----" << std::endl;
	return 0;
}
