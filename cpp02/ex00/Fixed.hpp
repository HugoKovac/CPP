#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
	int _value;
	static int const _bits = 8;
public:
	/*constructor*/
	Fixed(void);
	Fixed(Fixed const &src);
	/*operator*/
	Fixed &operator=(Fixed const &rhs);
	/*Member functions*/
	void setRawBits(int const raw);
	int getRawBits(void) const;
	/*destructor*/
	~Fixed(void);
};

#endif