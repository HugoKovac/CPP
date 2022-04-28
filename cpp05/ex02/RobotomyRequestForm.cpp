#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int RobotomyRequestForm::_robot = -1;

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: AForm("RobotomyRequestForm", 72, 45), _target(target){
}

void RobotomyRequestForm::makeDrillSouds()const{
	_robot *= -1;
	std::cout << "Drill sounds" << std::endl;
	if (_robot == 1)
		std::cout << _target << " has been robotized with success" << std::endl;
	else
		std::cout << _target << " has not been robotized with success" << std::endl;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
	if (getSign() == false)
		throw AForm::FormNotSignException();
	if (executor.getGrade() > getGrade_e())
		throw AForm::GradeTooLowExecException();
	makeDrillSouds();
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
