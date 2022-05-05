#include "NumberCaster.hpp"
#include <iostream>
#include <sstream>

void NumberCaster::what_is_it(std::string const &str){
	bool run = true;
	for (int i = 0; run == true && i < 5; i++){
		if ((this->*(type_check[i]))(str) == true)
		{
			it_is = i;
			run = false;
		}
	}
}

NumberCaster::NumberCaster(std::string const &src) : it_is(-1), input(src){
	type_check[INTEGER] = &NumberCaster::is_integer;
	type_check[DOUBLE] = &NumberCaster::is_double;
	type_check[FLOAT] = &NumberCaster::is_float;
	type_check[CHAR] = &NumberCaster::is_char;
	type_check[STRING] = &NumberCaster::is_str;
	what_is_it(input);
	cast_all();
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

bool NumberCaster::is_float(std::string const &str){
	if (str.length() < 2 || str[str.length() - 1] != 'f')
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

void NumberCaster::cast_all(){
	std::istringstream toConvert(input);
	switch (it_is)
	{
		case INTEGER :
			if ( !(toConvert >> int_casted) )
				int_casted = 0;
			char_casted = static_cast<char>(int_casted);
			float_casted = static_cast<float>(int_casted);
			double_casted = static_cast<double>(int_casted);
			break ;
		case DOUBLE :
			double_casted = std::stod(input);
			char_casted = static_cast<char>(double_casted);
			int_casted = static_cast<int>(double_casted);
			float_casted = static_cast<float>(double_casted);
			break;
		case FLOAT :
			float_casted = std::stof(input);
			char_casted = static_cast<char>(float_casted);
			int_casted = static_cast<int>(float_casted);
			double_casted = static_cast<double>(float_casted);
			break;
		case CHAR :
			char_casted = static_cast<char>(*input.c_str());
			int_casted = static_cast<int>(char_casted);
			float_casted = static_cast<float>(char_casted);
			double_casted = static_cast<double>(char_casted);
			break;
	}
	
}

void NumberCaster::printAllCast(){
	std::cout << "char: ";
	//!print the char or string
	std::cout << "int: " << int_casted << std::endl;
	std::cout << "float: " << float_casted  << "f" << std::endl;
	std::cout << "double: " << double_casted << std::endl;
}
