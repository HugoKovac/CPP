#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm("ShrubberyCreationForm", 145, 137){
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	setSign(rhs.getSign());
	setGrade_s(rhs.getGrade_s());
	setGrade_e(rhs.getGrade_e());
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{
	std::ofstream new_file;
	std::string file_name = _target;
	file_name += "_shrubbery";

	if (getSign() == false)
		throw AForm::FormNotSignException();
	if (executor.getGrade() > getGrade_e())
		throw AForm::GradeTooLowExecException();
	new_file.open(file_name.c_str());
	if (!new_file.is_open()){
		std::cout << "Problem when opening file" <<std::endl;return;}
	new_file << "└──8" << std::endl
			<<"   ├──5" << std::endl
			<<"   │   ├──2" << std::endl
			<<"   │   └──6" << std::endl
			<<"   └──10" << std::endl
			<<"       ├──9" << std::endl
			<<"       └──11" << std::endl;
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
