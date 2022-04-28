#ifndef ROBOTYREQUESTFORMFORM_HPP
#define ROBOTYREQUESTFORMFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm{
	static int _robot;
	std::string const _target;
public:
	RobotomyRequestForm(std::string const &target);
	void execute(Bureaucrat const & executor)const;
	void makeDrillSouds()const;
};

#endif