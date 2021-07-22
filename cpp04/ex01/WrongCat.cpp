#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Meow Meow  * spawns *" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Meow Meow  * dies *" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow Meow  * yells for food like an asshole *" << std::endl;
}

WrongCat::WrongCat(WrongCat const &instance)
{
	std::cout << "Meow Meow  * spawns *" << std::endl;
	_type = instance.getType();
}

WrongCat	&WrongCat::operator=(WrongCat const instance)
{
	_type = instance.getType();
	return (*this);
}