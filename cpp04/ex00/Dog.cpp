#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Woof Woof  * spawns *" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Woof Woof  * dies *" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof  * barks at the neighbour *" << std::endl;
}

Dog::Dog(Dog const  &instance)
{
	std::cout << "Woof Woof  * spawns *" << std::endl;
	_type = instance.getType();
}

Dog	&Dog::operator=(Dog const &instance)
{
	_type = instance.getType();
	return (*this);
}