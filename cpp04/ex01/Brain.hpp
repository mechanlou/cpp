#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	public :

	Brain(void);
	Brain(Brain const &instance);
	virtual	~Brain(void);
	Brain				&operator=(Brain const &instance);
	std::string	const	*getIdeas(void) const;
	
	private :

	std::string	_ideas[100];
};

#endif