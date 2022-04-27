#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;
class Form{
	std::string const _name;
	bool _signed;
	int _sign_grade;
	int _exec_grade;
public:
	Form(std::string name, int sign_grade, int exec_grade) throw(std::exception);
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	~Form(){}
	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
	std::string const &getName()const;
	bool getSign()const;
	int getGrade_s()const;
	int getGrade_e()const;
	void beSigned(Bureaucrat const &src) throw(std::exception);
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif