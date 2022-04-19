#include "Fixed.hpp"

/*constructor*/
Fixed::Fixed(void) : _value(0){}

Fixed::Fixed(Fixed const &src){
	_value = src.getRawBits();
}

Fixed::Fixed(int const value) : _value(value << _bits){}

Fixed::Fixed(float const value) : _value (roundf(value * (1 << _bits))){}

/*Member functions*/
int Fixed::getRawBits(void) const{
	return _value;
}
void Fixed::setRawBits(int const raw){
	_value = raw;
}

int Fixed::toInt(void) const{
	return (_value >> _bits);
}

float Fixed::toFloat(void) const{
	return ((float)_value / (float)(1 << _bits));
}

float Fixed::min(Fixed &value1, Fixed &value2){
	return value1 < value2 ? value1.toFloat() : value2.toFloat();
}

float Fixed::min(Fixed const &value1, Fixed const &value2){
	return value1 < value2 ? value1.toFloat() : value2.toFloat();
}

float Fixed::max(Fixed &value1, Fixed &value2){
	return value1 > value2 ? value1.toFloat() : value2.toFloat();
}

float Fixed::max(Fixed const &value1, Fixed const &value2){
	return value1 > value2 ? value1.toFloat() : value2.toFloat();
}


/*destructor*/
Fixed::~Fixed(void){}

/*operator*/
Fixed &Fixed::operator=(Fixed const &rhs){
	_value = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const &rhs){
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs){
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs){
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs){
	return Fixed(toFloat() / rhs.toFloat());
}

int Fixed::operator>(Fixed const &rhs){
	return toFloat() > rhs.toFloat();
}

int Fixed::operator<(Fixed const &rhs)const{
	return toFloat() < rhs.toFloat();
}

int Fixed::operator>(Fixed const &rhs)const{
	return toFloat() > rhs.toFloat();
}

int Fixed::operator<(Fixed const &rhs){
	return toFloat() < rhs.toFloat();
}

int Fixed::operator>=(Fixed const &rhs){
	return toFloat() >= rhs.toFloat();
}

int Fixed::operator<=(Fixed const &rhs){
	return toFloat() <= rhs.toFloat();
}

int Fixed::operator==(Fixed const &rhs){
	return toFloat() == rhs.toFloat();
}

int Fixed::operator!=(Fixed const &rhs){
	return toFloat() != rhs.toFloat();
}

Fixed &Fixed::operator++(void){
	_value++;
	return *this;
}

Fixed &Fixed::operator--(void){
	_value--;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	
	--(*this);
	return tmp;
}

/*non member*/
std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs){
	lhs << rhs.toFloat();
	return lhs;
}

std::ostream &operator<<(std::ostream &lhs, Fixed &rhs){
	lhs << rhs.toFloat();
	return lhs;
}
