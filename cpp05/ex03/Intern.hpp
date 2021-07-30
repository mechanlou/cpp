#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	public :

	Intern(void);
	virtual	~Intern(void);
	Form	*makeForm(std::string form_name, std::string target) const;

	private :

	Intern(Intern const &src);
	Intern	&operator=(Intern const &src);
	std::string	_forms[3];
};

#endif
