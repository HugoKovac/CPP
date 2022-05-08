#include "iter.hpp"
#include <string>

int main(){
	int tab[3] = {1, 2, 3};
	std::string tab1[3] = {"test1", "test2", "test3"};
	char tab2[3] = {'a', 'b', 'c'};

	iter(tab, 3, &print_stuff);
	iter(tab1, 3, &print_stuff);
	iter(tab2, 3, &print_stuff);
}