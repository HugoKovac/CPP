#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void){

	try{
		Intern p1;

		p1.makeForm("shrubbery creation", "test");
	}
	catch (std::exception &e){
		std::cerr << e << std::endl;
	}

	return 0;
}