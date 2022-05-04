#include <iostream>
#include <string>

bool is_char(std::string const &str){
	if (str.length() == 1 && 
		((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
		return true;
	return false;
}

bool is_str(std::string const &str){//! just all str like "dsf45T864f"
	if (str.length() < 2)
		return false;
	for (int i = 0; str[i]; i++)
		if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
			return false;
	return true;
}

bool is_intger(std::string const &str){
	for (int i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool is_double(std::string const &str){//? use string::substr
	std::string shorten = str;
	int i;
	for (i = 0; str[i] != '.'; i++);
	shorten.resize(i);
	if (is_intger(shorten) && is_intger(&str[i + 1]))
		return true;
	return false;
}

bool is_float(std::string const &str){//!didn't work
	std::string shorten = str;
	std::string shorten2 = str;
	int i;
	for (i = 0; str[i] != '.'; i++);
	shorten.resize(i);
	shorten2.resize(shorten2.length() - 1);
	if (is_intger(shorten) && is_intger(&str[i + 1]) && str[str.length() - 1] == 'f')
		return true;
	return false;
}

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

	std::cout << is_char(input) << std::endl;
	std::cout << is_str(input) << std::endl;
	std::cout << is_intger(input) << std::endl;
	std::cout << is_float(input) << std::endl;
	std::cout << is_double(input) << std::endl;

	return 0;
}
