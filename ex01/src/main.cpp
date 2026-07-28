#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "----- Construction chaining: ClapTrap then ScavTrap -----" << std::endl;
	ScavTrap scav("Vinnie");

	std::cout << "\n----- ScavTrap specific behavior -----" << std::endl;
	scav.attack("a rookie");
	scav.guardGate();
	scav.takeDamage(30);
	scav.beRepaired(10);

	std::cout << "\n----- Copy constructor / assignment -----" << std::endl;
	ScavTrap copy(scav);
	ScavTrap assigned;
	assigned = scav;

	std::cout << "\n----- Base ClapTrap still usable on its own -----" << std::endl;
	ClapTrap plain("Rocky");
	plain.attack("a wall");

	std::cout << "\n----- Destruction chaining: ScavTrap then ClapTrap, in reverse order -----" << std::endl;
	return 0;
}
