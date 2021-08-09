#include <iostream>
#include "span.hpp"

int main(void)
{
	Span				test(5);
	Span				stuff(20000);
	Span				gotta_fail(19999);
	std::vector<int>	src(20000, 666);

	test.addNumber(5);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	try
	{
		test.addNumber(1995);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	stuff.addRange(src.begin(), src.end());
	std::cout << stuff.shortestSpan() << std::endl;
	std::cout << stuff.longestSpan() << std::endl;

	std::cout << std::endl;

	try
	{
		gotta_fail.addRange(src.begin(), src.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}