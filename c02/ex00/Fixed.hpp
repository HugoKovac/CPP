#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
	int	_value;
	static int const fract_bits = 8;
public:
	Fixed (void);
	Fixed (Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed (void);
};

#endif