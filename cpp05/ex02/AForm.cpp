#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(std::string name, int sign_grade, int exec_grade)
: _name(name), _signed(false){
	if (sign_grade < 1 || exec_grade < 1)
		throw AForm::GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw AForm::GradeTooLowException();
	_sign_grade = sign_grade;
	_exec_grade = exec_grade;
}

AForm::AForm(AForm const &src){
	*this = src;
}

AForm &AForm::operator=(AForm const &rhs){
	_signed = rhs._signed;
	_sign_grade = rhs._sign_grade;
	_exec_grade = rhs._exec_grade;
	return *this;
}

std::string const &AForm::getName()const{
	return _name;
}

bool AForm::getSign()const{
	return _signed;
}

int AForm::getGrade_s()const{
	return _sign_grade;
}

int AForm::getGrade_e()const{
	return _exec_grade;
}

void AForm::setSign(bool sign){
	_signed = sign;
}

void AForm::setGrade_s(int sign_grade){
	_sign_grade = sign_grade;
}

void AForm::setGrade_e(int exec_grade){
	_exec_grade = exec_grade;
}

void AForm::beSigned(Bureaucrat const &src){
	if (src.getGrade() > _sign_grade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("Grade too high!");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return ("Grade too low!");
}

const char* AForm::FormNotSignException::what() const throw(){
	return ("Form not signed, I can't execute that!");
}

const char* AForm::GradeTooLowExecException::what() const throw(){
	return ("Grade too low to execute!");
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs){
	o << "AForm : " << rhs.getName() << std::endl
	<< "Signed : " << (rhs.getSign() == 0 ? "false" : "true") << std::endl
	<< "Grade to sign : " << rhs.getGrade_s() << std::endl
	<< "Grade to execute : " << rhs.getGrade_e() << std::endl;
	return o;
}
