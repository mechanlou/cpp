#include <string>
#include <iostream>
#include <stdlib.h>
#include <limits>
#include <errno.h>

bool	convert_char(std::string arg)
{
	char	c;
	
	c = arg[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
	return (true);
}

bool	convert_double(double value)
{
	std::cout << "char: ";
	if (value > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (value < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(value) << std::endl;
	
	std::cout << "int: ";
	if (value > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "float: ";
	if (value > std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(value) << 'f' << std::endl;
	
	std::cout << "double: " << value << std::endl;
	return (true);
}

bool	special_cases(std::string arg)
{
	double	value;

	if (arg == "inf" || arg == "+inf" || arg == "+inff" || arg == "inff")
		value = std::numeric_limits<double>::infinity();
	else if (arg == "-inf" || arg == "-inff")
		value = -std::numeric_limits<double>::infinity();
	else
		value = std::numeric_limits<double>::quiet_NaN();

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(value) << 'f' << std::endl;
	std::cout << "double: " << value << std::endl;
	return (true);
}
//KEKW
// bool	check_arg(char *str)
// {
// 	int	i;
// 	std::string arg;
	
// 	arg = str;
// 	//special cases
// 	if (arg == "inf" || arg == "-inf" || arg == "+inf" || arg == "inff"
// 		|| arg == "-inff" || arg == "+inff" || arg == "nan" || arg == "nanf")
// 		return (special_cases(arg));
// 	//check if it's empty or if it's a char
// 	if (arg.size() == 0)
// 		return (false);
// 	else if (arg.size() == 1 && (arg[0] < '0' || arg[0] > '9'))
// 		return (convert_char(arg));
// 	// check the number of signs
// 	i = 0;
// 	while (arg[i] && (i == '+' || i == '-' ))
// 		i++;
// 	if (i > 1 || arg[i] < '0' || arg[i] > '9')
// 		return (false);
// 	//go through the numbers
// 	while (arg[i] <= '9' && arg[i] >= '0')
// 		i++;
// 	//check if it's over or if next char is a '.' or a 'f'
// 	if (!arg[i])
// 		return (convert_double(arg));
// 	else if (arg[i] == 'f')
// 	{
// 		if (arg[i + 1])
// 			return (false);
// 		else
// 			return (convert_double(str));
// 	}
// 	else if (arg[i] == '.')
// 	{
// 		if (!arg[i + 1] || arg[i + 1] == 'f')
// 			return (false);
// 		i++;
// 		while (arg[i] <= '9' && arg[i] >= '0')
// 			i++;
// 		//check again if it's over or if next char is a 'f'
// 		if (!arg[i])
// 			return (convert_double(str));
// 		if (arg[i] == 'f')
// 		{
// 			if (arg[i + 1])
// 				return (false);
// 			else
// 				return (convert_double(str));
// 		}
// 		return (false);
// 	}
// 	return (false);
// }


bool	check_arg(char *str)
{
	double		value;
	std::string arg;
	char		*pars_error;
	
	arg = str;
	//special cases
	if (arg == "inf" || arg == "-inf" || arg == "+inf" || arg == "inff"
		|| arg == "-inff" || arg == "+inff" || arg == "nan" || arg == "nanf"
		|| arg == "-nan" || arg == "-nanf")
		return (special_cases(arg));
	//check if it's empty or if it's a char
	if (arg.size() == 0)
		return (false);
	else if (arg.size() == 1 && (arg[0] < '0' || arg[0] > '9'))
		return (convert_char(arg));
	//real convert try (strtod op)
	value = strtod(str, &pars_error);
	if (errno)
		return (false);
	if (!pars_error[0] || (pars_error[0] == 'f' && !pars_error[1]))
		return (convert_double(value));
	return (false);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong arg number" << std::endl;
		return (1);
	}
	if (!check_arg(argv[1]))
	{
		std::cerr << "Input error" << std::endl;
		return (1);
	}
	return (0);
}