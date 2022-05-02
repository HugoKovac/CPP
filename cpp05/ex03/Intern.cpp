#include "Intern.hpp"
#include <functional>

Intern::Intern(){
	_formCmp[0] = "robotomy request";
	_formCmp[1] = "shrubbery creation";
	_formCmp[2] = "presidential pardon";
	_funcPtr[0] = &Intern::makeRoboty;
	_funcPtr[1] = &Intern::makeShrubbery;
	_funcPtr[2] = &Intern::makePresidential;
}

AForm *Intern::makeForm(std::string const &form_name, std::string const &target){
	int done = -1;
	for (int i = 0; i < 3; i++)
		if (form_name.compare(_formCmp[i]) == 0){
			done = i;
			break;
		}
	if (done == -1)
		throw BadNameException();
	// AForm* FormPtr = 
	(*this->_funcPtr)[done];
	std::cout << "Intern creates "	 << std::endl;//! Name of Form
	(void)target;
	return NULL;
}

const char* Intern::BadNameException::what()const throw(){
	return ("Bad name of Form!");
}

AForm *Intern::makeRoboty(std::string const &target){
	return new RobotomyRequestForm(target);
}

AForm *Intern::makeShrubbery(std::string const &target){
	return new ShrubberyCreationForm(target);
}
AForm *Intern::makePresidential(std::string const &target){
	return new PresidentialPardonForm(target);
}
