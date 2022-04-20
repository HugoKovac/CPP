#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	std::cout << std::endl << "*" << "\033[1;32m Constructors \033[0m------------------------------------- *" << std::endl;
	ClapTrap p1("Player1");
	ScavTrap p2("Player2");
	FragTrap p3("Player 3");

	std::cout << "*" << "\033[1;32m Constructors \033[0m------------------------------------- *" << std::endl << std::endl;

	p1.attack("Someone");

	p2.guardGate();
	p2.attack("Someone");
	p2.beRepaired(100);
	p2.takeDamage(1000);
	p2.attack("NULL");

	p3.highFivesGuys();
	p3.attack("Someone2");
	p3.beRepaired(100);
	p3.takeDamage(1000);
	p3.attack("NULL2");

	return 0;
}
