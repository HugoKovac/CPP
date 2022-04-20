#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *tab = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		tab[i].setName(name);
		std::cout << std::to_string(i + 1) << " : ";
		tab[i].announce();
	}
	return (tab);
}