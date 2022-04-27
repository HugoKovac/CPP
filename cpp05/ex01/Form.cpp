#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade)
: _name(name), _signed(false){
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || exec_grade < 150)
		throw Form::GradeTooLowException();
	_sign_grade = sign_grade;
	_exec_grade = exec_grade;
}

Form::Form(Form const &src){
	*this = src;
}

Form &Form::operator=(Form const &rhs){
	_signed = rhs._signed;
	_sign_grade = rhs._sign_grade;
	_exec_grade = rhs._exec_grade;
	return *this;
}

std::string const &Form::getName()const{
	return _name;
}

bool Form::getSign()const{
	return _signed;
}

int Form::getGrade_s()const{
	return _sign_grade;
}

int Form::getGrade_e()const{
	return _exec_grade;
}

void Form::beSigned(Bureaucrat const &src){
	if (src.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs){
	o << "Form : " << rhs.getName() << std::endl
	<< "Signed : " << rhs.getSign() << std::endl
	<< "Grade to sign : " << rhs.getGrade_s() << std::endl
	<< "Grade to execute : " << rhs.getGrade_e() << std::endl;
	return o;
}
