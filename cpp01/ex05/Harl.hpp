#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string mode[4];
	void (Harl::*ptr[4])(void);
public:
	Harl(void);
	void complain(std::string level);
};

#endif