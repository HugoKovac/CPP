#include <exception>
#include <string>
#include <iostream>

class Bureaucrat{
	std::string _name;
	int _grade;
public:
	Bureaucrat(std::string const name, int const grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat(){}
	
	int getGrade();
	std::string getName();

	void upGrade();
	void downGrade();

	class GradeTooHighException : public std::exception{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &lhs, Bureaucrat &rhs);
std::ostream &operator<<(std::ostream &lhs, std::exception const &rhs);