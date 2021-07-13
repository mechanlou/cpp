#include <iostream>
#include <string>
#include "Book.hpp"

int	main(void)
{
	Book		livre;
	std::string	command;

	std::cout << "Tapez \"add\" pour ajouter un contact,";
	std::cout << " \"search\" pour parcourir les contacts ou \"exit\" pour quitter." << std::endl;
	while (1 == true)
	{
		std::cout << " * ";
		std::cin >> command;
		if (!command.compare("exit"))
		{
			std::cout << "Cya later" << std::endl;
			return (0);
		}
		else if (!command.compare("add"))
			livre.add();
		else if (!command.compare("search"))
			livre.search();
	}
	return (0);
}