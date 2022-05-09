#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array{
	T *_data;
public:
	Array() : _data(NULL){}
	Array(unsigned int const &n){
		data = new T[]n;
		for (int i = 0; i < n; i++)
			data[i] = 0;
	}
};

#endif