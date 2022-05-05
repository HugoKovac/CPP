#ifndef NUMBERCASTER_HPP
#define NUMBERCASTER_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <sstream>


#define CHAR 0
#define INTEGER 1
#define DOUBLE 2
#define FLOAT 3
#define STRING 4

class NumberCaster{
	int it_is;

	int int_casted;
	float float_casted;
	double double_casted;
	char char_casted;
	std::string input;
	bool (NumberCaster::*type_check[5])(std::string const &str);
	
	//! faire les cas d'erreur
	/*
		Overflow
		Value : 0
	*/
	bool is_integer(std::string const &str);
	bool is_double(std::string const &str);
	bool is_float(std::string const &str);
	bool is_char(std::string const &str);
	bool is_str(std::string const &str);
	void what_is_it(std::string const &str);
	void cast_all();
public:
	NumberCaster(std::string const &src);
	NumberCaster(NumberCaster const &src);
	NumberCaster &operator=(NumberCaster const &rhs);
	~NumberCaster(){}

	void printAllCast();
};

#endif