#include <iostream>
#include <string>
#include "NumberCaster.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Only two arguments accepted!" << std::endl;
		return 1;
	}
	NumberCaster test(av[1]);

	test.printAllCast();

	return 0;
}
