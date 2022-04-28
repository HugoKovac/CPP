#ifndef ROBOTYREQUESTFORMFORM_HPP
#define ROBOTYREQUESTFORMFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm{
	static int _robot;
	std::string const _target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	~RobotomyRequestForm(){}

	void execute(Bureaucrat const & executor)const;
	void makeDrillSouds()const;
};

#endif