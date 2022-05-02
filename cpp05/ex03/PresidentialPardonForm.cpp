#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("PresidentialPardonForm", 25, 5){
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	setSign(rhs.getSign());
	setGrade_s(rhs.getGrade_s());
	setGrade_e(rhs.getGrade_e());
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
	if (getSign() == false)
		throw AForm::FormNotSignException();
	if (executor.getGrade() > getGrade_e())
		throw AForm::GradeTooLowExecException();
	std::cout << _target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
