#include "NumberCaster.hpp"
#include <iostream>

NumberCaster::NumberCaster(std::string const &src) : input(src){
	type_check[INTEGER] = &NumberCaster::is_intger;
	type_check[DOUBLE] = &NumberCaster::is_double;
	type_check[FLOAT] = &NumberCaster::is_float;
	type_check[CHAR] = &NumberCaster::is_char;
	type_check[STRING] = &NumberCaster::is_str;
}

bool NumberCaster::is_intger(std::string const &str){
	for (int i = 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

bool NumberCaster::is_double(std::string const &str){//? use string::substr
	std::string shorten = str;
	int i;
	for (i = 0; str[i] != '.'; i++);
	shorten.resize(i);
	if (is_intger(shorten) && is_intger(&str[i + 1]))
		return true;
	return false;
}

bool NumberCaster::is_float(std::string const &str){//!didn't work
	std::string sub1;
	std::string sub2;
	int i;
	for (i = 0; str[i] != '.'; i++);
	sub1 = str.substr(0, i);
	sub2 = str.substr(i);
	std::cout << sub1 << std::endl;
	std::cout << sub2 << std::endl;
	sub2.pop_back();
		// return true;
	return false;
}

bool NumberCaster::is_char(std::string const &str){
	if (str.length() == 1 && 
		((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
		return true;
	return false;
}

bool NumberCaster::is_str(std::string const &str){//! just all str like "dsf45T864f"
	if (str.length() < 2)
		return false;
	for (int i = 0; str[i]; i++)
		if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')))
			return false;
	return true;
}

void NumberCaster::printAllCast(){
	is_float("754389.534f");
	// std::cout << 
}
