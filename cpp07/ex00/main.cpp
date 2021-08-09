#include <iostream>
#include "templates.hpp"
#include <string>


int	main(void)
{
	int			a;
	int			b;
	float		floatA;
	float		floatB;
	std::string strA;
	std::string strB;

	a = 1;
	b = 2;
	floatA = 42.02f;
	floatB = 42.02f;
	strA = "prank";
	strB = "test";

	std::cout << "string A : " << strA << std::endl;
	std::cout << "string B : " << strB << std::endl;
	std::cout << "Swapping..." << std::endl;
	::swap<std::string>(strA, strB);
	std::cout << "string A : " << strA << std::endl;
	std::cout << "string B : " << strB << std::endl;

	std::cout << std::endl;

	std::cout << "int A : " << a << std::endl;
	std::cout << "int B : " << b << std::endl;
	std::cout << "min : " << ::min<int>(a, b) << std::endl;
	std::cout << "max : " << ::max<int>(a, b) << std::endl;

	std::cout << std::endl;

	std::cout << "float A : " << floatA << std::endl;
	std::cout << "float B : " << floatB << std::endl;
	std::cout << "min : " << ::min<float>(floatA, floatB) << std::endl;
	std::cout << "max : " << ::max<float>(floatA, floatB) << std::endl;

	return (0);
}

// int	main(void)
// {
// 	int a = 2;
// 	int b = 3;

// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// 	std::string c = "chaine1";
// 	std::string d = "chaine2";

// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// 	return 0;
// }