#include "Span.hpp"
#include <iostream>

int main(){
	Span test(10);
	std::vector<int> test2(5,100);
	try{
		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		test.printAll();
		std::cout << "shrotestSpan = " << test.shortestSpan() << std::endl;
		std::cout << "longestSpan = " << test.longestSpan() << std::endl;
		test.insertNumber(test2);
		test.printAll();
		test.insertNumber(test2);
	}catch (std::length_error &le){
		std::cout << "Length error: " << le.what() << std::endl;
	}

	return 0;
}