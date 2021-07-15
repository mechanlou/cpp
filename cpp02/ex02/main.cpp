#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << "a + b is " << (a + b) << std::endl;
	std::cout << "c + b is " << (c + b) << std::endl;
	std::cout << "c - b is " << (c - b) << std::endl;
	std::cout << "c * 2 is " << (c * Fixed(2)) << std::endl;
	std::cout << "c / 2 is " << (c / Fixed(2)) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "b == d is " << (b == d) << std::endl;
	std::cout << "b <= d is " << (b <= d) << std::endl;
	std::cout << "c <= d is " << (c <= d) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "b == d is " << (b == d) << std::endl;
	std::cout << "a++ is " << a++ << " a is " << a << std::endl;
	std::cout << "a++ is " << a++ << " a is " << a << std::endl;
	// std::cout << "a-- is " << a-- << " a is " << a << std::endl;
	std::cout << "--a is " << --a << std::endl;

	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
	return (0);
}