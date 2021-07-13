#include "brainz.hpp"

int	main(void)
{
	int	i;
	int	a;
	int	b;

	a = 3;
	b = 7;
	Zombie *hordeA = zombieHorde(a, "truc");
	Zombie *hordeB = zombieHorde(b, "machin");
	i = 0;
	while (i < a)
		hordeA[i++].announce();
	i = 0;
	while (i < b)
		hordeB[i++].announce();
	delete [] hordeA;
	delete [] hordeB;
	return (0);
}