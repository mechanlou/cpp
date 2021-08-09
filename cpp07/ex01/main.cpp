#include <iostream>
#include <string>
#include "iter.hpp"


template <typename T>
void	print_stuff(T &a)
{
	std::cout << a << std::endl;
}

void	dec_one(int &a)
{
	a--;
}

int	main(void)
{
	std::string strs[3] = {"bonjour", "merci", "au revoir"};
	int			ints[4] = {1, 3, 1, 4};
	
	iter<std::string>(strs, 3, &print_stuff);
	iter<int>(ints, 4, &print_stuff);
	iter<int>(ints, 4, &dec_one);
	iter<int>(ints, 4, &print_stuff);
	return (0);
}
