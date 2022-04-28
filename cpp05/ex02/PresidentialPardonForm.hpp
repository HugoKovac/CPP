#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm{
	std::string const _target;
public:
	PresidentialPardonForm(std::string const &target);
	void execute(Bureaucrat const & executor)const;
};

#endif