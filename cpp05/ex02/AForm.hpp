#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;
class AForm{
	std::string const _name;
	bool _signed;
	int _sign_grade;
	int _exec_grade;
public:
	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};

	class FormNotSignException : public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowExecException : public std::exception{
		virtual const char* what() const throw();
	};

	AForm(std::string name, int sign_grade, int exec_grade);
	AForm(AForm const &src);
	AForm &operator=(AForm const &rhs);
	virtual ~AForm(){}

	std::string const &getName()const;
	bool getSign()const;
	int getGrade_s()const;
	int getGrade_e()const;
	void setSign(bool sign);
	void setGrade_s(int sign_grade);
	void setGrade_e(int exec_grade);

	void beSigned(Bureaucrat const &src);
	virtual void execute(Bureaucrat const & executor)const = 0;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif