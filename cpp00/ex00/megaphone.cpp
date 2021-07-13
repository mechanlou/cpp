#include <iostream>

char	*uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
			std::cout << uppercase(argv[i++]);
	}
	std::cout << std::endl;
	return (0);
}
