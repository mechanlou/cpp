#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	public :

	Animal(void);
	Animal(Animal const &instance);
	virtual ~Animal(void);
	virtual void	makeSound(void) const;
	std::string		getType(void) const;
	Animal			&operator=(Animal const instance);

	protected :

	std::string	_type;
};

#endif