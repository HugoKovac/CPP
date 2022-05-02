#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){

	try{
		Intern f1;
		Bureaucrat p1("Jean", 5);

		AForm *test = f1.makeForm("shrubbery creation", "TEST");
		test->getName();
		p1.signForm(*test);
		test->execute(p1);
		delete test;
	}
	catch (std::exception &e){
		std::cerr << e << std::endl;
	}

	return 0;
}