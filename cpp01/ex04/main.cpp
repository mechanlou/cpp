#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <fstream>

bool	pars_args(int argc, char **argv, std::ifstream &src, std::ofstream &dst)
{
	std::string	tmp;
	if (argc != 4)
	{
		std::cerr << "Error : wrong arg number" << std::endl;
		return (false);
	}
	else if (!strlen(argv[1]) || !strlen(argv[2]) || !strlen(argv[3]))
	{
		std::cerr << "Error : an arg is empty" << std::endl;
		return (false);
	}
	src.open(argv[1]);
	if (src.fail())
	{
		std::cerr << "Error : problem when opening file" << std::endl;
		return (false);
	}
	tmp = argv[1];
	tmp += ".replace";
	dst.open(tmp.c_str());
	if (dst.fail())
	{
		std::cerr << "Error : problem when opening file" << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	std::stringstream	*file;
	std::ifstream	src;
	std::ofstream	dst;
	std::string		content;
	std::size_t		index;

	if (!pars_args(argc, argv, src, dst))
		return (1);
	
	file = src.rdbuf();
	content = file.str();
	index = 0;
	do
	{
		index = content.find(argv[2], index);
		if (index != std::string::npos)
		{
			std::cout << index << std::endl;
			content.replace(index, strlen(argv[3]), argv[3]);
			index += strlen(argv[3]);
		}
	} while (index != std::string::npos && index < content.size());
	dst << content;
	return (0);
}