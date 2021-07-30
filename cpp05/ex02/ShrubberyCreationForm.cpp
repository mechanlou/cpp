#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137)
{
	_target = src.getTarget();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	_target = src.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executer) const throw(GradeTooLowException, FormNotSignedException)
{
	std::ofstream	dst;

	if (!this->getSignedStatus())
		throw(FormNotSignedException());
	else if (executer.getGrade() > this->getExecGrade())
		throw(GradeTooLowException());
	dst.open(_target + "_shrubbery");
	if (dst.fail())
	{
		std::cerr << "Error : problem when opening file" << std::endl;
		return ;
	}
	dst << "    ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\....	\n";
}