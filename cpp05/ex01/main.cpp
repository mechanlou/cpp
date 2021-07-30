#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	pierre = Bureaucrat("Pierre", 23);
	Bureaucrat	paul = Bureaucrat("Paul", 78);
	Bureaucrat	jacques = Bureaucrat("Jacques", 149);

	Form	papier = Form("Papier", 79, 150);
	Form	feuille = Form("Feuille", 38, 150);

	jacques.signForm(papier);
	paul.signForm(papier);
	pierre.signForm(papier);

	std::cout << std::endl;

	jacques.signForm(feuille);
	paul.signForm(feuille);
	pierre.signForm(feuille);
	pierre.signForm(feuille);
	return (0);
}