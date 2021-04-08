#include "Array.hpp"

int	main()
{
	try
	{
		Array<int> arr(5);
		std::cout << "\t=====START ARRAY INT=====" << std::endl;
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i + 1;
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "\t=====COPY CONSTRUCTOR=====" << std::endl;
		Array<int> arr2(arr);
		for (unsigned int i = 0; i < arr2.size(); i++)
		{
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "\t=====START ARRAY STRING=====" << std::endl;
		Array<char> arr_str(10);
		for (unsigned int i = 0; i < arr_str.size(); i++)
		{
			arr_str[i] = i + 37;
			std::cout << arr_str[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "\t=====START ARRAY DOUBLE=====" << std::endl;
		Array<double> arr_dob(10);
		for (unsigned int i = 0; i < arr_dob.size(); i++)
		{
			arr_dob[i] = i + 0.2;
			std::cout << arr_dob[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "\t=====ERROR INDEX=====" << std::endl;
		std::cout << arr_dob[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
