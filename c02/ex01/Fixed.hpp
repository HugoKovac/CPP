#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
	int _value;
	static int const _bits = 8;
public:
	/*constructor*/
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &src);
	/*operator*/
	Fixed &operator=(Fixed const &rhs);
	/*Member functions*/
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
	/*destructor*/
	~Fixed(void);
};

/*operator not member*/
std::ostream &operator<<(std::ostream &lhs, Fixed &rhs);

#endif