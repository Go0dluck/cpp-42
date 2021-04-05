#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << BLUE << "\t=====-1 GRADE SIGNED FORM=====" << RESET << std::endl;
	try
	{
		Form form1 = Form("Form1", -1, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	std::cout << std::endl << BLUE << "\t=====151 GRADE EXEC FORM=====" << RESET << std::endl;
	try
	{
		Form form2 = Form("Form2", 1, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	std::cout << std::endl << BLUE << "\t=====NORM FORM LOW BUR=====" << RESET << std::endl;
	try
	{
		Form form3 = Form("Form3", 50, 100);
		Bureaucrat bur = Bureaucrat("Dima", 51);
		bur.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	std::cout << std::endl << BLUE << "\t=====NORM FORM NORM BUR=====" << RESET << std::endl;
	try
	{
		Form form3 = Form("Form3", 50, 100);
		Bureaucrat bur = Bureaucrat("Dima", 10);
		bur.signForm(form3);
		bur.signForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	return 0;
}
