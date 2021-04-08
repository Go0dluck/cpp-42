#include <iostream>
#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "\t===MAIN TEST===" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP STACK " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "STACK SIZE " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\t===COPY TEST===" << std::endl;
	MutantStack<int> mstack1(mstack);
	mstack1.push(777);
	MutantStack<int>::iterator it1 = mstack1.begin();
	MutantStack<int>::iterator ite1 = mstack1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::cout << "\t===COPY = TEST===" << std::endl;
	MutantStack<int> mstack2;
	mstack2 = mstack;
	mstack2.push(354);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}
