#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	_cervo = new Brain();
	std::cout << "Woof Woof  * spawns *" << std::endl;
}

Dog::~Dog(void)
{
	delete _cervo;
	std::cout << "Woof Woof  * dies *" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof  * barks at the neighbour *" << std::endl;
}

Dog::Dog(Dog const &instance)
{
	std::cout << "Woof Woof  * copy spawns *" << std::endl;
	_type = instance.getType();
	_cervo = new Brain(*instance.getBrain());
}

Brain	*Dog::getBrain(void) const
{
	return (_cervo);
}

Dog	&Dog::operator=(Dog const instance)
{
	_type = instance.getType();
	delete _cervo;
	_cervo = new Brain(*instance.getBrain());
	return (*this);
}