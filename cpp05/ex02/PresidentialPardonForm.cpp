#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: AForm("PresidentialPardonForm", 25, 5), _target(target){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
	if (getSign() == false)
		throw AForm::FormNotSignException();
	if (executor.getGrade() > getGrade_e())
		throw AForm::GradeTooLowExecException();
	std::cout << _target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
