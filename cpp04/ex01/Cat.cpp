#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	_cervo = new Brain();
	std::cout << "Meow Meow  * spawns *" << std::endl;
}

Cat::~Cat(void)
{
	delete _cervo;
	std::cout << "Meow Meow  * dies *" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow  * yells for food like an asshole *" << std::endl;
}

Cat::Cat(Cat const &instance)
{
	std::cout << "Meow Meow  * copy spawns *" << std::endl;
	_type = instance.getType();
	_cervo = new Brain(*instance.getBrain());
}

Brain	*Cat::getBrain(void) const
{
	return (_cervo);
}

Cat	&Cat::operator=(Cat const instance)
{
	_type = instance.getType();
	delete _cervo;
	_cervo = new Brain(*instance.getBrain());
	return (*this);
}