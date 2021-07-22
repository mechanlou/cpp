#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public :

	Character(std::string name);
	virtual	~Character(void);
	Character(Character const &src);
	Character			&operator=(Character const &src);
	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	AMateria			**getInventory(void) const;

	private :

	void		_initTab(void);
	Character(void);
	std::string	_name;
	AMateria 	**_materia;
};

#endif