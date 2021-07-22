#include "Brain.hpp"
#include <iostream>


Brain::Brain(void)
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(Brain const &instance)
{
	int					i;
	std::string const	*hisIdeas;

	hisIdeas = instance.getIdeas();
	i = 0;
	while (i < 100)
	{
		_ideas[i] = hisIdeas[i];
		i++;
	}
	std::cout << "Brain copy created" << std::endl;
}

Brain	&Brain::operator=(Brain const &instance)
{
	int					i;
	std::string const	*hisIdeas;

	hisIdeas = instance.getIdeas();
	i = 0;
	while (i < 100)
	{
		_ideas[i] = hisIdeas[i];
		i++;
	}
	std::cout << "Brain copied successfuly" << std::endl;
	return (*this);
}

std::string	const	*Brain::getIdeas(void) const
{
	return (_ideas);
}