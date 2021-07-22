#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure created" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout << "Cure copy created" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destroyed" << std::endl;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* cures " << target.getName() << "'s wounds *" << std::endl;
}