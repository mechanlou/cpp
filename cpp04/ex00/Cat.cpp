#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Meow Meow  * spawns *" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Meow Meow  * dies *" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow  * yells for food like an asshole *" << std::endl;
}

Cat::Cat(Cat const &instance)
{
	std::cout << "Meow Meow  * spawns *" << std::endl;
	_type = instance.getType();
}

Cat	&Cat::operator=(Cat const instance)
{
	_type = instance.getType();
	return (*this);
}