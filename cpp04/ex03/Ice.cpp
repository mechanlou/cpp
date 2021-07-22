#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice created" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout << "Ice copy created" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destroyed" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}