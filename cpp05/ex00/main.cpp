#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	*a = new Bureaucrat();
	Bureaucrat	b = Bureaucrat("filip", 2);
	Bureaucrat	c;
	Bureaucrat	*d;

	try
	{
		std::cout << b << std::endl;
		b.incGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << b << std::endl;
		b.incGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << *a << std::endl;
		a->decGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Trying to copy b into c : " << (c = b) << std::endl;

	try
	{
		std::cout << "Trying to create Bureaucrat with grade to high" << std::endl;
		d = new Bureaucrat("pipo", 666);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete a;
	return (0);
}