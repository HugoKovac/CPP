#include "NumberCaster.hpp"

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

NumberCaster::NumberCaster(NumberCaster const &src){
	*this = src;
}

NumberCaster &NumberCaster::operator=(NumberCaster const &rhs){
	it_is = rhs.it_is;
	int_casted = rhs.int_casted;
	float_casted = rhs.float_casted;
	double_casted = rhs.double_casted;
	char_casted = rhs.char_casted;
	input = rhs.input;
	for (int i = 0; i < 5; i++)
		type_check[i] = rhs.type_check[i];
	for (int i = 0; i < 5; i++)
		cmpStr[i] = rhs.cmpStr[i];
	return *this;
}

NumberCaster::NumberCaster(std::string const &src) : it_is(-1), input(src), inf_or_nan(-1){
	cmpStr[0] = "+inf";
	cmpStr[1] = "+inff";
	cmpStr[2] = "-inf";
	cmpStr[3] = "-inff";
	cmpStr[4] = "nan";
	for (int i = 0; i < 5; i++)
		if (input.compare(cmpStr[i]) == 0)
		{
			inf_or_nan = i;
			inf_or_nan = (inf_or_nan == 1 ? 0 : inf_or_nan);
			inf_or_nan = (inf_or_nan == 3 ? 2 : inf_or_nan);
			break ;
		}
	type_check[CHAR] = &NumberCaster::is_char;
	type_check[INTEGER] = &NumberCaster::is_integer;
	type_check[DOUBLE] = &NumberCaster::is_double;
	type_check[FLOAT] = &NumberCaster::is_float;
	type_check[STRING] = &NumberCaster::is_str;
	if (inf_or_nan == -1)
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
	bool comma = false;
	size_t i;
	for (i = 0; str[i] != '.' && str[i];comma = str[i] == '.', i++);
	if (comma == false)
		return false;
	sub1 = str.substr(0, i);
	sub2 = str.substr(i + 1);
	sub2.erase(sub2.length() - 1);
	if (is_integer(sub1) && is_integer(sub2))
		return true;
	return false;
}

bool NumberCaster::is_char(std::string const &str){
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		return true;
	return false;
}

bool NumberCaster::is_str(std::string const &str){
	(void)str;
	return true;
}

void NumberCaster::cast_all(){
	switch (it_is)
	{
		case INTEGER :
			int_casted = atoi(input.c_str());
			char_casted = static_cast<char>(int_casted);
			float_casted = static_cast<float>(int_casted);
			double_casted = static_cast<double>(int_casted);
			break ;
		case DOUBLE :
			double_casted = strtod(input.c_str(), NULL);
			char_casted = static_cast<char>(double_casted);
			int_casted = static_cast<int>(double_casted);
			float_casted = static_cast<float>(double_casted);
			break;
		case FLOAT :
			float_casted = strtof(input.c_str(), NULL);
			char_casted = static_cast<char>(float_casted);
			int_casted = static_cast<int>(float_casted);
			double_casted = static_cast<double>(float_casted);
			break;
		case CHAR :
			char_casted = static_cast<char>(input[1]);
			int_casted = static_cast<int>(char_casted);
			float_casted = static_cast<float>(char_casted);
			double_casted = static_cast<double>(char_casted);
			break;
		case STRING :
			std::cout << "char: Mauvaise input" << std::endl;
			std::cout << "int: Mauvaise input" << std::endl;
			std::cout << "float: Mauvaise input" << std::endl;
			std::cout << "double: Mauvaise input" << std::endl;
			break;
	}
	
}

void NumberCaster::printAllCast(){
	if (it_is != STRING && inf_or_nan == -1)
	{
		if (int_casted < 32 || int_casted > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << "\'" << static_cast<char>(char_casted) << "\'" << std::endl;
		std::cout << "int: " << int_casted << std::endl;
		std::cout << "float: " << static_cast<float>(float_casted);
		if ((float_casted != 0 && (float_casted / int_casted == 1)) || float_casted == 0)
			std::cout << ".0f" << std::endl;
		else
			std::cout << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(double_casted);
		if ((float_casted != 0 && (float_casted / int_casted == 1)) || float_casted == 0)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
	else if (inf_or_nan != -1){
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << cmpStr[inf_or_nan] << "f" << std::endl;
		std::cout << "double: " << cmpStr[inf_or_nan] << std::endl;
	}
}
