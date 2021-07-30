#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base	*generate(void)
{
	int	rand_num;
	
	srand(time(NULL));
	rand_num = rand() % 3;

	if (rand_num == 0)
	{
		// std::cout << "I've got an A" << std::endl;
		return (new A);
	}
	else if (rand_num == 1)
	{
		// std::cout << "It's a B" << std::endl;
		return (new B);
	}
	else if (rand_num == 2)
	{
		// std::cout << "There is a C" << std::endl;
		return (new C);
	}
	std::cerr << "Wait, what happened ?" << std::endl;
	return (NULL);
}

void	identify(Base *p)
{
	A	*testA;
	B	*testB;
	C	*testC;
	
	testA = dynamic_cast<A*>(p);
	testB = dynamic_cast<B*>(p);
	testC = dynamic_cast<C*>(p);
	if (testA)
		std::cout << "A";
	else if (testB)
		std::cout << "B";
	else if (testC)
		std::cout << "C";
	else
		std::cout << "WTF";
}

void	identify(Base &p)
{
	try
	{
		p = dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::exception& e)
	{
	}

		try
	{
		p = dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(const std::exception& e)
	{
	}

		try
	{
		p = dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(const std::exception& e)
	{
	}
}

int main(void)
{
	Base	*base;
	
	base = generate();
	std::cout << "And i detect a ";
	identify(base);
	std::cout << std::endl;

	std::cout << "And i redetect a ";
	identify(*base);
	std::cout << std::endl;
	return (0);
}