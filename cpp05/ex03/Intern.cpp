#include "Intern.hpp"
#include <iostream>

Intern::Intern(void)
{
	_forms[0] = "presidential pardon";
	_forms[1] = "robotomy request";
	_forms[2] = "shrubbery creation";
}

Intern::~Intern(void)
{

}

Form	*Intern::makeForm(std::string name, std::string target) const
{
	Form	*list[3];
	int		chosen_one;
	int	i;

	list[0] = new PresidentialPardonForm(target);
	list[1] = new RobotomyRequestForm(target);
	list[2] = new ShrubberyCreationForm(target);
	chosen_one = -1;
	i = 0;
	while (i < 3)
	{
		if (_forms[i] == name)
			chosen_one = i;
		else
			delete list[i];
		i++;
	}
	if (chosen_one < 0)
	{
		std::cout << "Requested form doesn't exist" << std::endl;
		return (NULL);
	}
	return (list[chosen_one]);
}