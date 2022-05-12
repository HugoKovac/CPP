#include "Span.hpp"
#include <iostream>


Span::Span(unsigned int const n) : _maxSize(n), _currentSize(0){}

Span::Span(Span & src) : _maxSize(src._maxSize){
	for (std::vector<int>::iterator it = src._data.begin(); it != src._data.end(); it++)
		_data.push_back(*it);
}

Span &Span::operator=(Span & rhs){
	if (_maxSize != 0)
		_data.clear();
	_maxSize = rhs._maxSize;
	for (std::vector<int>::iterator it = rhs._data.begin(); it != rhs._data.end(); it++)
		_data.push_back(*it);
	return *this;
}

void Span::addNumber(int const n){
	if (_currentSize + 1 > _maxSize)
		throw std::length_error("addNumber");
	++_currentSize;
	_data.push_back(n);
}

void Span::printAll(){
	std::cout << "{";
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != _data.end())
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
}

int Span::longestSpan(){
	if (_data.size() <= 1)
		throw std::length_error("longestSpan");
	return *(std::max_element(_data.begin(), _data.end())) - *(std::min_element(_data.begin(), _data.end()));
}

int Span::shortestSpan(){
	int minSpan = std::numeric_limits<int>::max();
	if (_data.size() <= 1)
		throw std::length_error("shortestSpan");
	for (std::vector<int>::iterator it = _data.begin(); it != _data.end(); it++){
		for (std::vector<int>::iterator it2 = _data.begin(); it2 != _data.end(); it2++){
			if (it2 == it)
				continue;
			if (*it - *it2 < minSpan && *it - *it2 >= 0)
				minSpan = *it - *it2;
		}
	}
	return (minSpan);
}
