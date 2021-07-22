#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria of type " << type << " created" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	_type = src.getType();
	std::cout << "AMateria of type " << _type << " copy created" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria of type " << _type << " destroyed" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

AMateria	&AMateria::operator=(AMateria const &src)
{
	_type = src.getType();
	return (*this);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* do undefined stuff to " << target.getName() << " *" << std::endl;
}