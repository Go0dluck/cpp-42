#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <list>
#include <vector>

int		main()
{
	std::list<int> lst;

	std::cout << YELLOW << "\t===LIST===" << RESET << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		lst.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << YELLOW << "\t===FIND TOO LIST 5===" << RESET << std::endl;
	if (easyfind(lst, 5) == 1)
		std::cout << GREEN << "number 5 found in the sheet" << RESET << std::endl;
	else
		std::cout << RED << "the number 5 in the sheet was not found" << RESET << std::endl;
	std::cout << YELLOW << "\t===FIND TOO LIST 15===" << RESET << std::endl;
	if (easyfind(lst, 15) == 1)
		std::cout << GREEN << "number 15 found in the sheet" << RESET << std::endl;
	else
		std::cout << RED << "the number 15 in the sheet was not found" << RESET << std::endl;

	std::vector<int> vct;
	std::cout << std::endl << YELLOW << "\t===VECTOR===" << RESET << std::endl;
		for (size_t i = 10; i < 30; i++)
	{
		lst.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << YELLOW << "\t===FIND TOO VECTOR 23===" << RESET << std::endl;
	if (easyfind(lst, 23) == 1)
		std::cout << GREEN << "number 23 found in the vector" << RESET << std::endl;
	else
		std::cout << RED << "the number 45 in the vector was not found" << RESET << std::endl;
	std::cout << YELLOW << "\t===FIND TOO VECTOR 45===" << RESET << std::endl;
	if (easyfind(lst, 45) == 1)
		std::cout << GREEN << "number 45 found in the vector" << RESET << std::endl;
	else
		std::cout << RED << "the number 45 in the vector was not found" << RESET << std::endl;
	return (0);
}
