#include "Zombie.hpp"
#include "brainz.hpp"

int	main(void)
{
	Zombie	pierre = Zombie("pierre");
	Zombie	*paul;

	pierre.announce();
	paul = newZombie("paul");
	paul->announce();
	randomChump("jacques");
	delete paul;
	return (0);
}