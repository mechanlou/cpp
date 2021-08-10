#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;

	vec.push_back(2);
	vec.push_back(-4);
	vec.push_back(6);
	
	lst.push_back(2);
	lst.push_back(-4);
	lst.push_back(6);

	std::cout << "vector :" << std::endl;
	std::cout << easyfind(vec, -4) << std::endl;
	std::cout << easyfind(vec, 12) << std::endl;
	
	std::cout << "list :" << std::endl;
	std::cout << easyfind(lst, 2) << std::endl;
	std::cout << easyfind(lst, 2123) << std::endl;
	return (true);
}