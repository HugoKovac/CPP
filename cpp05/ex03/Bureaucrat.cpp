#include "Bureaucrat.hpp"

typedef Bureaucrat::GradeTooHighException GTHighE;
typedef Bureaucrat::GradeTooLowException GTLowE;

Bureaucrat::Bureaucrat(std::string const name, int const grade)
: _name(name){
	if (grade > 150){throw GTLowE();}
	if (grade < 1){throw GTHighE();}
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs){
	_grade = rhs._grade;
	return *this;
}



int Bureaucrat::getGrade()const{
	return _grade;
}

std::string Bureaucrat::getName()const{
	return _name;
}


void Bureaucrat::upGrade(){
	if (_grade == 1){throw GTHighE();}
	--_grade;
}

void Bureaucrat::downGrade(){
	if (_grade == 150){throw GTLowE();}
	++_grade;
}

void Bureaucrat::signForm(AForm &src)const{
	try{
		src.beSigned(*this);
	}catch (std::exception &e){
		std::cout << _name << " couldn't sign " << src.getName()
		<< " because " << e << std::endl;
		return ;
	}
	std::cout << _name << " signed " << src.getName() << std::endl;
}

const char* GTHighE::what() const throw(){
	return ("Grade too high!");
}

const char* GTLowE::what() const throw(){
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &lhs, std::exception const &rhs){
	lhs << rhs.what();
	return lhs;
}

std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs){
	lhs << rhs.getName() << ", bureaucrat garde " << rhs.getGrade();
	return lhs;
}