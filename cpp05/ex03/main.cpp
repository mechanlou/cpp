#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	pierre = Bureaucrat("Pierre", 4);
	Intern		gabin;

	Form		*shrub = gabin.makeForm("j'ecrie des conneries", "un truc");
				shrub = gabin.makeForm("shrubbery creation", "chemoi");
	Form		*pres = gabin.makeForm("presidential pardon", "Jawad");
	Form		*robo = gabin.makeForm("robotomy request", "Squeezie");

	pierre.signForm(*shrub);
	pierre.signForm(*pres);
	pierre.signForm(*robo);

	std::cout << std::endl;

	pierre.execForm(*shrub);
	pierre.execForm(*pres);
	pierre.execForm(*robo);

	return (0);
}