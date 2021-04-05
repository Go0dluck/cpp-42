#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &cpy)
{
	(void)cpy;
}

Intern &Intern::operator=(const Intern &oper)
{
	(void)oper;
	return (*this);
}

Intern::~Intern()
{
}

Form* makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* makePresidentalForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(std::string formName, std::string target) const
{
	Form *frm = NULL;
	std::string nameForm[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form 	*formArray[] = {makeRobotomyForm(target), makePresidentalForm(target), makeShrubberyForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formName == nameForm[i])
		{
			std::cout << YELLOW << "Intern creates " << formName << RESET << std::endl;
			frm = formArray[i];
			continue ;
		}
		delete formArray[i];
	}
	if (frm != NULL)
		return (frm);
	std::cout << RED << "Intern not creates " << formName << RESET << std::endl;
	return (NULL);
}
