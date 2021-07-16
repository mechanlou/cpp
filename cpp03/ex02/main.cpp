#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap a("Paul");
	ScavTrap b("Billy");
	FragTrap c("Eddy");

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

	c.attack("Jean-Marie le Pen");
	c.takeDamage(20);
	c.beRepaired(1000);
	c.highFiveGuys();

	std::cout << std::endl;

	return (0);
}