#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public :

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
	void					execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException);
	std::string				getTarget(void) const;

	private :

	std::string	_target;
};

#endif