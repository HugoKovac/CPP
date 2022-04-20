#include "ClapTrap.hpp"

int main(void){

	ClapTrap p1;
	ClapTrap p2("Tom");
	ClapTrap p3("Gerald");

	p1 = p3;

	p1.attack("Tom");
	p2.takeDamage(0);
	p2.beRepaired(10);

	p3.takeDamage(111);
	p3.attack("Other");
	
	return 0;
}