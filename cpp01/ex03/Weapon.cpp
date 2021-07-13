#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}