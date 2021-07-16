#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap a("Paul");
	ScavTrap b("Billy");

	std::cout << std::endl;

	a.attack("Jean-Marie le Pen");
	a.takeDamage(8);
	a.beRepaired(664);

	std::cout << std::endl;

	b.attack("Jean-Marie le Pen");
	b.takeDamage(8);
	b.beRepaired(664);
	b.guardGate();
	
	std::cout << std::endl;

	return (0);
}