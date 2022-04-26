#include "Bureaucrat.hpp"

int main(void){
	try{Bureaucrat p1("Marc", 0);}
	catch (std::exception &e){std::cout << e << std::endl;}

	try{Bureaucrat p3("Marc", 151);}
	catch (std::exception &e){std::cout << e << std::endl;}

	try{Bureaucrat p4("Marc", 1); std::cout << p4 << std::endl;}
	catch (std::exception &e){std::cout << e << std::endl;}

	try{
		Bureaucrat p2("Francis", 150);
		std::cout << p2 << std::endl;
		p2.downGrade();
	}
	catch (std::exception &e){std::cout << e << std::endl;}
	

	return 0;
}