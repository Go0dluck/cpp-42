#include <iostream>
#include <string>
#include "whatever.hpp"

int	main()
{
	int a = 2;
	int b = 3;
	float	e = 3.5;
	float	g = 7.3;
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;

	std::cout << "e = " << e << ", g = " << g << std::endl;
	::swap(e, g);
	std::cout << "e = " << e << ", g = " << g << std::endl;
	std::cout << "max(e, g) = " << ::max(e, g) << std::endl;
	std::cout << "min(e, g) = " << ::min(e, g) << std::endl;
	return 0;
}
