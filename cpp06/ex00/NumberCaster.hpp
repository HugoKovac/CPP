#ifndef NUMBERCASTER_HPP
#define NUMBERCASTER_HPP

#include <string>

#define INTEGER 0
#define DOUBLE 1
#define FLOAT 2
#define CHAR 3
#define STRING 4

class NumberCaster{
	int it_is;

	int int_casted;
	float float_casted;
	double double_casted;
	char char_casted;
	std::string input;
	bool (NumberCaster::*type_check[5])(std::string const &str);
	
	bool is_intger(std::string const &str);
	bool is_double(std::string const &str);//? use string::substr
	bool is_float(std::string const &str);//!didn't work
	bool is_char(std::string const &str);
	bool is_str(std::string const &str);//! just all str like "dsf45T864f"
public:
	NumberCaster(std::string const &src);
	NumberCaster(NumberCaster const &src);
	NumberCaster &operator=(NumberCaster const &rhs);
	~NumberCaster(){}

	void printAllCast();
};

#endif