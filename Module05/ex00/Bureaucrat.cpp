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
