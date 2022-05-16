#include <iostream>
#include <string>
#include <list>
#include "MutantStack.cpp"

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
	
	std::cout <<"*MutantStack iterator*" << std::endl;

	MutantStack<int>::iterator it = test.begin();
	for (; it != test.end(); it++)
		std::cout << *it << std::endl;

	std::cout <<"*MutantStack reverse iterator*" << std::endl;

	MutantStack<int>::reverse_iterator rit = test.rbegin();
	for (; rit != test.rend(); rit++)
		std::cout << *rit << std::endl;

	std::cout << "-pop-" << std::endl;
	test.pop();

	std::cout << "size : " << test.size() << std::endl;
	std::cout << "on top : " << test.top() << std::endl;
	
	std::cout <<"*MutantStack iterator*" << std::endl;

	it = test.begin();
	for (; it != test.end(); it++)
		std::cout << *it << std::endl;

	std::cout <<"*MutantStack reverse iterator*" << std::endl;

	rit = test.rbegin();
	for (; rit != test.rend(); rit++)
		std::cout << *rit << std::endl;

	std::cout <<"*std::list*" << std::endl;
	std::list<int> test2;

	std::cout <<"-push 1, 2, 3-" << std::endl;
	test2.push_back(1);
	test2.push_back(2);
	test2.push_back(3);

	std::cout << "size : " << test2.size() << std::endl;
	std::cout << "on top : " << test2.back() << std::endl;

	std::cout <<"*std::list iterator*" << std::endl;

	std::list<int>::iterator it2 = test2.begin();
	for (; it2 != test2.end(); it2++)
		std::cout << *it2 << std::endl;

	std::cout <<"*std::list reverse iterator*" << std::endl;

	std::list<int>::reverse_iterator rit2 = test2.rbegin();
	for (; rit2 != test2.rend(); rit2++)
		std::cout << *rit2 << std::endl;

	std::cout << "-pop-" << std::endl;
	test2.pop_back();

	std::cout << "size : " << test2.size() << std::endl;
	std::cout << "on top : " << test2.back() << std::endl;

	std::cout <<"*std::list iterator*" << std::endl;

	it2 = test2.begin();
	for (; it2 != test2.end(); it2++)
		std::cout << *it2 << std::endl;

	std::cout <<"*std::list reverse iterator*" << std::endl;

	rit2 = test2.rbegin();
	for (; rit2 != test2.rend(); rit2++)
		std::cout << *rit2 << std::endl;
	
}
