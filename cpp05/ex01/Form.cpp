#include "Form.hpp"
#include <iostream>

Form::Form(void) : _name("default"), _signGrade(1), _execGrade(1)
{
	
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false)
{
	if (execGrade < 1 || signGrade < 1)
		throw (Form::GradeTooHighException());
	else if (execGrade > 150 || signGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _isSigned(src.getSignedStatus())
{

}

Form::~Form(void)
{

}

int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (_execGrade);
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSignedStatus(void) const
{
	return (_isSigned);
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << " is a Form with a " << src.getSignGrade() << " sign grade and a " << src.getExecGrade() << " exec grade. Is it signed ? " << src.getSignedStatus();
	return (o);
}

void	Form::beSigned(Bureaucrat const &guy)
{

}