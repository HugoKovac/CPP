#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	std::string _formCmp[3];
	AForm* (Intern::*_funcPtr[3])(std::string const &target);
	
public:
	Intern();
	AForm *makeForm(std::string const &form_name, std::string const &target);
	AForm *makeRoboty(std::string const &target);
	AForm *makeShrubbery(std::string const &target);
	AForm *makePresidential(std::string const &target);
	class BadNameException : public std::exception{
		public:
			virtual const char* what()const throw();
	};
};

#endif