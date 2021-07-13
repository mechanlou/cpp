#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie paul = Zombie(name);
	paul.announce();
}