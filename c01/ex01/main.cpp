#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || std::stoi(av[1], nullptr, 10) < 1)
	{
		std::cout << "Error : input usage : ./zombieHorde N (with N > 0)" << std::endl;
		return 1;
	}
	Zombie *ptr = zombieHorde(std::stoi(av[1], nullptr, 10), "Zombie");
	std::cout << std::endl << "==delete==" << std::endl;
	delete [] ptr;
	return 0;
}