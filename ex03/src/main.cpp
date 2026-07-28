#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "----- Creating a DiamondTrap -----" << std::endl;
	DiamondTrap dt("Rambot");

	std::cout << "\n----- whoAmI -----" << std::endl;
	dt.whoAmI();

	std::cout << "\n----- Attributes check: hp from FragTrap, ep from ScavTrap, ad from FragTrap -----" << std::endl;
	dt.attack("a helpless NPC");
	dt.takeDamage(10);
	dt.beRepaired(5);

	std::cout << "\n----- Special abilities from both parents -----" << std::endl;
	dt.guardGate();
	dt.highFivesGuys();

	std::cout << "\n----- Copy constructor / assignment -----" << std::endl;
	DiamondTrap copy(dt);
	copy.whoAmI();
	DiamondTrap assigned;
	assigned = dt;
	assigned.whoAmI();

	std::cout << "\n----- Only one ClapTrap subobject exists (no ambiguity) -----" << std::endl;

	std::cout << "\n----- End of main -----" << std::endl;
	return 0;
}
