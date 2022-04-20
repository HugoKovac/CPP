#include "Harl.hpp"

int main(void)
{
	Harl Harl;
	Harl.complain("DEBUG");
	std::cout << "===================" << std::endl;
	Harl.complain("INFO");
	std::cout << "===================" << std::endl;
	Harl.complain("WARNING");
	std::cout << "===================" << std::endl;
	Harl.complain("ERROR");
	return 0;
}