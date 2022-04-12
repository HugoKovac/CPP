#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (&rhs != this)
		this->_value = rhs._value;
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;

}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}


Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}