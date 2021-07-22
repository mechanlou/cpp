#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public :

	Cat(void);
	Cat(Cat const &instance);
	virtual ~Cat(void);
	Cat		&operator=(Cat const instance);
	void	makeSound(void) const;
	Brain	*getBrain(void) const;

	private :

	Brain	*_cervo;
};

#endif