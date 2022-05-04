#include <iostream>
#include <string>
#include "NumberCaster.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Only two arguments accepted!" << std::endl;
		return 1;
	}
	std::string input = av[1];

	/*// TODO
		if only digit == int
		if only char == char ou str
		if '.', only digit and std::string.last == 'f'
		if '.' and only digit == double
	*/

	// std::cout << is_char(input) << std::endl;
	// std::cout << is_str(input) << std::endl;
	// std::cout << is_intger(input) << std::endl;
	// std::cout << is_float(input) << std::endl;
	// std::cout << is_double(input) << std::endl;

	NumberCaster test("32423.543f");

	test.printAllCast();

	return 0;
}
