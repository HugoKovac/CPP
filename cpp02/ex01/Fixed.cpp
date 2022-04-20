#include "Fixed.hpp"

/*constructor*/
Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	_value = src.getRawBits();
}

Fixed::Fixed(int const value) : _value(value << _bits){
	std::cout << "Integer constructor called" << std::endl;
}

Fixed::Fixed(float const value) : _value (roundf(value * (1 << _bits))){
	std::cout << "Float constructor called" << std::endl;
}

/*operator*/
Fixed &Fixed::operator=(Fixed const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	_value = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs){
	lhs << rhs.toFloat();
	return lhs;
}

std::ostream &operator<<(std::ostream &lhs, Fixed &rhs){
	lhs << rhs.toFloat();
	return lhs;
}

/*Member functions*/
int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

int Fixed::toInt(void) const{
	return (_value >> _bits);
}

float Fixed::toFloat(void) const{
	return ((float)_value / (float)(1 << _bits));
}

/*destructor*/
Fixed::~Fixed(void){

	std::cout << "Destructor called" << std::endl;
}

