#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>


/*general functions*/
void	PrintFormatChoice(std::string str);
int	string_digit(std::string);

class Contact{
	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _Number;
	std::string _Secret;
public :
	int	SetFirstName(void);
	int	SetLastName(void);
	int	SetNickName(void);
	int	SetNumber(void);
	int	SetSecret(void);
	void	DisplayChoice(int index) const;
	void	DisplayAll(void) const;
};

#endif