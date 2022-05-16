#include <iostream>
#include <string>
#include <list>
#include "Mutantstack.cpp"

int main(void)
{
	std::cout <<"*MutantStack*" << std::endl;
	MutantStack<int> test;

	std::cout <<"-push 1, 2, 3-" << std::endl;
	test.push(1);
	test.push(2);
	test.push(3);

	std::cout << "size : " << test.size() << std::endl;
	std::cout << "on top : " << test.top() << std::endl;
	
	std::cout << "-pop-" << std::endl;
	test.pop();

	std::cout << "size : " << test.size() << std::endl;
	std::cout << "on top : " << test.top() << std::endl;

	
	std::cout <<"*List*" << std::endl;
	std::list<int> test2;

	std::cout <<"-push 1, 2, 3-" << std::endl;
	test2.push_back(1);
	test2.push_back(2);
	test2.push_back(3);

	std::cout << "size : " << test2.size() << std::endl;
	std::cout << "on top : " << test2.back() << std::endl;
	
	std::cout << "-pop-" << std::endl;
	test2.pop_back();

	std::cout << "size : " << test2.size() << std::endl;
	std::cout << "on top : " << test2.back() << std::endl;

	return 0;
}
