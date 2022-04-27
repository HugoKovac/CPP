#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){
	try{
		Bureaucrat b1("Marc", 15);
		ShrubberyCreationForm s1("f1");

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

	return 0;
}