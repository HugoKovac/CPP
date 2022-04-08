#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook{
	int		_nb_contact;
	int		_start;
	int		_index;
	Contact	_tab_contact[8];
public :
			PhoneBook(void);
			~PhoneBook(void);
	int		ADD(void);
	void	EXIT(void);
	int		ExitStatu(void) const;
	void	SEARCH(void);
};

#endif