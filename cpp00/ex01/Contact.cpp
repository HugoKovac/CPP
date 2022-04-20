#include "Contact.hpp"

int Contact::SetFirstName(void)
{
	std::cout << "Please enter the First Name # ";
	std::getline(std::cin, this->_FirstName, '\n');
	if (this->_FirstName.length() == 0)
		return 0;
	return 1;
}

int Contact::SetLastName(void)
{
	std::cout << "Please enter the Last Name # ";
	std::getline(std::cin, this->_LastName, '\n');
	if (this->_LastName.length() == 0)
		return 0;
	return 1;
}

int Contact::SetNickName(void)
{
	std::cout << "Please enter the Nickname # ";
	std::getline(std::cin, this->_NickName, '\n');
	if (this->_NickName.length() == 0)
		return 0;
	return 1;
}

int Contact::SetNumber(void)
{
	std::cout << "Please enter the Number # ";
	std::getline(std::cin, this->_Number, '\n');
	if (!string_digit(this->_Number) || this->_Number.length() == 0)
		return 0;
	return 1;
}

int Contact::SetSecret(void)
{
	std::cout << "Please enter the Secret # ";
	std::getline(std::cin, this->_Secret, '\n');
	if (this->_Secret.length() == 0)
		return 0;
	return 1;
}

void Contact::DisplayChoice(int index) const
{
	PrintFormatChoice(std::to_string(index));
	std::cout << "|";
	PrintFormatChoice(this->_FirstName);
	std::cout << "|";
	PrintFormatChoice(this->_LastName);
	std::cout << "|";
	PrintFormatChoice(this->_NickName);
	std::cout << std::endl << std::endl;
}

void	Contact::DisplayAll(void) const
{
	std::cout << std::endl;
	std::cout << "First Name : " << this->_FirstName << std::endl;
	std::cout << "Last Name : " << this->_LastName << std::endl;
	std::cout << "NickName : " << this->_NickName << std::endl;
	std::cout << "Number : " << this->_Number << std::endl;
	std::cout << "Secret : " << this->_Secret << std::endl;
}
