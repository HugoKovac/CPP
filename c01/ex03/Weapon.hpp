#include <string>
#include <iostream>

class Weapon{
	std::string _type;
public:
	std::string const &getType();
	std::string setType();
};