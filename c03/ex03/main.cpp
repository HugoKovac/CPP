#include "DiamondTrap.hpp"


int main(void)
{
	std::cout << std::endl << "*" << "\033[1;36m Constructors \033[0m------------------------------------- *" << std::endl;
	DiamondTrap p1;
	DiamondTrap p2("test1");

	std::cout << "*" << "\033[1;36m Constructors \033[0m------------------------------------- *" << std::endl << std::endl;

	p1.attack("attack_test");
	p2.attack("attack_test1");
	p1.whoAmI();
	p2.whoAmI();

	std::cout << std::endl << "*" << "\033[1;34m Destructors \033[0m------------------------------------- *" << std::endl;

	return 0;
}
