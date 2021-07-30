#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	pierre = Bureaucrat("Pierre", 4);

	Form		*shrub = new ShrubberyCreationForm("chemoi");
	Form		*pres = new PresidentialPardonForm("Jawad");
	Form		*robo = new RobotomyRequestForm("Squeezie");

	pierre.signForm(*shrub);
	pierre.signForm(*pres);
	pierre.signForm(*robo);

	std::cout << std::endl;

	pierre.execForm(*shrub);
	pierre.execForm(*pres);
	pierre.execForm(*robo);

	return (0);
}