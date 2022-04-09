#include <string>
#include <iostream>

int main(void)
{
	std::string string = "Something";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return 0;
}