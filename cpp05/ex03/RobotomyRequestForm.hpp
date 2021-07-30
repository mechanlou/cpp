#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public :

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
	void					execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException);
	std::string				getTarget(void) const;

	private :

	std::string	_target;
};

#endif