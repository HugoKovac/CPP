#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage filename s1 s2" << std::endl;
		return 1;
	}
	std::string buffer;
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::string newFileName = av[1];
	newFileName += ".replace";

	std::ifstream	file;
	std::ofstream	new_file;

	file.open(av[1]);//check if opened
	if (!file.is_open())
	{
		std::cout << "Fail when opening file" << std::endl;
		return 1;
	}
	new_file.open(newFileName);
	if (!new_file.is_open())
	{
		std::cout << "Fail when creating file" << std::endl;
		return 1;
	}
	while (getline(file, buffer, '\n'))
	{
		size_t rtn;
		while ((rtn = buffer.find(av[2])) != std::string::npos)
		{
			buffer.erase(rtn, s1.length());
			buffer.insert(rtn, s2);
		}
		new_file << buffer << "\n";
	}
	file.close();
	new_file.close();
	return 0;
}