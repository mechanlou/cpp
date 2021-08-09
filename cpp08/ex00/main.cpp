#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	std::list<int> list;

	list.push_back(2);
	list.push_back(4);
	list.push_back(6);
	std::cout << easyfind(list, 4) << std::endl;
	std::cout << easyfind(list, 5) << std::endl;
	return (true);
}