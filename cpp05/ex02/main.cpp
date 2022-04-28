#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	try{
		Bureaucrat b1("Marc", 15);
		ShrubberyCreationForm s1("Jean");

		std::cout << b1 << std::endl;
		std::cout << s1 << std::endl;
		std::cout << "================" << std::endl;
		b1.signForm(s1);
		s1.execute(b1);
		std::cout << std::endl << "================" << std::endl;
		std::cout << b1 << std::endl;
		std::cout << s1 << std::endl;
	}catch (std::exception &e){
		std::cout << e << std::endl;
	}

		std::cout << std::endl<< std::endl << "******************" << std::endl<< std::endl;
	try{
		Bureaucrat b2("René Coty", 25);
		RobotomyRequestForm r1("Marc");

		std::cout << b2 << std::endl;
		std::cout << r1 << std::endl;
		std::cout << "================" << std::endl;
		b2.signForm(r1);
		r1.execute(b2);
		r1.execute(b2);
		r1.execute(b2);
		r1.execute(b2);
		std::cout << std::endl << "================" << std::endl;
		std::cout << b2 << std::endl;
		std::cout << r1 << std::endl;
	}catch (std::exception &e){
		std::cout << e << std::endl;
	}

		std::cout << std::endl<< std::endl << "******************" << std::endl<< std::endl;
	try{
		Bureaucrat b3("Jean", 5);
		PresidentialPardonForm p1("René Coty");

		std::cout << b3 << std::endl;
		std::cout << p1 << std::endl;
		std::cout << "================" << std::endl;
		b3.signForm(p1);
		p1.execute(b3);
		std::cout << std::endl << "================" << std::endl;
		std::cout << b3 << std::endl;
		std::cout << p1 << std::endl;
	}catch (std::exception &e){
		std::cout << e << std::endl;
	}

	return 0;
}