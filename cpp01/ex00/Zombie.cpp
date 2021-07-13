#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << "\"ArghaahAa...\" " << this->_name << " fuckin died" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << '<' << this->_name << "> BraiiiiiiiinnnzzzZ" << std::endl;
}