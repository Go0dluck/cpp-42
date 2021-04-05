#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	srand ( time(NULL) );
	std::cout << VIOLET << "\t=====149 GRADE Bur=====" << RESET << std::endl;
	try
	{
		std::cout << BLUE << "\t=====PresidentialPardonForm=====" << RESET << std::endl;
		Bureaucrat test = Bureaucrat("Kolya", 149);
		PresidentialPardonForm pres = PresidentialPardonForm("Kolya");
		std::cout << pres;
		test.signForm(pres);
		test.executeForm(pres);
		std::cout << BLUE << "\t=====RobotomyRequestForm=====" << RESET << std::endl;
		RobotomyRequestForm robot = RobotomyRequestForm("ROBOT");
		std::cout << robot;
		test.signForm(robot);
		test.executeForm(robot);
		std::cout << BLUE << "\t=====ShrubberyCreationForm=====" << RESET << std::endl;
		ShrubberyCreationForm tree = ShrubberyCreationForm("Home");
		std::cout << tree;
		test.signForm(tree);
		test.executeForm(tree);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	std::cout << std::endl << VIOLET << "\t=====50 GRADE Bur=====" << RESET << std::endl;
	try
	{
		std::cout << BLUE << "\t=====PresidentialPardonForm=====" << RESET << std::endl;
		Bureaucrat test = Bureaucrat("Kolya", 50);
		PresidentialPardonForm pres = PresidentialPardonForm("Kolya");
		std::cout << pres;
		test.signForm(pres);
		test.executeForm(pres);
		std::cout << BLUE << "\t=====RobotomyRequestForm=====" << RESET << std::endl;
		RobotomyRequestForm robot = RobotomyRequestForm("ROBOT");
		std::cout << robot;
		test.signForm(robot);
		test.executeForm(robot);
		std::cout << BLUE << "\t=====ShrubberyCreationForm=====" << RESET << std::endl;
		ShrubberyCreationForm tree = ShrubberyCreationForm("Home");
		std::cout << tree;
		test.signForm(tree);
		test.executeForm(tree);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	std::cout << std::endl << VIOLET << "\t=====3 GRADE Bur=====" << RESET << std::endl;
	try
	{
		std::cout << BLUE << "\t=====PresidentialPardonForm=====" << RESET << std::endl;
		Bureaucrat test = Bureaucrat("Dima", 3);
		PresidentialPardonForm pres = PresidentialPardonForm("Kolya");
		std::cout << pres;
		test.signForm(pres);
		test.executeForm(pres);
		std::cout << BLUE << "\t=====RobotomyRequestForm=====" << RESET << std::endl;
		RobotomyRequestForm robot = RobotomyRequestForm("ROBOT");
		std::cout << robot;
		test.signForm(robot);
		test.executeForm(robot);
		std::cout << BLUE << "\t=====ShrubberyCreationForm=====" << RESET << std::endl;
		ShrubberyCreationForm tree = ShrubberyCreationForm("Home");
		std::cout << tree;
		test.signForm(tree);
		test.executeForm(tree);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	return 0;
}
