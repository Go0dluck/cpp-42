#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int	main()
{
	srand ( time(NULL) );
	Bureaucrat test = Bureaucrat("Dima", 3);
	Intern someRandomIntern;
	Form* rrf;
	std::cout << BLUE << "\t=====RobotomyRequestForm=====" << RESET << std::endl;
	if ((rrf = someRandomIntern.makeForm("robotomy request", "Bender")) != NULL)
	{
		try
		{
			test.signForm(*rrf);
			test.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << '\n';
		}
		delete (rrf);
	}
	std::cout << BLUE << "\t=====PresidentialPardonForm=====" << RESET << std::endl;
	if ((rrf = someRandomIntern.makeForm("presidential pardon", "Kolya")) != NULL)
	{
		try
		{
			test.signForm(*rrf);
			test.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << '\n';
		}
		delete (rrf);
	}
	std::cout << BLUE << "\t=====ShrubberyCreationForm=====" << RESET << std::endl;
	if ((rrf = someRandomIntern.makeForm("shrubbery creation", "home")) != NULL)
	{
		try
		{
			test.signForm(*rrf);
			test.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << '\n';
		}
		delete (rrf);
	}
	std::cout << BLUE << "\t=====ERROR FORM NAME=====" << RESET << std::endl;
	if ((rrf = someRandomIntern.makeForm("test", "home")) != NULL)
	{
		try
		{
			test.signForm(*rrf);
			test.executeForm(*rrf);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << '\n';
		}
		delete (rrf);
	}
	delete (rrf);
	return 0;
}
