#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public :

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
	void					execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException);
	std::string				getTarget(void) const;

	private :

	std::string	_target;
};

#endif