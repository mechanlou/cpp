#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("truc")
{
	std::cout << "Hello i am a WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Goodbye i was a WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	_type = src.getType();
	std::cout << "Hello i am a WrongAnimal copy" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* random noise ¯\\_(:/)_/¯" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	_type = src.getType();
	return (*this);
}