#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nb_contact = 0;
	this->_index = 0;
	this->_start = 1;
}

PhoneBook::~PhoneBook(void){};

int PhoneBook::ADD(void)
{
	std::string buffer;
	int rtn = 0;
	int changed = 0;

	std::cout << std::endl;
	if (this->_index == 8)
	{
		changed = 1;
		this->_index = 0;
	}
	else if (this->_nb_contact != 8)
		this->_nb_contact++;
	rtn += this->_tab_contact[this->_index].SetFirstName();
	rtn += this->_tab_contact[this->_index].SetLastName();
	rtn += this->_tab_contact[this->_index].SetNickName();
	rtn += this->_tab_contact[this->_index].SetNumber();
	rtn += this->_tab_contact[this->_index].SetSecret();
	if (rtn != 5)
	{
		if (changed)
			this->_index = 8;
		else
			this->_nb_contact--;
		std::cout << "Input not valid" << std::endl;
		return 0;
	}
	std::cout << std::endl << "Has been added" << std::endl;
	this->_index++;
	return 1;
}

void PhoneBook::SEARCH(void)
{
	std::string what_index;

	std::cout << std::endl;
	if (this->_nb_contact < 1)
	{
		std::cout << "No contact" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_nb_contact; i++)
	{
		this->_tab_contact[i].DisplayChoice(i);
	}
	std::cout << "=> ";
	std::getline(std::cin, what_index, '\n');
	if (what_index.length() < 1 || !string_digit(what_index))
	{
		std::cout << std::endl << "Input unvailable!" << std::endl;
		return ;
	}
	if (std::stoi(what_index, nullptr, 10) < this->_nb_contact)
		this->_tab_contact[std::stoi(what_index, nullptr, 10)].DisplayAll();
	else
		std::cout << "\'" << std::stoi(what_index, nullptr, 10) << "\'" << " don't exist" << std::endl;
}

void PhoneBook::EXIT(void)
{this->_start = 0;}

int PhoneBook::ExitStatu(void) const
{return (this->_start);}
