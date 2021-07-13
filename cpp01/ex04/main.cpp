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
	std::ifstream	src;
	std::ofstream	dst;
	std::string		content;
	char			tmp[201];
	std::size_t		index;

	if (!pars_args(argc, argv, src, dst))
		return (1);
	while (!src.eof())
	{
		src.getline(tmp, 200);
			content += tmp;
		if (strlen(tmp) < 200)
			content += '\n';
	}
	index = 0;
	while (index != std::string::npos && index < content.size())
	{
		index = content.find(argv[2], index);
		if (index != std::string::npos)
		{
			content.erase(index, strlen(argv[2]));
			content.insert(index, argv[3]);
			index += strlen(argv[3]);
		}
	}
	dst << content;
	return (0);
}