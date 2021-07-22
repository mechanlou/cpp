#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <string>

class	WrongAnimal
{
	public :

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal(void);
	void		makeSound(void) const;
	WrongAnimal	&operator=(WrongAnimal const &src);	
	std::string	getType(void) const;

	protected :

	std::string	_type;
};

#endif