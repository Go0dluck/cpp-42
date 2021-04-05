#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << BLUE << "\t===TEST 1 NORM BUREAUCRAT===" << RESET << std::endl;
		Bureaucrat test1 = Bureaucrat("Dima", 100);
		std::cout << test1;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << BLUE << "\t===TEST 2 NORM BUREAUCRAT + UPGRADE===" << RESET << std::endl;
		Bureaucrat test2 = Bureaucrat("Kolya", 2);
		std::cout << test2;
		test2.upGrade();
		std::cout << test2;
		test2.upGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << BLUE << "\t===TEST 3 NORM BUREAUCRAT + DOWNGRADE===" << RESET << std::endl;
		Bureaucrat test3 = Bureaucrat("Vasya", 150);
		std::cout << test3;
		test3.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << BLUE << "\t===TEST 4 DOWNGRADE BUREAUCRAT===" << RESET << std::endl;
		Bureaucrat test4 = Bureaucrat("Sanya", 160);
		std::cout << test4;
		test4.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		std::cout << BLUE << "\t===TEST 4 UPGRADE BUREAUCRAT===" << RESET << std::endl;
		Bureaucrat test5 = Bureaucrat("Nika", -5);
		std::cout << test5;
		test5.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}
