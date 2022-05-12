#include "easyfind.hpp"
#include <vector>


int main(){
	std::vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	try{
		std::cout << *(easyfind(test, 1)) << std::endl;
		std::cout << *(easyfind(test, 2)) << std::endl;
		std::cout << *(easyfind(test, 3)) << std::endl;
		std::cout << *(easyfind(test, 4)) << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}