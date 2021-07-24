#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
	{
		_grade = 1;
		throw (Bureaucrat::GradeTooHighException());
	}
	else if (grade > 150)
	{
		_grade = 150;
		throw (Bureaucrat::GradeTooLowException());
	}
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	_name = src.getName();
	_grade = src.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	_name = src.getName();
	_grade = src.getGrade();
	return (*this);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

void	Bureaucrat::incGrade(void) throw(Bureaucrat::GradeTooHighException)
{
	if (_grade > 1)
		_grade--;
	else
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decGrade(void) throw(Bureaucrat::GradeTooLowException)
{
	if (_grade < 150)
		_grade++;
	else
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << " is a bureaucrat graded " << src.getGrade();
	return (o);
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}