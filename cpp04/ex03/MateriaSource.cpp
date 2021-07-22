#include "MateriaSource.hpp"
#include <iostream>

void	MateriaSource::_initTab(void)
{
	int	i;

	_materia = new AMateria *[4];
	i = 0;
	while (i < 4)
		_materia[i++] = NULL;
}

MateriaSource::MateriaSource(void)
{
	_initTab();
	std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource(void)
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
	std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	int			i;
	AMateria	**inventory;

	inventory = src.getInventory();
	i = 0;
	while (i < 4)
	{
		if (inventory[i])
			_materia[i] = inventory[i]->clone();
		i++;
	}
	std::cout << "MateriaSource copy created" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	int			i;
	AMateria	**inventory;

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

void	MateriaSource::learnMateria(AMateria *toLearn)
{
	int	i;

	i = 0;
	while (i < 4 && _materia[i])
		i++;
	if (i < 4 && toLearn)
		_materia[i] = toLearn->clone();
	else
		std::cout << "No space left" << std::endl;
	delete toLearn;
	
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
		i++;
	}
	return (NULL);
}

AMateria	**MateriaSource::getInventory(void) const
{
	return (_materia);
}