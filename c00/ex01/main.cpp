#include "PhoneBook.hpp"

int	string_digit(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
	}
	return 1;
}

void	PrintFormatChoice(std::string str)
{
	for (int i = 0; i < 10; i++)
	{
		if (str.length() > 10 && i == 9)
		{
			std::cout << ".";
			break;
		}
		else if ((size_t)(i + 1) > str.length())
			std::cout << " ";
		else
			std::cout << str[i];
	}
}

int main()
{
	PhoneBook	PhoneBook;
	std::string	mode;

	while (PhoneBook.ExitStatu())
	{
		std::cout << std::endl;
		std::cout << "Choose your mode :" << std::endl; 
		std::cout << "ADD	or	SEARCH	or	EXIT" << std::endl << std::endl << "=> ";
		std::getline(std::cin, mode, '\n');
		if (mode.length() == 0)
			continue;
		if (mode.compare("ADD") == 0)
			PhoneBook.ADD();
		else if (mode.compare("SEARCH") == 0)
			PhoneBook.SEARCH();
		else if (mode.compare("EXIT") == 0)
			PhoneBook.EXIT();
	}
	return (0);
}
