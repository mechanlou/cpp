#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public :

	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	MateriaSource	&operator=(MateriaSource const &src);
	void			learnMateria(AMateria*);
	AMateria		*createMateria(std::string const & type);
	AMateria		**getInventory(void) const;

	private :

	void		_initTab(void);
	AMateria 	**_materia;
};

#endif