#include "Karen.hpp"
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	Karen 	karen;
	bool	previous;
	int		i;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
		return (1);
	i = 0;
	previous = false;
	while (i < 4)
	{
		if (levels[i] == argv[1] || previous)
		{
			previous = true;
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			karen.complain(levels[i]);
			std::cout << std::endl;
		}
		i++;
	}
	return (0);
}