#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	AMateria	*ice = new Ice;
	AMateria	*cure = new Cure;
	Character	*buddy = new Character("paulo");

	buddy->equip(ice);
	buddy->equip(cure);
	buddy->use(1, *buddy);
	buddy->unequip(1);
	// buddy->equip(new Ice);
	// buddy->equip(new Ice);
	// buddy->equip(new Cure);
	delete cure;
	delete buddy;

	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	return  (0);
}