#include <iostream>
#include <string>
#include "Array.hpp"

int	main(void)
{
	Array<float>	a(3);
	Array<float>	b(a);
	Array<int>		c;
	Array<int>		d(2);
	int				i;

	a[0] = 1.1;
	a[1] = 1.2;
	a[2] = 1.3;

	i = 0;
	while (i < 3)
	{
		std::cout << "a[" << i << "] = " << a[i];
		std::cout << " | b[" << i << "] = " << b[i] << std::endl;
		i++;
	}

	d[0] = 88;
	d[1] = 14;
	c = d;

	i = 0;
	while (i < 2)
	{
		std::cout << "c[" << i << "] = " << c[i];
		std::cout << " | d[" << i << "] = " << d[i] << std::endl;
		i++;
	}

	try
	{
		std::cout << "gneu gneuuu " << d[2] << " wtf ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
