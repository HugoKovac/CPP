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
	Fixed operator+(Fixed const &rhs);
	Fixed operator-(Fixed const &rhs);
	Fixed operator*(Fixed const &rhs);
	Fixed operator/(Fixed const &rhs);

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	int operator>(Fixed const &rhs);
	int operator<(Fixed const &rhs);
	int operator>(Fixed const &rhs)const;
	int operator<(Fixed const &rhs)const;
	int operator==(Fixed const &rhs);
	int operator!=(Fixed const &rhs);
	int operator<=(Fixed const &rhs);
	int operator>=(Fixed const &rhs);
	/*Member functions*/
	void setRawBits(int const raw);
	int getRawBits(void) const;
	float toFloat(void) const;
	int toInt(void) const;
	static float min(Fixed &value1, Fixed &value2);
	static float max(Fixed &value1, Fixed &value2);
	static float min(Fixed const &value1, Fixed const &value2);
	static float max(Fixed const &value1, Fixed const &value2);
	/*destructor*/
	~Fixed(void);
};

/*operator not member*/
std::ostream &operator<<(std::ostream &lhs, Fixed &rhs);
std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs);

#endif