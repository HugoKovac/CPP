#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------------------------------- *" << std::endl;
	ClapTrap p1("Player1");
	ScavTrap p2("Player2");
	ScavTrap p3;

	p3 = p2;
	std::cout << "*" << "\033[1;32m Constructors \033[0m------------------------------------- *" << std::endl << std::endl;

	p1.attack("Someone");

	p2.guardGate();
	p2.attack("Someone");
	p2.beRepaired(100);
	p2.takeDamage(1000);
	p2.attack("NULL");

	return 0;
}
