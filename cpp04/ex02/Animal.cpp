#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("truc")
{
	std::cout << "Hello i am an Animal" << std::endl;
}

Animal::Animal(Animal const	&instance)
{
	std::cout << "Hello i am an Animal" << std::endl;
	_type = instance.getType();
}

Animal::~Animal(void)
{
	std::cout << "Goodbye i was an Animal" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
