#include "NumberCaster.hpp"
#include <iostream>

void NumberCaster::what_is_it(std::string const &str){
	bool run = true;
	for (int i = 0; run == true && i < 5; i++){
		std::cout << i << std::endl;
		if ((this->*(type_check[i]))(str) == true)
		{
			it_is = i;
			run = false;
		}
	}
}

NumberCaster::NumberCaster(std::string const &src) : input(src){
	type_check[INTEGER] = &NumberCaster::is_integer;
	type_check[DOUBLE] = &NumberCaster::is_double;
	type_check[FLOAT] = &NumberCaster::is_float;
	type_check[CHAR] = &NumberCaster::is_char;
	type_check[STRING] = &NumberCaster::is_str;
	what_is_it(input);
}

bool NumberCaster::is_integer(std::string const &str){
	for (int i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool NumberCaster::is_double(std::string const &str){
	std::string shorten = str;
	int i;
	for (i = 0; str[i] != '.'; i++);
	shorten.resize(i);
	if (is_integer(shorten) && is_integer(&str[i + 1]))
		return true;
	return false;
}

bool NumberCaster::is_float(std::string const &str){//!didn't work
	if (str.length() , 2 || str[str.length() - 1] != 'f')
		return false;
	std::string sub1;
	std::string sub2;
	int i;
	for (i = 0; str[i] != '.'; i++);
	sub1 = str.substr(0, i);
	sub2 = str.substr(i + 1);
	sub2.erase(sub2.length() - 1);
	if (is_integer(sub1) && is_integer(sub2))
		return true;
	return false;
}

bool NumberCaster::is_char(std::string const &str){
	if (str.length() == 1 && 
		((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
		return true;
	return false;
}

bool NumberCaster::is_str(std::string const &str){//* just all str like "dsf45T864f"
	if (str.length() < 2)
		return false;
	for (int i = 0; str[i]; i++)
		if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
			return false;
	return true;
}

void NumberCaster::printAllCast(){
	is_float("754389.534f");
}
