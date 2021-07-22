#include "Character.hpp"
#include <iostream>

void	Character::_initTab(void)
{
	int	i;

	_materia = new AMateria *[4];
	i = 0;
	while (i < 4)
		_materia[i++] = NULL;
}

Character::Character(void) : _name("default")
{
	_initTab();
	std::cout << "Unknown character created" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	_initTab();
	std::cout << "Character " << name << " created" << std::endl;
}

Character::~Character(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
		i++;
	}
	delete [] _materia;
	std::cout << "Character " << _name << " destroyed" << std::endl;
}

Character::Character(Character const &src)
{
	int			i;
	AMateria	**inventory;

	_name = src.getName();
	inventory = src.getInventory();
	i = 0;
	while (i < 4)
	{
		if (inventory[i])
			_materia[i] = inventory[i]->clone();
		i++;
	}
	std::cout << "Character " << _name << " copy created" << std::endl;
}

Character	&Character::operator=(Character const &src)
{
	int			i;
	AMateria	**inventory;

	_name = src.getName();
	inventory = src.getInventory();
	i = 0;
	while (i < 4)
	{
		delete _materia[i];
		if (inventory[i])
			_materia[i] = inventory[i]->clone();
		else
			_materia[i] = NULL;
		i++;
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && _materia[i] != NULL)
		i++;
	if (i < 4 && m)
	{
		_materia[i] = m;
		std::cout << _name << " equiped " << m->getType() << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _materia[idx])
	{
		std::cout << _name << " unequiped " << _materia[idx]->getType() << std::endl;
		_materia[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _materia[idx])
		_materia[idx]->use(target);
}

AMateria	**Character::getInventory(void) const
{
	return (_materia);
}