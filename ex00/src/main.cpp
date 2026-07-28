#include "../includes/ClapTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "----- Creating ClapTrap 'Rocky' -----" << std::endl;
	ClapTrap rocky("Rocky");

	std::cout << "\n----- Basic attack / repair -----" << std::endl;
	rocky.attack("a training dummy");
	rocky.takeDamage(5);
	rocky.beRepaired(2);

	std::cout << "\n----- Draining energy points -----" << std::endl;
	for (int i = 0; i < 10; i++)
		rocky.attack("the dummy");

	std::cout << "\n----- No more energy: attack/repair should fail -----" << std::endl;
	rocky.attack("the dummy");
	rocky.beRepaired(3);

	std::cout << "\n----- Copy constructor / assignment -----" << std::endl;
	ClapTrap copy(rocky);
	ClapTrap assigned;
	assigned = rocky;

	std::cout << "\n----- Bringing hit points down to zero -----" << std::endl;
	ClapTrap doomed("Doomed");
	doomed.takeDamage(100);
	doomed.attack("anything");
	doomed.beRepaired(10);

	std::cout << "\n----- End of main -----" << std::endl;
	return 0;
}
