#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include "AForm.hpp"

class Bureaucrat{
	std::string const _name;
	int _grade;
public:
	Bureaucrat(std::string const name, int const grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat(){}
	
	int getGrade()const;
	std::string getName()const;

	void upGrade();
	void downGrade();

	void signForm(AForm &src)const;

	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs);
std::ostream &operator<<(std::ostream &lhs, std::exception const &rhs);

#endif
