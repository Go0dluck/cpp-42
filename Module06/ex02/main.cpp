#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "It's pointer 'A' class" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "It's pointer 'B' class" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "It's pointer 'C' class" << std::endl;
}

void identify_from_reference( Base & p)
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "It's reference 'A' class" << std::endl;
	else if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "It's reference 'B' class" << std::endl;
	else if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "It's reference 'C' class" << std::endl;
}

Base * generate(void)
{
	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "CREATE 'A' CLASS" << std::endl;
		return (new A());
	}
	if (i == 1)
	{
		std::cout << "CREATE 'B' CLASS" << std::endl;
		return (new B());
	}
	std::cout << "CREATE 'C' CLASS" << std::endl;
	return (new C());
}

int main()
{
	srand(time(NULL));
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}
