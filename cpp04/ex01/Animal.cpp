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

void	Animal::makeSound(void) const
{
	std::cout << "* random noise ¯\\_(:/)_/¯" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

Animal	&Animal::operator=(Animal const instance)
{
	this->_type = instance.getType();
	return (*this);
}