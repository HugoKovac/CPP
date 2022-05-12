#include "Span.hpp"
#include <iostream>

int main(){
	Span test(10);
	try{
		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(4);
		test.addNumber(5);
		test.addNumber(6);
		std::vector<int> test2(5,100);
		test.insertNumber(test2);
		test.printAll();
	}catch (std::length_error &le){
		std::cout << "Length error: " << le.what() << std::endl;
	}

	return 0;
}