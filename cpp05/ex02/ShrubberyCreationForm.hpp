#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
	std::string const _target;
public:
	ShrubberyCreationForm(std::string const &target);
	void execute(Bureaucrat const & executor)const;
};

#endif