#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	try{
		Bureaucrat b1("Marc", 7);
		Form f1("f1", 6, 6);

		b1.signForm(f1);
	}catch (std::exception &e){
		std::cout << e << std::endl;
	}

	return 0;
}