#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *paul = new Zombie(name);
	return (paul);
}