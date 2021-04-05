#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_name = name;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	_name = cpy.getName();
	_grade = cpy.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper.getName();
	_grade = oper.getGrade();
	return (*this);
}

void	Bureaucrat::upGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::downGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &frm)
{
	if (frm.getSigned() == true)
		std::cout << RED << "!!! The form is already signed !!! " << RESET << std::endl;
	else
	{
		try
		{
			frm.beSigned(*this);
			std::cout << GREEN << this->getName() << " signs " << frm.getName() << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << RED << this->getName() << " cannot sign " << frm.getName() << " need grade " << frm.getGradeSigned() \
			<< " because Bureaucrat grade " << this->getGrade() << RESET << std::endl;
			std::cerr << RED << e.what() << RESET << '\n';
		}
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.getSigned() == false)
		std::cout << RED << "!!! The form not signed !!! " << RESET << std::endl;
	else
	{
		try
		{
			std::cout << GREEN << this->getName() << " executes " << form.getName() << RESET << std::endl;
			form.execute(*this);
		}
		catch(const std::exception& e)
		{
			std::cout << RED << this->getName() << " cannot exec " << form.getName() << " need grade " << form.getGradeExec() \
			<< " because Bureaucrat grade " << this->getGrade() << RESET << std::endl;
			std::cerr << RED << e.what() << RESET << '\n';
		}

	}
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int		Bureaucrat::getGrade() const
{
	return (_grade);
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bur)
{
	out << YELLOW << bur.getName() << ", bureaucrat grade " << bur.getGrade() << RESET << std::endl;
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception - GRADE TOO HIGH");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception - GRADE TOO LOW");
}
