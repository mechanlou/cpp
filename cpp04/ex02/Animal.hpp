#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	public :

	Animal(void);
	Animal(Animal const &instance);
	virtual ~Animal(void);
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

	protected :

	std::string	_type;
};

#endif