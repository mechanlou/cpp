#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap a("Paul");
	ClapTrap b("Billy");
	
	std::cout << std::endl;

	a.attack("Jean-Marie le Pen");
	a.takeDamage(8);
	a.beRepaired(664);

	std::cout << std::endl;
	
	return (0);
}