#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5)
{
	_target = src.getTarget();
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException)
{
	if (!this->getSignedStatus())
		throw(FormNotSignedException());
	else if (executer.getGrade() > this->getExecGrade())
		throw(GradeTooLowException());
	std::cout << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}