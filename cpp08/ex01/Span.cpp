#include "Span.hpp"
#include <iostream>


Span::Span(unsigned int const n) : _maxSize(n), _currentSize(0){}

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

