
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);

	return (raw);
}

Data*	deserialize(uintptr_t raw)
{
	Data *	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main()
{
	Data		*data = new Data;
	uintptr_t	raw;

	data->value = 42;

	std::cout << data << std::endl;
	std::cout << "value: " << data->value << std::endl;
	std::cout << "================================" << std::endl;
	raw = serialize(data);
	std::cout << data << std::endl;
	std::cout << "value: " << data->value << std::endl;
	std::cout << raw << std::endl;

	std::cout << "================================" << std::endl;
	data = deserialize(raw);
	std::cout << data << std::endl;
	std::cout << "value: " << data->value << std::endl;
	std::cout << raw << std::endl;

	delete data;

	return (0);
}