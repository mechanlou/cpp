#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45)
{
	_target = src.getTarget();
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException)
{
	if (!this->getSignedStatus())
		throw(FormNotSignedException());
	else if (executer.getGrade() > this->getExecGrade())
		throw(GradeTooLowException());
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << " * bzzzzzzzz *  * crik *  * crik *  * crik *" << std::endl;
		std::cout << _target << " has been successfully robotomized" << std::endl;
	}
	else
	{
		std::cout << " * bzzzzzzzz *  * crik *  * crik *  * crik * - oh fuck" << std::endl;
		std::cout << _target << "'s robotomy failed" << std::endl;
	}
}