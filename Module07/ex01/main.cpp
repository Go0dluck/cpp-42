#include <iostream>
#include <string>
#include "iter.hpp"

int	main()
{
	int	arr[] = {1, 2, 3, 4, 5};
	char arr1[] = {'a', 'b', 'c', 'd', 'f'};
	float arr2[] = {2.5, 3.3, 6.6, 1.7, 51.8};

	std::cout << "\tSTART" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl << "\tITER" << std::endl;
	::iter(arr, 5, iterFunc);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "\tSTART" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl << "\tITER" << std::endl;
	::iter(arr1, 5, iterFunc);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "\tSTART" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl << "\tITER" << std::endl;
	::iter(arr2, 5, iterFunc);
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "\t===TEST CHECK LISt===" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	::iter( tab, 5,  print);
	::iter( tab2, 5, print);
	return 0;
}
